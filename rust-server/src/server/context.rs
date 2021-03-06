use std::io;
use std::marker::PhantomData;
use std::default::Default;
use hyper;
use hyper::{Request, Response, Error, StatusCode};
use server::url::form_urlencoded;
use swagger::auth::{Authorization, AuthData, Scopes};
use swagger::{Has, Pop, Push, XSpanIdString};
use swagger::headers::SafeHeaders;
use Api;

pub struct NewAddContext<T, A>
{
    inner: T,
    marker: PhantomData<A>,
}

impl<T, A, B, C, D> NewAddContext<T, A>
    where
        A: Default + Push<XSpanIdString, Result=B>,
        B: Push<Option<AuthData>, Result=C>,
        C: Push<Option<Authorization>, Result=D>,
        T: hyper::server::NewService<Request = (Request, D), Response = Response, Error = Error> + 'static,
{
    pub fn new(inner: T) -> NewAddContext<T, A> {
        NewAddContext {
            inner,
            marker: PhantomData,
        }
    }
}

impl<T, A, B, C, D> hyper::server::NewService for NewAddContext<T, A>
    where
        A: Default + Push<XSpanIdString, Result=B>,
        B: Push<Option<AuthData>, Result=C>,
        C: Push<Option<Authorization>, Result=D>,
        T: hyper::server::NewService<Request = (Request, D), Response = Response, Error = Error> + 'static,
{
    type Request = Request;
    type Response = Response;
    type Error = Error;
    type Instance = AddContext<T::Instance, A>;

    fn new_service(&self) -> Result<Self::Instance, io::Error> {
        self.inner.new_service().map(|s| AddContext::new(s))
    }
}

/// Middleware to extract authentication data from request
pub struct AddContext<T, A>
{
    inner: T,
    marker: PhantomData<A>,
}

impl<T, A, B, C, D> AddContext<T, A>
    where
        A: Default + Push<XSpanIdString, Result=B>,
        B: Push<Option<AuthData>, Result=C>,
        C: Push<Option<Authorization>, Result=D>,
        T: hyper::server::Service<Request = (Request, D), Response = Response, Error = Error>,
{
    pub fn new(inner: T) -> AddContext<T, A> {
        AddContext {
            inner,
            marker: PhantomData,
        }
    }
}

impl<T, A, B, C, D> hyper::server::Service for AddContext<T, A>
    where
        A: Default + Push<XSpanIdString, Result=B>,
        B: Push<Option<AuthData>, Result=C>,
        C: Push<Option<Authorization>, Result=D>,
        T: hyper::server::Service<Request = (Request, D), Response = Response, Error = Error>,
{
    type Request = Request;
    type Response = Response;
    type Error = Error;
    type Future = T::Future;

    fn call(&self, req: Self::Request) -> Self::Future {
        let context = A::default().push(XSpanIdString::get_or_generate(&req));

        {
            header! { (ApiKey1, "X-Api-Key") => [String] }
            if let Some(header) = req.headers().safe_get::<ApiKey1>() {
                let auth_data = AuthData::ApiKey(header.0);
                let context = context.push(Some(auth_data));
                let context = context.push(None::<Authorization>);
                return self.inner.call((req, context));
            }
        }
        {
            header! { (ApiKey2, "X-Application-Id") => [String] }
            if let Some(header) = req.headers().safe_get::<ApiKey2>() {
                let auth_data = AuthData::ApiKey(header.0);
                let context = context.push(Some(auth_data));
                let context = context.push(None::<Authorization>);
                return self.inner.call((req, context));
            }
        }

        let context = context.push(None::<AuthData>);
        let context = context.push(None::<Authorization>);
        return self.inner.call((req, context));
    }
}
