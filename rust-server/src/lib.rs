#![allow(missing_docs, trivial_casts, unused_variables, unused_mut, unused_imports, unused_extern_crates, non_camel_case_types)]

#[macro_use]
extern crate lazy_static;
#[macro_use]
extern crate log;
#[macro_use]
extern crate serde_derive;

#[cfg(any(feature = "client", feature = "server"))]
#[macro_use]
extern crate hyper;
#[cfg(any(feature = "client", feature = "server"))]
#[macro_use]
extern crate url;

// Crates for conversion support
#[cfg(feature = "conversion")]
#[macro_use]
extern crate frunk_derives;
#[cfg(feature = "conversion")]
#[macro_use]
extern crate frunk_enum_derive;
#[cfg(feature = "conversion")]
extern crate frunk_core;

extern crate mime;
extern crate serde;
extern crate serde_json;

extern crate futures;
extern crate chrono;
extern crate swagger;

use futures::Stream;
use std::io::Error;

#[allow(unused_imports)]
use std::collections::HashMap;

#[cfg(any(feature = "client", feature = "server"))]
mod mimetypes;

#[deprecated(note = "Import swagger-rs directly")]
pub use swagger::{ApiError, ContextWrapper};
#[deprecated(note = "Import futures directly")]
pub use futures::Future;

pub const BASE_PATH: &'static str = "";
pub const API_VERSION: &'static str = "1.0.0";


#[derive(Debug, PartialEq)]
pub enum GeocodingReverseSearchResponse {
    /// Match a query string to geographic coordinates. [Docs link](http://docs.traveltimeplatform.com/reference/geocoding-search/)
    MatchAQueryStringToGeographicCoordinates
    (models::ResponseGeocoding)
    ,
    /// The json body returned upon error. [Docs link](http://docs.traveltimeplatform.com/reference/error-response)
    TheJsonBodyReturnedUponError
    (models::ResponseError)
}

#[derive(Debug, PartialEq)]
pub enum GeocodingSearchResponse {
    /// Match a query string to geographic coordinates. [Docs link](http://docs.traveltimeplatform.com/reference/geocoding-search/)
    MatchAQueryStringToGeographicCoordinates
    (models::ResponseGeocoding)
    ,
    /// The json body returned upon error. [Docs link](http://docs.traveltimeplatform.com/reference/error-response)
    TheJsonBodyReturnedUponError
    (models::ResponseError)
}

#[derive(Debug, PartialEq)]
pub enum MapInfoResponse {
    /// Returns information about currently supported countries. [Docs link](http://docs.traveltimeplatform.com/reference/map-info/)
    ReturnsInformationAboutCurrentlySupportedCountries
    (models::ResponseMapInfo)
    ,
    /// The json body returned upon error. [Docs link](http://docs.traveltimeplatform.com/reference/error-response)
    TheJsonBodyReturnedUponError
    (models::ResponseError)
}

#[derive(Debug, PartialEq)]
pub enum RoutesResponse {
    /// Returns routing information between source and destinations. [Docs link](http://docs.traveltimeplatform.com/reference/routes/)
    ReturnsRoutingInformationBetweenSourceAndDestinations
    (models::ResponseRoutes)
    ,
    /// The json body returned upon error. [Docs link](http://docs.traveltimeplatform.com/reference/error-response)
    TheJsonBodyReturnedUponError
    (models::ResponseError)
}

#[derive(Debug, PartialEq)]
pub enum SupportedLocationsResponse {
    /// Find out what points are supported by our api. [Docs link](http://docs.traveltimeplatform.com/reference/supported-locations/)
    FindOutWhatPointsAreSupportedByOurApi
    (models::ResponseSupportedLocations)
    ,
    /// The json body returned upon error. [Docs link](http://docs.traveltimeplatform.com/reference/error-response)
    TheJsonBodyReturnedUponError
    (models::ResponseError)
}

