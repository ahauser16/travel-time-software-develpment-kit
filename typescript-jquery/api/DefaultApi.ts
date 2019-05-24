/**
 * TravelTime Platform API
 * No description provided (generated by Openapi Generator https://github.com/openapitools/openapi-generator)
 *
 * The version of the OpenAPI document: 1.0.0
 * Contact: support@igeolise.com
 *
 * NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */


import * as $ from 'jquery';
import * as models from '../model/models';
import { COLLECTION_FORMATS } from '../variables';
import { Configuration } from '../configuration';

/* tslint:disable:no-unused-variable member-ordering */


export class DefaultApi {
    protected basePath = 'https://api.traveltimeapp.com';
    public defaultHeaders: Array<string> = [];
    public defaultExtraJQueryAjaxSettings?: JQueryAjaxSettings = null;
    public configuration: Configuration = new Configuration();

    constructor(basePath?: string, configuration?: Configuration, defaultExtraJQueryAjaxSettings?: JQueryAjaxSettings) {
        if (basePath) {
            this.basePath = basePath;
        }
        if (configuration) {
            this.configuration = configuration;
        }
        if (defaultExtraJQueryAjaxSettings) {
            this.defaultExtraJQueryAjaxSettings = defaultExtraJQueryAjaxSettings;
        }
    }

    private extendObj<T1, T2 extends T1>(objA: T2, objB: T2): T1|T2 {
        for (let key in objB) {
            if (objB.hasOwnProperty(key)) {
                objA[key] = objB[key];
            }
        }
        return objA;
    }

    /**
     * 
     * @param focusLat 
     * @param focusLng 
     * @param withinCountry 
     */
    public geocodingReverseSearch(focusLat: number, focusLng: number, withinCountry?: string, extraJQueryAjaxSettings?: JQueryAjaxSettings): JQuery.Promise<
    { response: JQueryXHR; body: models.ResponseGeocoding;  },
    { response: JQueryXHR; errorThrown: string }
    > {
        let localVarPath = this.basePath + '/v4/geocoding/reverse';

        let queryParameters: any = {};
        let headerParams: any = {};
        // verify required parameter 'focusLat' is not null or undefined
        if (focusLat === null || focusLat === undefined) {
            throw new Error('Required parameter focusLat was null or undefined when calling geocodingReverseSearch.');
        }

        // verify required parameter 'focusLng' is not null or undefined
        if (focusLng === null || focusLng === undefined) {
            throw new Error('Required parameter focusLng was null or undefined when calling geocodingReverseSearch.');
        }

        if (focusLat !== null && focusLat !== undefined) {
            queryParameters['focus.lat'] = <string><any>focusLat;
        }
        if (focusLng !== null && focusLng !== undefined) {
            queryParameters['focus.lng'] = <string><any>focusLng;
        }
        if (withinCountry !== null && withinCountry !== undefined) {
            queryParameters['within.country'] = <string><any>withinCountry;
        }

        localVarPath = localVarPath + "?" + $.param(queryParameters);
        // to determine the Content-Type header
        let consumes: string[] = [
        ];

        // to determine the Accept header
        let produces: string[] = [
            'application/json'
        ];

        // authentication (ApiKey) required
        if (this.configuration.apiKey) {
            headerParams['X-Api-Key'] = this.configuration.apiKey;
        }

        // authentication (ApplicationId) required
        if (this.configuration.apiKey) {
            headerParams['X-Application-Id'] = this.configuration.apiKey;
        }


        let requestOptions: JQueryAjaxSettings = {
            url: localVarPath,
            type: 'GET',
            headers: headerParams,
            processData: false
        };

        if (headerParams['Content-Type']) {
            requestOptions.contentType = headerParams['Content-Type'];
        }

        if (extraJQueryAjaxSettings) {
            requestOptions = (<any>Object).assign(requestOptions, extraJQueryAjaxSettings);
        }

        if (this.defaultExtraJQueryAjaxSettings) {
            requestOptions = (<any>Object).assign(requestOptions, this.defaultExtraJQueryAjaxSettings);
        }

        let dfd = $.Deferred<
            { response: JQueryXHR; body: models.ResponseGeocoding;  },
            { response: JQueryXHR; errorThrown: string }
        >();
        $.ajax(requestOptions).then(
            (data: models.ResponseGeocoding, textStatus: string, jqXHR: JQueryXHR) =>
                dfd.resolve({response: jqXHR, body: data}),
            (xhr: JQueryXHR, textStatus: string, errorThrown: string) =>
                dfd.reject({response: xhr, errorThrown: errorThrown})
        );
        return dfd.promise();
    }