#[derive(Debug, PartialEq)]
pub enum TimeFilterResponse {
    /// Given origin and destination points filter out points that cannot be reached within specified time limit. [Docs link](http://docs.traveltimeplatform.com/reference/time-filter)
    GivenOriginAndDestinationPointsFilterOutPointsThatCannotBeReachedWithinSpecifiedTimeLimit
    (models::ResponseTimeFilter)
    ,
    /// The json body returned upon error. [Docs link](http://docs.traveltimeplatform.com/reference/error-response)
    TheJsonBodyReturnedUponError
    (models::ResponseError)
}

#[derive(Debug, PartialEq)]
pub enum TimeFilterFastResponse {
    /// A very fast version of Time Filter. [Docs link](http://docs.traveltimeplatform.com/reference/time-filter-fast/)
    AVeryFastVersionOfTimeFilter
    (models::ResponseTimeFilterFast)
    ,
    /// The json body returned upon error. [Docs link](http://docs.traveltimeplatform.com/reference/error-response)
    TheJsonBodyReturnedUponError
    (models::ResponseError)
}

#[derive(Debug, PartialEq)]
pub enum TimeFilterPostcodeDistrictsResponse {
    /// Find districts that have a certain coverage from origin and get statistics about postcodes within such districts. [Docs link](http://docs.traveltimeplatform.com/reference/postcode-district-filter/)
    FindDistrictsThatHaveACertainCoverageFromOriginAndGetStatisticsAboutPostcodesWithinSuchDistricts
    (models::ResponseTimeFilterPostcodeDistricts)
    ,
    /// The json body returned upon error. [Docs link](http://docs.traveltimeplatform.com/reference/error-response)
    TheJsonBodyReturnedUponError
    (models::ResponseError)
}

#[derive(Debug, PartialEq)]
pub enum TimeFilterPostcodeSectorsResponse {
    /// Find sectors that have a certain coverage from origin and get statistics about postcodes within such sectors. [Docs link](http://docs.traveltimeplatform.com/reference/postcode-sector-filter/)
    FindSectorsThatHaveACertainCoverageFromOriginAndGetStatisticsAboutPostcodesWithinSuchSectors
    (models::ResponseTimeFilterPostcodeSectors)
    ,
    /// The json body returned upon error. [Docs link](http://docs.traveltimeplatform.com/reference/error-response)
    TheJsonBodyReturnedUponError
    (models::ResponseError)
}

#[derive(Debug, PartialEq)]
pub enum TimeFilterPostcodesResponse {
    /// Find reachable postcodes from origin and get statistics about such postcodes. [Docs link](http://docs.traveltimeplatform.com/reference/postcode-search/)
    FindReachablePostcodesFromOriginAndGetStatisticsAboutSuchPostcodes
    (models::ResponseTimeFilterPostcodes)
    ,
    /// The json body returned upon error. [Docs link](http://docs.traveltimeplatform.com/reference/error-response)
    TheJsonBodyReturnedUponError
    (models::ResponseError)
}

#[derive(Debug, PartialEq)]
pub enum TimeMapResponse {
    /// Given origin coordinates, find shapes of zones reachable within corresponding travel time. [Docs link](http://docs.traveltimeplatform.com/reference/time-map/)
    GivenOriginCoordinates
    (models::ResponseTimeMap)
    ,
    /// The json body returned upon error. [Docs link](http://docs.traveltimeplatform.com/reference/error-response)
    TheJsonBodyReturnedUponError
    (models::ResponseError)
}


/// API
pub trait Api<C> {


    fn geocoding_reverse_search(&self, lat: f64, lng: f64, within_country: Option<String>, context: &C) -> Box<dyn Future<Item=GeocodingReverseSearchResponse, Error=ApiError>>;


    fn geocoding_search(&self, query: String, focus_lat: Option<f64>, focus_lng: Option<f64>, within_country: Option<String>, context: &C) -> Box<dyn Future<Item=GeocodingSearchResponse, Error=ApiError>>;


    fn map_info(&self, context: &C) -> Box<dyn Future<Item=MapInfoResponse, Error=ApiError>>;


    fn routes(&self, request_routes: models::RequestRoutes, context: &C) -> Box<dyn Future<Item=RoutesResponse, Error=ApiError>>;


    fn supported_locations(&self, request_supported_locations: models::RequestSupportedLocations, context: &C) -> Box<dyn Future<Item=SupportedLocationsResponse, Error=ApiError>>;


    fn time_filter(&self, request_time_filter: models::RequestTimeFilter, context: &C) -> Box<dyn Future<Item=TimeFilterResponse, Error=ApiError>>;


    fn time_filter_fast(&self, request_time_filter_fast: models::RequestTimeFilterFast, context: &C) -> Box<dyn Future<Item=TimeFilterFastResponse, Error=ApiError>>;


    fn time_filter_postcode_districts(&self, request_time_filter_postcode_districts: models::RequestTimeFilterPostcodeDistricts, context: &C) -> Box<dyn Future<Item=TimeFilterPostcodeDistrictsResponse, Error=ApiError>>;


    fn time_filter_postcode_sectors(&self, request_time_filter_postcode_sectors: models::RequestTimeFilterPostcodeSectors, context: &C) -> Box<dyn Future<Item=TimeFilterPostcodeSectorsResponse, Error=ApiError>>;


    fn time_filter_postcodes(&self, request_time_filter_postcodes: models::RequestTimeFilterPostcodes, context: &C) -> Box<dyn Future<Item=TimeFilterPostcodesResponse, Error=ApiError>>;


    fn time_map(&self, request_time_map: models::RequestTimeMap, context: &C) -> Box<dyn Future<Item=TimeMapResponse, Error=ApiError>>;

}

/// API without a `Context`
pub trait ApiNoContext {


    fn geocoding_reverse_search(&self, lat: f64, lng: f64, within_country: Option<String>) -> Box<dyn Future<Item=GeocodingReverseSearchResponse, Error=ApiError>>;


    fn geocoding_search(&self, query: String, focus_lat: Option<f64>, focus_lng: Option<f64>, within_country: Option<String>) -> Box<dyn Future<Item=GeocodingSearchResponse, Error=ApiError>>;


    fn map_info(&self) -> Box<dyn Future<Item=MapInfoResponse, Error=ApiError>>;


    fn routes(&self, request_routes: models::RequestRoutes) -> Box<dyn Future<Item=RoutesResponse, Error=ApiError>>;


    fn supported_locations(&self, request_supported_locations: models::RequestSupportedLocations) -> Box<dyn Future<Item=SupportedLocationsResponse, Error=ApiError>>;


    fn time_filter(&self, request_time_filter: models::RequestTimeFilter) -> Box<dyn Future<Item=TimeFilterResponse, Error=ApiError>>;


    fn time_filter_fast(&self, request_time_filter_fast: models::RequestTimeFilterFast) -> Box<dyn Future<Item=TimeFilterFastResponse, Error=ApiError>>;


    fn time_filter_postcode_districts(&self, request_time_filter_postcode_districts: models::RequestTimeFilterPostcodeDistricts) -> Box<dyn Future<Item=TimeFilterPostcodeDistrictsResponse, Error=ApiError>>;


    fn time_filter_postcode_sectors(&self, request_time_filter_postcode_sectors: models::RequestTimeFilterPostcodeSectors) -> Box<dyn Future<Item=TimeFilterPostcodeSectorsResponse, Error=ApiError>>;


    fn time_filter_postcodes(&self, request_time_filter_postcodes: models::RequestTimeFilterPostcodes) -> Box<dyn Future<Item=TimeFilterPostcodesResponse, Error=ApiError>>;


    fn time_map(&self, request_time_map: models::RequestTimeMap) -> Box<dyn Future<Item=TimeMapResponse, Error=ApiError>>;

}