    /**
     * 
     * @param query 
     * @param withinCountry 
     * @param focusLat 
     * @param focusLng 
     */
    public geocodingSearch(query: string, withinCountry?: string, focusLat?: number, focusLng?: number, extraJQueryAjaxSettings?: JQueryAjaxSettings): JQuery.Promise<
    { response: JQueryXHR; body: models.ResponseGeocoding;  },
    { response: JQueryXHR; errorThrown: string }
    > {
        let localVarPath = this.basePath + '/v4/geocoding/search';

        let queryParameters: any = {};
        let headerParams: any = {};
        // verify required parameter 'query' is not null or undefined
        if (query === null || query === undefined) {
            throw new Error('Required parameter query was null or undefined when calling geocodingSearch.');
        }

        if (query !== null && query !== undefined) {
            queryParameters['query'] = <string><any>query;
        }
        if (withinCountry !== null && withinCountry !== undefined) {
            queryParameters['within.country'] = <string><any>withinCountry;
        }
        if (focusLat !== null && focusLat !== undefined) {
            queryParameters['focus.lat'] = <string><any>focusLat;
        }
        if (focusLng !== null && focusLng !== undefined) {
            queryParameters['focus.lng'] = <string><any>focusLng;
        }

        localVarPath = localVarPath + "?" + $.param(queryParameters);
        // to determine the Content-Type header
        let consumes: string[] = [
        ];

        // to determine the Accept header
        let produces: string[] = [
            'application/json'
        ];

        // authentication (ApiKey) required
        if (this.configuration.apiKey) {
            headerParams['X-Api-Key'] = this.configuration.apiKey;
        }

        // authentication (ApplicationId) required
        if (this.configuration.apiKey) {
            headerParams['X-Application-Id'] = this.configuration.apiKey;
        }


        let requestOptions: JQueryAjaxSettings = {
            url: localVarPath,
            type: 'GET',
            headers: headerParams,
            processData: false
        };

        if (headerParams['Content-Type']) {
            requestOptions.contentType = headerParams['Content-Type'];
        }

        if (extraJQueryAjaxSettings) {
            requestOptions = (<any>Object).assign(requestOptions, extraJQueryAjaxSettings);
        }

        if (this.defaultExtraJQueryAjaxSettings) {
            requestOptions = (<any>Object).assign(requestOptions, this.defaultExtraJQueryAjaxSettings);
        }

        let dfd = $.Deferred<
            { response: JQueryXHR; body: models.ResponseGeocoding;  },
            { response: JQueryXHR; errorThrown: string }
        >();
        $.ajax(requestOptions).then(
            (data: models.ResponseGeocoding, textStatus: string, jqXHR: JQueryXHR) =>
                dfd.resolve({response: jqXHR, body: data}),
            (xhr: JQueryXHR, textStatus: string, errorThrown: string) =>
                dfd.reject({response: xhr, errorThrown: errorThrown})
        );
        return dfd.promise();
    }

    /**
     * 
     */
    public mapInfo(extraJQueryAjaxSettings?: JQueryAjaxSettings): JQuery.Promise<
    { response: JQueryXHR; body: models.ResponseMapInfo;  },
    { response: JQueryXHR; errorThrown: string }
    > {
        let localVarPath = this.basePath + '/v4/map-info';

        let queryParameters: any = {};
        let headerParams: any = {};

        localVarPath = localVarPath + "?" + $.param(queryParameters);
        // to determine the Content-Type header
        let consumes: string[] = [
        ];

        // to determine the Accept header
        let produces: string[] = [
            'application/json'
        ];

        // authentication (ApiKey) required
        if (this.configuration.apiKey) {
            headerParams['X-Api-Key'] = this.configuration.apiKey;
        }

        // authentication (ApplicationId) required
        if (this.configuration.apiKey) {
            headerParams['X-Application-Id'] = this.configuration.apiKey;
        }


        let requestOptions: JQueryAjaxSettings = {
            url: localVarPath,
            type: 'GET',
            headers: headerParams,
            processData: false
        };

        if (headerParams['Content-Type']) {
            requestOptions.contentType = headerParams['Content-Type'];
        }

        if (extraJQueryAjaxSettings) {
            requestOptions = (<any>Object).assign(requestOptions, extraJQueryAjaxSettings);
        }

        if (this.defaultExtraJQueryAjaxSettings) {
            requestOptions = (<any>Object).assign(requestOptions, this.defaultExtraJQueryAjaxSettings);
        }

        let dfd = $.Deferred<
            { response: JQueryXHR; body: models.ResponseMapInfo;  },
            { response: JQueryXHR; errorThrown: string }
        >();
        $.ajax(requestOptions).then(
            (data: models.ResponseMapInfo, textStatus: string, jqXHR: JQueryXHR) =>
                dfd.resolve({response: jqXHR, body: data}),
            (xhr: JQueryXHR, textStatus: string, errorThrown: string) =>
                dfd.reject({response: xhr, errorThrown: errorThrown})
        );
        return dfd.promise();
    }

    /**
     * 
     * @param requestRoutes 
     */
    public routes(requestRoutes: models.RequestRoutes, extraJQueryAjaxSettings?: JQueryAjaxSettings): JQuery.Promise<
    { response: JQueryXHR; body: models.ResponseRoutes;  },
    { response: JQueryXHR; errorThrown: string }
    > {
        let localVarPath = this.basePath + '/v4/routes';

        let queryParameters: any = {};
        let headerParams: any = {};
        // verify required parameter 'requestRoutes' is not null or undefined
        if (requestRoutes === null || requestRoutes === undefined) {
            throw new Error('Required parameter requestRoutes was null or undefined when calling routes.');
        }


        localVarPath = localVarPath + "?" + $.param(queryParameters);
        // to determine the Content-Type header
        let consumes: string[] = [
            'application/json'
        ];

        // to determine the Accept header
        let produces: string[] = [
            'application/json'
        ];

        // authentication (ApiKey) required
        if (this.configuration.apiKey) {
            headerParams['X-Api-Key'] = this.configuration.apiKey;
        }

        // authentication (ApplicationId) required
        if (this.configuration.apiKey) {
            headerParams['X-Application-Id'] = this.configuration.apiKey;
        }


        headerParams['Content-Type'] = 'application/json';

        let requestOptions: JQueryAjaxSettings = {
            url: localVarPath,
            type: 'POST',
            headers: headerParams,
            processData: false
        };

        requestOptions.data = JSON.stringify(requestRoutes);
        if (headerParams['Content-Type']) {
            requestOptions.contentType = headerParams['Content-Type'];
        }

        if (extraJQueryAjaxSettings) {
            requestOptions = (<any>Object).assign(requestOptions, extraJQueryAjaxSettings);
        }

        if (this.defaultExtraJQueryAjaxSettings) {
            requestOptions = (<any>Object).assign(requestOptions, this.defaultExtraJQueryAjaxSettings);
        }

        let dfd = $.Deferred<
            { response: JQueryXHR; body: models.ResponseRoutes;  },
            { response: JQueryXHR; errorThrown: string }
        >();
        $.ajax(requestOptions).then(
            (data: models.ResponseRoutes, textStatus: string, jqXHR: JQueryXHR) =>
                dfd.resolve({response: jqXHR, body: data}),
            (xhr: JQueryXHR, textStatus: string, errorThrown: string) =>
                dfd.reject({response: xhr, errorThrown: errorThrown})
        );
        return dfd.promise();
    }