/// Trait to extend an API to make it easy to bind it to a context.
pub trait ContextWrapperExt<'a, C> where Self: Sized {
    /// Binds this API to a context.
    fn with_context(self: &'a Self, context: C) -> ContextWrapper<'a, Self, C>;
}

impl<'a, T: Api<C> + Sized, C> ContextWrapperExt<'a, C> for T {
    fn with_context(self: &'a T, context: C) -> ContextWrapper<'a, T, C> {
         ContextWrapper::<T, C>::new(self, context)
    }
}

impl<'a, T: Api<C>, C> ApiNoContext for ContextWrapper<'a, T, C> {


    fn geocoding_reverse_search(&self, lat: f64, lng: f64, within_country: Option<String>) -> Box<dyn Future<Item=GeocodingReverseSearchResponse, Error=ApiError>> {
        self.api().geocoding_reverse_search(lat, lng, within_country, &self.context())
    }


    fn geocoding_search(&self, query: String, focus_lat: Option<f64>, focus_lng: Option<f64>, within_country: Option<String>) -> Box<dyn Future<Item=GeocodingSearchResponse, Error=ApiError>> {
        self.api().geocoding_search(query, focus_lat, focus_lng, within_country, &self.context())
    }


    fn map_info(&self) -> Box<dyn Future<Item=MapInfoResponse, Error=ApiError>> {
        self.api().map_info(&self.context())
    }


    fn routes(&self, request_routes: models::RequestRoutes) -> Box<dyn Future<Item=RoutesResponse, Error=ApiError>> {
        self.api().routes(request_routes, &self.context())
    }


    fn supported_locations(&self, request_supported_locations: models::RequestSupportedLocations) -> Box<dyn Future<Item=SupportedLocationsResponse, Error=ApiError>> {
        self.api().supported_locations(request_supported_locations, &self.context())
    }


    fn time_filter(&self, request_time_filter: models::RequestTimeFilter) -> Box<dyn Future<Item=TimeFilterResponse, Error=ApiError>> {
        self.api().time_filter(request_time_filter, &self.context())
    }


    fn time_filter_fast(&self, request_time_filter_fast: models::RequestTimeFilterFast) -> Box<dyn Future<Item=TimeFilterFastResponse, Error=ApiError>> {
        self.api().time_filter_fast(request_time_filter_fast, &self.context())
    }


    fn time_filter_postcode_districts(&self, request_time_filter_postcode_districts: models::RequestTimeFilterPostcodeDistricts) -> Box<dyn Future<Item=TimeFilterPostcodeDistrictsResponse, Error=ApiError>> {
        self.api().time_filter_postcode_districts(request_time_filter_postcode_districts, &self.context())
    }


    fn time_filter_postcode_sectors(&self, request_time_filter_postcode_sectors: models::RequestTimeFilterPostcodeSectors) -> Box<dyn Future<Item=TimeFilterPostcodeSectorsResponse, Error=ApiError>> {
        self.api().time_filter_postcode_sectors(request_time_filter_postcode_sectors, &self.context())
    }


    fn time_filter_postcodes(&self, request_time_filter_postcodes: models::RequestTimeFilterPostcodes) -> Box<dyn Future<Item=TimeFilterPostcodesResponse, Error=ApiError>> {
        self.api().time_filter_postcodes(request_time_filter_postcodes, &self.context())
    }


    fn time_map(&self, request_time_map: models::RequestTimeMap) -> Box<dyn Future<Item=TimeMapResponse, Error=ApiError>> {
        self.api().time_map(request_time_map, &self.context())
    }

}

#[cfg(feature = "client")]
pub mod client;

// Re-export Client as a top-level name
#[cfg(feature = "client")]
pub use self::client::Client;

#[cfg(feature = "server")]
pub mod server;

// Re-export router() as a top-level name
#[cfg(feature = "server")]
pub use self::server::Service;

pub mod models;