    /**
     * 
     * @param requestSupportedLocations 
     */
    public supportedLocations(requestSupportedLocations: models.RequestSupportedLocations, extraJQueryAjaxSettings?: JQueryAjaxSettings): JQuery.Promise<
    { response: JQueryXHR; body: models.ResponseSupportedLocations;  },
    { response: JQueryXHR; errorThrown: string }
    > {
        let localVarPath = this.basePath + '/v4/supported-locations';

        let queryParameters: any = {};
        let headerParams: any = {};
        // verify required parameter 'requestSupportedLocations' is not null or undefined
        if (requestSupportedLocations === null || requestSupportedLocations === undefined) {
            throw new Error('Required parameter requestSupportedLocations was null or undefined when calling supportedLocations.');
        }


        localVarPath = localVarPath + "?" + $.param(queryParameters);
        // to determine the Content-Type header
        let consumes: string[] = [
            'application/json'
        ];

        // to determine the Accept header
        let produces: string[] = [
            'application/json'
        ];

        // authentication (ApiKey) required
        if (this.configuration.apiKey) {
            headerParams['X-Api-Key'] = this.configuration.apiKey;
        }

        // authentication (ApplicationId) required
        if (this.configuration.apiKey) {
            headerParams['X-Application-Id'] = this.configuration.apiKey;
        }


        headerParams['Content-Type'] = 'application/json';

        let requestOptions: JQueryAjaxSettings = {
            url: localVarPath,
            type: 'POST',
            headers: headerParams,
            processData: false
        };

        requestOptions.data = JSON.stringify(requestSupportedLocations);
        if (headerParams['Content-Type']) {
            requestOptions.contentType = headerParams['Content-Type'];
        }

        if (extraJQueryAjaxSettings) {
            requestOptions = (<any>Object).assign(requestOptions, extraJQueryAjaxSettings);
        }

        if (this.defaultExtraJQueryAjaxSettings) {
            requestOptions = (<any>Object).assign(requestOptions, this.defaultExtraJQueryAjaxSettings);
        }

        let dfd = $.Deferred<
            { response: JQueryXHR; body: models.ResponseSupportedLocations;  },
            { response: JQueryXHR; errorThrown: string }
        >();
        $.ajax(requestOptions).then(
            (data: models.ResponseSupportedLocations, textStatus: string, jqXHR: JQueryXHR) =>
                dfd.resolve({response: jqXHR, body: data}),
            (xhr: JQueryXHR, textStatus: string, errorThrown: string) =>
                dfd.reject({response: xhr, errorThrown: errorThrown})
        );
        return dfd.promise();
    }

    /**
     * 
     * @param requestTimeFilter 
     */
    public timeFilter(requestTimeFilter: models.RequestTimeFilter, extraJQueryAjaxSettings?: JQueryAjaxSettings): JQuery.Promise<
    { response: JQueryXHR; body: models.ResponseTimeFilter;  },
    { response: JQueryXHR; errorThrown: string }
    > {
        let localVarPath = this.basePath + '/v4/time-filter';

        let queryParameters: any = {};
        let headerParams: any = {};
        // verify required parameter 'requestTimeFilter' is not null or undefined
        if (requestTimeFilter === null || requestTimeFilter === undefined) {
            throw new Error('Required parameter requestTimeFilter was null or undefined when calling timeFilter.');
        }


        localVarPath = localVarPath + "?" + $.param(queryParameters);
        // to determine the Content-Type header
        let consumes: string[] = [
            'application/json'
        ];

        // to determine the Accept header
        let produces: string[] = [
            'application/json'
        ];

        // authentication (ApiKey) required
        if (this.configuration.apiKey) {
            headerParams['X-Api-Key'] = this.configuration.apiKey;
        }

        // authentication (ApplicationId) required
        if (this.configuration.apiKey) {
            headerParams['X-Application-Id'] = this.configuration.apiKey;
        }


        headerParams['Content-Type'] = 'application/json';

        let requestOptions: JQueryAjaxSettings = {
            url: localVarPath,
            type: 'POST',
            headers: headerParams,
            processData: false
        };

        requestOptions.data = JSON.stringify(requestTimeFilter);
        if (headerParams['Content-Type']) {
            requestOptions.contentType = headerParams['Content-Type'];
        }

        if (extraJQueryAjaxSettings) {
            requestOptions = (<any>Object).assign(requestOptions, extraJQueryAjaxSettings);
        }

        if (this.defaultExtraJQueryAjaxSettings) {
            requestOptions = (<any>Object).assign(requestOptions, this.defaultExtraJQueryAjaxSettings);
        }

        let dfd = $.Deferred<
            { response: JQueryXHR; body: models.ResponseTimeFilter;  },
            { response: JQueryXHR; errorThrown: string }
        >();
        $.ajax(requestOptions).then(
            (data: models.ResponseTimeFilter, textStatus: string, jqXHR: JQueryXHR) =>
                dfd.resolve({response: jqXHR, body: data}),
            (xhr: JQueryXHR, textStatus: string, errorThrown: string) =>
                dfd.reject({response: xhr, errorThrown: errorThrown})
        );
        return dfd.promise();
    }

    /**
     * 
     * @param requestTimeFilterFast 
     */
    public timeFilterFast(requestTimeFilterFast: models.RequestTimeFilterFast, extraJQueryAjaxSettings?: JQueryAjaxSettings): JQuery.Promise<
    { response: JQueryXHR; body: models.ResponseTimeFilterFast;  },
    { response: JQueryXHR; errorThrown: string }
    > {
        let localVarPath = this.basePath + '/v4/time-filter/fast';

        let queryParameters: any = {};
        let headerParams: any = {};
        // verify required parameter 'requestTimeFilterFast' is not null or undefined
        if (requestTimeFilterFast === null || requestTimeFilterFast === undefined) {
            throw new Error('Required parameter requestTimeFilterFast was null or undefined when calling timeFilterFast.');
        }


        localVarPath = localVarPath + "?" + $.param(queryParameters);
        // to determine the Content-Type header
        let consumes: string[] = [
            'application/json'
        ];

        // to determine the Accept header
        let produces: string[] = [
            'application/json'
        ];

        // authentication (ApiKey) required
        if (this.configuration.apiKey) {
            headerParams['X-Api-Key'] = this.configuration.apiKey;
        }

        // authentication (ApplicationId) required
        if (this.configuration.apiKey) {
            headerParams['X-Application-Id'] = this.configuration.apiKey;
        }


        headerParams['Content-Type'] = 'application/json';

        let requestOptions: JQueryAjaxSettings = {
            url: localVarPath,
            type: 'POST',
            headers: headerParams,
            processData: false
        };

        requestOptions.data = JSON.stringify(requestTimeFilterFast);
        if (headerParams['Content-Type']) {
            requestOptions.contentType = headerParams['Content-Type'];
        }

        if (extraJQueryAjaxSettings) {
            requestOptions = (<any>Object).assign(requestOptions, extraJQueryAjaxSettings);
        }

        if (this.defaultExtraJQueryAjaxSettings) {
            requestOptions = (<any>Object).assign(requestOptions, this.defaultExtraJQueryAjaxSettings);
        }

        let dfd = $.Deferred<
            { response: JQueryXHR; body: models.ResponseTimeFilterFast;  },
            { response: JQueryXHR; errorThrown: string }
        >();
        $.ajax(requestOptions).then(
            (data: models.ResponseTimeFilterFast, textStatus: string, jqXHR: JQueryXHR) =>
                dfd.resolve({response: jqXHR, body: data}),
            (xhr: JQueryXHR, textStatus: string, errorThrown: string) =>
                dfd.reject({response: xhr, errorThrown: errorThrown})
        );
        return dfd.promise();
    }

    /**
     * 
     * @param requestTimeFilterPostcodeDistricts 
     */
    public timeFilterPostcodeDistricts(requestTimeFilterPostcodeDistricts: models.RequestTimeFilterPostcodeDistricts, extraJQueryAjaxSettings?: JQueryAjaxSettings): JQuery.Promise<
    { response: JQueryXHR; body: models.ResponseTimeFilterPostcodeDistricts;  },
    { response: JQueryXHR; errorThrown: string }
    > {
        let localVarPath = this.basePath + '/v4/time-filter/postcode-districts';

        let queryParameters: any = {};
        let headerParams: any = {};
        // verify required parameter 'requestTimeFilterPostcodeDistricts' is not null or undefined
        if (requestTimeFilterPostcodeDistricts === null || requestTimeFilterPostcodeDistricts === undefined) {
            throw new Error('Required parameter requestTimeFilterPostcodeDistricts was null or undefined when calling timeFilterPostcodeDistricts.');
        }


        localVarPath = localVarPath + "?" + $.param(queryParameters);
        // to determine the Content-Type header
        let consumes: string[] = [
            'application/json'
        ];

        // to determine the Accept header
        let produces: string[] = [
            'application/json'
        ];

        // authentication (ApiKey) required
        if (this.configuration.apiKey) {
            headerParams['X-Api-Key'] = this.configuration.apiKey;
        }

        // authentication (ApplicationId) required
        if (this.configuration.apiKey) {
            headerParams['X-Application-Id'] = this.configuration.apiKey;
        }


        headerParams['Content-Type'] = 'application/json';

        let requestOptions: JQueryAjaxSettings = {
            url: localVarPath,
            type: 'POST',
            headers: headerParams,
            processData: false
        };

        requestOptions.data = JSON.stringify(requestTimeFilterPostcodeDistricts);
        if (headerParams['Content-Type']) {
            requestOptions.contentType = headerParams['Content-Type'];
        }

        if (extraJQueryAjaxSettings) {
            requestOptions = (<any>Object).assign(requestOptions, extraJQueryAjaxSettings);
        }

        if (this.defaultExtraJQueryAjaxSettings) {
            requestOptions = (<any>Object).assign(requestOptions, this.defaultExtraJQueryAjaxSettings);
        }

        let dfd = $.Deferred<
            { response: JQueryXHR; body: models.ResponseTimeFilterPostcodeDistricts;  },
            { response: JQueryXHR; errorThrown: string }
        >();
        $.ajax(requestOptions).then(
            (data: models.ResponseTimeFilterPostcodeDistricts, textStatus: string, jqXHR: JQueryXHR) =>
                dfd.resolve({response: jqXHR, body: data}),
            (xhr: JQueryXHR, textStatus: string, errorThrown: string) =>
                dfd.reject({response: xhr, errorThrown: errorThrown})
        );
        return dfd.promise();
    }

    /**
     * 
     * @param requestTimeFilterPostcodeSectors 
     */
    public timeFilterPostcodeSectors(requestTimeFilterPostcodeSectors: models.RequestTimeFilterPostcodeSectors, extraJQueryAjaxSettings?: JQueryAjaxSettings): JQuery.Promise<
    { response: JQueryXHR; body: models.ResponseTimeFilterPostcodeSectors;  },
    { response: JQueryXHR; errorThrown: string }
    > {
        let localVarPath = this.basePath + '/v4/time-filter/postcode-sectors';

        let queryParameters: any = {};
        let headerParams: any = {};
        // verify required parameter 'requestTimeFilterPostcodeSectors' is not null or undefined
        if (requestTimeFilterPostcodeSectors === null || requestTimeFilterPostcodeSectors === undefined) {
            throw new Error('Required parameter requestTimeFilterPostcodeSectors was null or undefined when calling timeFilterPostcodeSectors.');
        }


        localVarPath = localVarPath + "?" + $.param(queryParameters);
        // to determine the Content-Type header
        let consumes: string[] = [
            'application/json'
        ];

        // to determine the Accept header
        let produces: string[] = [
            'application/json'
        ];

        // authentication (ApiKey) required
        if (this.configuration.apiKey) {
            headerParams['X-Api-Key'] = this.configuration.apiKey;
        }

        // authentication (ApplicationId) required
        if (this.configuration.apiKey) {
            headerParams['X-Application-Id'] = this.configuration.apiKey;
        }


        headerParams['Content-Type'] = 'application/json';

        let requestOptions: JQueryAjaxSettings = {
            url: localVarPath,
            type: 'POST',
            headers: headerParams,
            processData: false
        };

        requestOptions.data = JSON.stringify(requestTimeFilterPostcodeSectors);
        if (headerParams['Content-Type']) {
            requestOptions.contentType = headerParams['Content-Type'];
        }

        if (extraJQueryAjaxSettings) {
            requestOptions = (<any>Object).assign(requestOptions, extraJQueryAjaxSettings);
        }

        if (this.defaultExtraJQueryAjaxSettings) {
            requestOptions = (<any>Object).assign(requestOptions, this.defaultExtraJQueryAjaxSettings);
        }

        let dfd = $.Deferred<
            { response: JQueryXHR; body: models.ResponseTimeFilterPostcodeSectors;  },
            { response: JQueryXHR; errorThrown: string }
        >();
        $.ajax(requestOptions).then(
            (data: models.ResponseTimeFilterPostcodeSectors, textStatus: string, jqXHR: JQueryXHR) =>
                dfd.resolve({response: jqXHR, body: data}),
            (xhr: JQueryXHR, textStatus: string, errorThrown: string) =>
                dfd.reject({response: xhr, errorThrown: errorThrown})
        );
        return dfd.promise();
    }

    /**
     * 
     * @param requestTimeFilterPostcodes 
     */
    public timeFilterPostcodes(requestTimeFilterPostcodes: models.RequestTimeFilterPostcodes, extraJQueryAjaxSettings?: JQueryAjaxSettings): JQuery.Promise<
    { response: JQueryXHR; body: models.ResponseTimeFilterPostcodes;  },
    { response: JQueryXHR; errorThrown: string }
    > {
        let localVarPath = this.basePath + '/v4/time-filter/postcodes';

        let queryParameters: any = {};
        let headerParams: any = {};
        // verify required parameter 'requestTimeFilterPostcodes' is not null or undefined
        if (requestTimeFilterPostcodes === null || requestTimeFilterPostcodes === undefined) {
            throw new Error('Required parameter requestTimeFilterPostcodes was null or undefined when calling timeFilterPostcodes.');
        }


        localVarPath = localVarPath + "?" + $.param(queryParameters);
        // to determine the Content-Type header
        let consumes: string[] = [
            'application/json'
        ];

        // to determine the Accept header
        let produces: string[] = [
            'application/json'
        ];

        // authentication (ApiKey) required
        if (this.configuration.apiKey) {
            headerParams['X-Api-Key'] = this.configuration.apiKey;
        }

        // authentication (ApplicationId) required
        if (this.configuration.apiKey) {
            headerParams['X-Application-Id'] = this.configuration.apiKey;
        }


        headerParams['Content-Type'] = 'application/json';

        let requestOptions: JQueryAjaxSettings = {
            url: localVarPath,
            type: 'POST',
            headers: headerParams,
            processData: false
        };

        requestOptions.data = JSON.stringify(requestTimeFilterPostcodes);
        if (headerParams['Content-Type']) {
            requestOptions.contentType = headerParams['Content-Type'];
        }

        if (extraJQueryAjaxSettings) {
            requestOptions = (<any>Object).assign(requestOptions, extraJQueryAjaxSettings);
        }

        if (this.defaultExtraJQueryAjaxSettings) {
            requestOptions = (<any>Object).assign(requestOptions, this.defaultExtraJQueryAjaxSettings);
        }

        let dfd = $.Deferred<
            { response: JQueryXHR; body: models.ResponseTimeFilterPostcodes;  },
            { response: JQueryXHR; errorThrown: string }
        >();
        $.ajax(requestOptions).then(
            (data: models.ResponseTimeFilterPostcodes, textStatus: string, jqXHR: JQueryXHR) =>
                dfd.resolve({response: jqXHR, body: data}),
            (xhr: JQueryXHR, textStatus: string, errorThrown: string) =>
                dfd.reject({response: xhr, errorThrown: errorThrown})
        );
        return dfd.promise();
    }

    /**
     * 
     * @param requestTimeMap 
     */
    public timeMap(requestTimeMap: models.RequestTimeMap, extraJQueryAjaxSettings?: JQueryAjaxSettings): JQuery.Promise<
    { response: JQueryXHR; body: models.ResponseTimeMap;  },
    { response: JQueryXHR; errorThrown: string }
    > {
        let localVarPath = this.basePath + '/v4/time-map';

        let queryParameters: any = {};
        let headerParams: any = {};
        // verify required parameter 'requestTimeMap' is not null or undefined
        if (requestTimeMap === null || requestTimeMap === undefined) {
            throw new Error('Required parameter requestTimeMap was null or undefined when calling timeMap.');
        }


        localVarPath = localVarPath + "?" + $.param(queryParameters);
        // to determine the Content-Type header
        let consumes: string[] = [
            'application/json'
        ];

        // to determine the Accept header
        let produces: string[] = [
            'application/json', 
            'application/vnd.wkt+json', 
            'application/vnd.wkt-no-holes+json', 
            'application/vnd.bounding-boxes+json'
        ];

        // authentication (ApiKey) required
        if (this.configuration.apiKey) {
            headerParams['X-Api-Key'] = this.configuration.apiKey;
        }

        // authentication (ApplicationId) required
        if (this.configuration.apiKey) {
            headerParams['X-Application-Id'] = this.configuration.apiKey;
        }


        headerParams['Content-Type'] = 'application/json';

        let requestOptions: JQueryAjaxSettings = {
            url: localVarPath,
            type: 'POST',
            headers: headerParams,
            processData: false
        };

        requestOptions.data = JSON.stringify(requestTimeMap);
        if (headerParams['Content-Type']) {
            requestOptions.contentType = headerParams['Content-Type'];
        }

        if (extraJQueryAjaxSettings) {
            requestOptions = (<any>Object).assign(requestOptions, extraJQueryAjaxSettings);
        }

        if (this.defaultExtraJQueryAjaxSettings) {
            requestOptions = (<any>Object).assign(requestOptions, this.defaultExtraJQueryAjaxSettings);
        }

        let dfd = $.Deferred<
            { response: JQueryXHR; body: models.ResponseTimeMap;  },
            { response: JQueryXHR; errorThrown: string }
        >();
        $.ajax(requestOptions).then(
            (data: models.ResponseTimeMap, textStatus: string, jqXHR: JQueryXHR) =>
                dfd.resolve({response: jqXHR, body: data}),
            (xhr: JQueryXHR, textStatus: string, errorThrown: string) =>
                dfd.reject({response: xhr, errorThrown: errorThrown})
        );
        return dfd.promise();
    }

}
