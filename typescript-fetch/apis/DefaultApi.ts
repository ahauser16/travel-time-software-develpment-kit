// tslint:disable
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


import * as runtime from '../runtime';
import {
    RequestRoutes,
    RequestRoutesFromJSON,
    RequestRoutesToJSON,
    RequestSupportedLocations,
    RequestSupportedLocationsFromJSON,
    RequestSupportedLocationsToJSON,
    RequestTimeFilter,
    RequestTimeFilterFromJSON,
    RequestTimeFilterToJSON,
    RequestTimeFilterFast,
    RequestTimeFilterFastFromJSON,
    RequestTimeFilterFastToJSON,
    RequestTimeFilterPostcodeDistricts,
    RequestTimeFilterPostcodeDistrictsFromJSON,
    RequestTimeFilterPostcodeDistrictsToJSON,
    RequestTimeFilterPostcodeSectors,
    RequestTimeFilterPostcodeSectorsFromJSON,
    RequestTimeFilterPostcodeSectorsToJSON,
    RequestTimeFilterPostcodes,
    RequestTimeFilterPostcodesFromJSON,
    RequestTimeFilterPostcodesToJSON,
    RequestTimeMap,
    RequestTimeMapFromJSON,
    RequestTimeMapToJSON,
    ResponseError,
    ResponseErrorFromJSON,
    ResponseErrorToJSON,
    ResponseGeocoding,
    ResponseGeocodingFromJSON,
    ResponseGeocodingToJSON,
    ResponseMapInfo,
    ResponseMapInfoFromJSON,
    ResponseMapInfoToJSON,
    ResponseRoutes,
    ResponseRoutesFromJSON,
    ResponseRoutesToJSON,
    ResponseSupportedLocations,
    ResponseSupportedLocationsFromJSON,
    ResponseSupportedLocationsToJSON,
    ResponseTimeFilter,
    ResponseTimeFilterFromJSON,
    ResponseTimeFilterToJSON,
    ResponseTimeFilterFast,
    ResponseTimeFilterFastFromJSON,
    ResponseTimeFilterFastToJSON,
    ResponseTimeFilterPostcodeDistricts,
    ResponseTimeFilterPostcodeDistrictsFromJSON,
    ResponseTimeFilterPostcodeDistrictsToJSON,
    ResponseTimeFilterPostcodeSectors,
    ResponseTimeFilterPostcodeSectorsFromJSON,
    ResponseTimeFilterPostcodeSectorsToJSON,
    ResponseTimeFilterPostcodes,
    ResponseTimeFilterPostcodesFromJSON,
    ResponseTimeFilterPostcodesToJSON,
    ResponseTimeMap,
    ResponseTimeMapFromJSON,
    ResponseTimeMapToJSON,
} from '../models';

export interface GeocodingReverseSearchRequest {
    focusLat: number;
    focusLng: number;
    withinCountry?: string;
}

export interface GeocodingSearchRequest {
    query: string;
    withinCountry?: string;
    focusLat?: number;
    focusLng?: number;
}

export interface RoutesRequest {
    requestRoutes: RequestRoutes;
}

export interface SupportedLocationsRequest {
    requestSupportedLocations: RequestSupportedLocations;
}

export interface TimeFilterRequest {
    requestTimeFilter: RequestTimeFilter;
}

export interface TimeFilterFastRequest {
    requestTimeFilterFast: RequestTimeFilterFast;
}

export interface TimeFilterPostcodeDistrictsRequest {
    requestTimeFilterPostcodeDistricts: RequestTimeFilterPostcodeDistricts;
}

export interface TimeFilterPostcodeSectorsRequest {
    requestTimeFilterPostcodeSectors: RequestTimeFilterPostcodeSectors;
}

export interface TimeFilterPostcodesRequest {
    requestTimeFilterPostcodes: RequestTimeFilterPostcodes;
}

export interface TimeMapRequest {
    requestTimeMap: RequestTimeMap;
}

/**
 * no description
 */
export class DefaultApi extends runtime.BaseAPI {

    /**
     */
    async geocodingReverseSearchRaw(requestParameters: GeocodingReverseSearchRequest): Promise<runtime.ApiResponse<ResponseGeocoding>> {
        if (requestParameters.focusLat === null || requestParameters.focusLat === undefined) {
            throw new runtime.RequiredError('focusLat','Required parameter requestParameters.focusLat was null or undefined when calling geocodingReverseSearch.');
        }

        if (requestParameters.focusLng === null || requestParameters.focusLng === undefined) {
            throw new runtime.RequiredError('focusLng','Required parameter requestParameters.focusLng was null or undefined when calling geocodingReverseSearch.');
        }

        const queryParameters: runtime.HTTPQuery = {};

        if (requestParameters.focusLat !== undefined) {
            queryParameters['focus.lat'] = requestParameters.focusLat;
        }

        if (requestParameters.focusLng !== undefined) {
            queryParameters['focus.lng'] = requestParameters.focusLng;
        }

        if (requestParameters.withinCountry !== undefined) {
            queryParameters['within.country'] = requestParameters.withinCountry;
        }

        const headerParameters: runtime.HTTPHeaders = {};

        if (this.configuration && this.configuration.apiKey) {
            headerParameters["X-Api-Key"] = this.configuration.apiKey("X-Api-Key"); // ApiKey authentication
        }

        if (this.configuration && this.configuration.apiKey) {
            headerParameters["X-Application-Id"] = this.configuration.apiKey("X-Application-Id"); // ApplicationId authentication
        }

        const response = await this.request({
            path: `/v4/geocoding/reverse`,
            method: 'GET',
            headers: headerParameters,
            query: queryParameters,
        });

        return new runtime.JSONApiResponse(response, (jsonValue) => ResponseGeocodingFromJSON(jsonValue));
    }

    /**
     */
    async geocodingReverseSearch(requestParameters: GeocodingReverseSearchRequest): Promise<ResponseGeocoding> {
        const response = await this.geocodingReverseSearchRaw(requestParameters);
        return await response.value();
    }

    /**
     */
    async geocodingSearchRaw(requestParameters: GeocodingSearchRequest): Promise<runtime.ApiResponse<ResponseGeocoding>> {
        if (requestParameters.query === null || requestParameters.query === undefined) {
            throw new runtime.RequiredError('query','Required parameter requestParameters.query was null or undefined when calling geocodingSearch.');
        }

        const queryParameters: runtime.HTTPQuery = {};

        if (requestParameters.query !== undefined) {
            queryParameters['query'] = requestParameters.query;
        }

        if (requestParameters.withinCountry !== undefined) {
            queryParameters['within.country'] = requestParameters.withinCountry;
        }

        if (requestParameters.focusLat !== undefined) {
            queryParameters['focus.lat'] = requestParameters.focusLat;
        }

        if (requestParameters.focusLng !== undefined) {
            queryParameters['focus.lng'] = requestParameters.focusLng;
        }

        const headerParameters: runtime.HTTPHeaders = {};

        if (this.configuration && this.configuration.apiKey) {
            headerParameters["X-Api-Key"] = this.configuration.apiKey("X-Api-Key"); // ApiKey authentication
        }

        if (this.configuration && this.configuration.apiKey) {
            headerParameters["X-Application-Id"] = this.configuration.apiKey("X-Application-Id"); // ApplicationId authentication
        }

        const response = await this.request({
            path: `/v4/geocoding/search`,
            method: 'GET',
            headers: headerParameters,
            query: queryParameters,
        });

        return new runtime.JSONApiResponse(response, (jsonValue) => ResponseGeocodingFromJSON(jsonValue));
    }

    /**
     */
    async geocodingSearch(requestParameters: GeocodingSearchRequest): Promise<ResponseGeocoding> {
        const response = await this.geocodingSearchRaw(requestParameters);
        return await response.value();
    }

    /**
     */
    async mapInfoRaw(): Promise<runtime.ApiResponse<ResponseMapInfo>> {
        const queryParameters: runtime.HTTPQuery = {};

        const headerParameters: runtime.HTTPHeaders = {};

        if (this.configuration && this.configuration.apiKey) {
            headerParameters["X-Api-Key"] = this.configuration.apiKey("X-Api-Key"); // ApiKey authentication
        }

        if (this.configuration && this.configuration.apiKey) {
            headerParameters["X-Application-Id"] = this.configuration.apiKey("X-Application-Id"); // ApplicationId authentication
        }

        const response = await this.request({
            path: `/v4/map-info`,
            method: 'GET',
            headers: headerParameters,
            query: queryParameters,
        });

        return new runtime.JSONApiResponse(response, (jsonValue) => ResponseMapInfoFromJSON(jsonValue));
    }

    /**
     */
    async mapInfo(): Promise<ResponseMapInfo> {
        const response = await this.mapInfoRaw();
        return await response.value();
    }

    /**
     */
    async routesRaw(requestParameters: RoutesRequest): Promise<runtime.ApiResponse<ResponseRoutes>> {
        if (requestParameters.requestRoutes === null || requestParameters.requestRoutes === undefined) {
            throw new runtime.RequiredError('requestRoutes','Required parameter requestParameters.requestRoutes was null or undefined when calling routes.');
        }

        const queryParameters: runtime.HTTPQuery = {};

        const headerParameters: runtime.HTTPHeaders = {};

        headerParameters['Content-Type'] = 'application/json';

        if (this.configuration && this.configuration.apiKey) {
            headerParameters["X-Api-Key"] = this.configuration.apiKey("X-Api-Key"); // ApiKey authentication
        }

        if (this.configuration && this.configuration.apiKey) {
            headerParameters["X-Application-Id"] = this.configuration.apiKey("X-Application-Id"); // ApplicationId authentication
        }

        const response = await this.request({
            path: `/v4/routes`,
            method: 'POST',
            headers: headerParameters,
            query: queryParameters,
            body: RequestRoutesToJSON(requestParameters.requestRoutes),
        });

        return new runtime.JSONApiResponse(response, (jsonValue) => ResponseRoutesFromJSON(jsonValue));
    }

    /**
     */
    async routes(requestParameters: RoutesRequest): Promise<ResponseRoutes> {
        const response = await this.routesRaw(requestParameters);
        return await response.value();
    }

    /**
     */
    async supportedLocationsRaw(requestParameters: SupportedLocationsRequest): Promise<runtime.ApiResponse<ResponseSupportedLocations>> {
        if (requestParameters.requestSupportedLocations === null || requestParameters.requestSupportedLocations === undefined) {
            throw new runtime.RequiredError('requestSupportedLocations','Required parameter requestParameters.requestSupportedLocations was null or undefined when calling supportedLocations.');
        }

        const queryParameters: runtime.HTTPQuery = {};

        const headerParameters: runtime.HTTPHeaders = {};

        headerParameters['Content-Type'] = 'application/json';

        if (this.configuration && this.configuration.apiKey) {
            headerParameters["X-Api-Key"] = this.configuration.apiKey("X-Api-Key"); // ApiKey authentication
        }

        if (this.configuration && this.configuration.apiKey) {
            headerParameters["X-Application-Id"] = this.configuration.apiKey("X-Application-Id"); // ApplicationId authentication
        }

        const response = await this.request({
            path: `/v4/supported-locations`,
            method: 'POST',
            headers: headerParameters,
            query: queryParameters,
            body: RequestSupportedLocationsToJSON(requestParameters.requestSupportedLocations),
        });

        return new runtime.JSONApiResponse(response, (jsonValue) => ResponseSupportedLocationsFromJSON(jsonValue));
    }

    /**
     */
    async supportedLocations(requestParameters: SupportedLocationsRequest): Promise<ResponseSupportedLocations> {
        const response = await this.supportedLocationsRaw(requestParameters);
        return await response.value();
    }

    /**
     */
    async timeFilterRaw(requestParameters: TimeFilterRequest): Promise<runtime.ApiResponse<ResponseTimeFilter>> {
        if (requestParameters.requestTimeFilter === null || requestParameters.requestTimeFilter === undefined) {
            throw new runtime.RequiredError('requestTimeFilter','Required parameter requestParameters.requestTimeFilter was null or undefined when calling timeFilter.');
        }

        const queryParameters: runtime.HTTPQuery = {};

        const headerParameters: runtime.HTTPHeaders = {};

        headerParameters['Content-Type'] = 'application/json';

        if (this.configuration && this.configuration.apiKey) {
            headerParameters["X-Api-Key"] = this.configuration.apiKey("X-Api-Key"); // ApiKey authentication
        }

        if (this.configuration && this.configuration.apiKey) {
            headerParameters["X-Application-Id"] = this.configuration.apiKey("X-Application-Id"); // ApplicationId authentication
        }

        const response = await this.request({
            path: `/v4/time-filter`,
            method: 'POST',
            headers: headerParameters,
            query: queryParameters,
            body: RequestTimeFilterToJSON(requestParameters.requestTimeFilter),
        });

        return new runtime.JSONApiResponse(response, (jsonValue) => ResponseTimeFilterFromJSON(jsonValue));
    }

    /**
     */
    async timeFilter(requestParameters: TimeFilterRequest): Promise<ResponseTimeFilter> {
        const response = await this.timeFilterRaw(requestParameters);
        return await response.value();
    }

    /**
     */
    async timeFilterFastRaw(requestParameters: TimeFilterFastRequest): Promise<runtime.ApiResponse<ResponseTimeFilterFast>> {
        if (requestParameters.requestTimeFilterFast === null || requestParameters.requestTimeFilterFast === undefined) {
            throw new runtime.RequiredError('requestTimeFilterFast','Required parameter requestParameters.requestTimeFilterFast was null or undefined when calling timeFilterFast.');
        }

        const queryParameters: runtime.HTTPQuery = {};

        const headerParameters: runtime.HTTPHeaders = {};

        headerParameters['Content-Type'] = 'application/json';

        if (this.configuration && this.configuration.apiKey) {
            headerParameters["X-Api-Key"] = this.configuration.apiKey("X-Api-Key"); // ApiKey authentication
        }

        if (this.configuration && this.configuration.apiKey) {
            headerParameters["X-Application-Id"] = this.configuration.apiKey("X-Application-Id"); // ApplicationId authentication
        }

        const response = await this.request({
            path: `/v4/time-filter/fast`,
            method: 'POST',
            headers: headerParameters,
            query: queryParameters,
            body: RequestTimeFilterFastToJSON(requestParameters.requestTimeFilterFast),
        });

        return new runtime.JSONApiResponse(response, (jsonValue) => ResponseTimeFilterFastFromJSON(jsonValue));
    }

    /**
     */
    async timeFilterFast(requestParameters: TimeFilterFastRequest): Promise<ResponseTimeFilterFast> {
        const response = await this.timeFilterFastRaw(requestParameters);
        return await response.value();
    }

    /**
     */
    async timeFilterPostcodeDistrictsRaw(requestParameters: TimeFilterPostcodeDistrictsRequest): Promise<runtime.ApiResponse<ResponseTimeFilterPostcodeDistricts>> {
        if (requestParameters.requestTimeFilterPostcodeDistricts === null || requestParameters.requestTimeFilterPostcodeDistricts === undefined) {
            throw new runtime.RequiredError('requestTimeFilterPostcodeDistricts','Required parameter requestParameters.requestTimeFilterPostcodeDistricts was null or undefined when calling timeFilterPostcodeDistricts.');
        }

        const queryParameters: runtime.HTTPQuery = {};

        const headerParameters: runtime.HTTPHeaders = {};

        headerParameters['Content-Type'] = 'application/json';

        if (this.configuration && this.configuration.apiKey) {
            headerParameters["X-Api-Key"] = this.configuration.apiKey("X-Api-Key"); // ApiKey authentication
        }

        if (this.configuration && this.configuration.apiKey) {
            headerParameters["X-Application-Id"] = this.configuration.apiKey("X-Application-Id"); // ApplicationId authentication
        }

        const response = await this.request({
            path: `/v4/time-filter/postcode-districts`,
            method: 'POST',
            headers: headerParameters,
            query: queryParameters,
            body: RequestTimeFilterPostcodeDistrictsToJSON(requestParameters.requestTimeFilterPostcodeDistricts),
        });

        return new runtime.JSONApiResponse(response, (jsonValue) => ResponseTimeFilterPostcodeDistrictsFromJSON(jsonValue));
    }

    /**
     */
    async timeFilterPostcodeDistricts(requestParameters: TimeFilterPostcodeDistrictsRequest): Promise<ResponseTimeFilterPostcodeDistricts> {
        const response = await this.timeFilterPostcodeDistrictsRaw(requestParameters);
        return await response.value();
    }

    /**
     */
    async timeFilterPostcodeSectorsRaw(requestParameters: TimeFilterPostcodeSectorsRequest): Promise<runtime.ApiResponse<ResponseTimeFilterPostcodeSectors>> {
        if (requestParameters.requestTimeFilterPostcodeSectors === null || requestParameters.requestTimeFilterPostcodeSectors === undefined) {
            throw new runtime.RequiredError('requestTimeFilterPostcodeSectors','Required parameter requestParameters.requestTimeFilterPostcodeSectors was null or undefined when calling timeFilterPostcodeSectors.');
        }

        const queryParameters: runtime.HTTPQuery = {};

        const headerParameters: runtime.HTTPHeaders = {};

        headerParameters['Content-Type'] = 'application/json';

        if (this.configuration && this.configuration.apiKey) {
            headerParameters["X-Api-Key"] = this.configuration.apiKey("X-Api-Key"); // ApiKey authentication
        }

        if (this.configuration && this.configuration.apiKey) {
            headerParameters["X-Application-Id"] = this.configuration.apiKey("X-Application-Id"); // ApplicationId authentication
        }

        const response = await this.request({
            path: `/v4/time-filter/postcode-sectors`,
            method: 'POST',
            headers: headerParameters,
            query: queryParameters,
            body: RequestTimeFilterPostcodeSectorsToJSON(requestParameters.requestTimeFilterPostcodeSectors),
        });

        return new runtime.JSONApiResponse(response, (jsonValue) => ResponseTimeFilterPostcodeSectorsFromJSON(jsonValue));
    }

    /**
     */
    async timeFilterPostcodeSectors(requestParameters: TimeFilterPostcodeSectorsRequest): Promise<ResponseTimeFilterPostcodeSectors> {
        const response = await this.timeFilterPostcodeSectorsRaw(requestParameters);
        return await response.value();
    }

    /**
     */
    async timeFilterPostcodesRaw(requestParameters: TimeFilterPostcodesRequest): Promise<runtime.ApiResponse<ResponseTimeFilterPostcodes>> {
        if (requestParameters.requestTimeFilterPostcodes === null || requestParameters.requestTimeFilterPostcodes === undefined) {
            throw new runtime.RequiredError('requestTimeFilterPostcodes','Required parameter requestParameters.requestTimeFilterPostcodes was null or undefined when calling timeFilterPostcodes.');
        }

        const queryParameters: runtime.HTTPQuery = {};

        const headerParameters: runtime.HTTPHeaders = {};

        headerParameters['Content-Type'] = 'application/json';

        if (this.configuration && this.configuration.apiKey) {
            headerParameters["X-Api-Key"] = this.configuration.apiKey("X-Api-Key"); // ApiKey authentication
        }

        if (this.configuration && this.configuration.apiKey) {
            headerParameters["X-Application-Id"] = this.configuration.apiKey("X-Application-Id"); // ApplicationId authentication
        }

        const response = await this.request({
            path: `/v4/time-filter/postcodes`,
            method: 'POST',
            headers: headerParameters,
            query: queryParameters,
            body: RequestTimeFilterPostcodesToJSON(requestParameters.requestTimeFilterPostcodes),
        });

        return new runtime.JSONApiResponse(response, (jsonValue) => ResponseTimeFilterPostcodesFromJSON(jsonValue));
    }

    /**
     */
    async timeFilterPostcodes(requestParameters: TimeFilterPostcodesRequest): Promise<ResponseTimeFilterPostcodes> {
        const response = await this.timeFilterPostcodesRaw(requestParameters);
        return await response.value();
    }

    /**
     */
    async timeMapRaw(requestParameters: TimeMapRequest): Promise<runtime.ApiResponse<ResponseTimeMap>> {
        if (requestParameters.requestTimeMap === null || requestParameters.requestTimeMap === undefined) {
            throw new runtime.RequiredError('requestTimeMap','Required parameter requestParameters.requestTimeMap was null or undefined when calling timeMap.');
        }

        const queryParameters: runtime.HTTPQuery = {};

        const headerParameters: runtime.HTTPHeaders = {};

        headerParameters['Content-Type'] = 'application/json';

        if (this.configuration && this.configuration.apiKey) {
            headerParameters["X-Api-Key"] = this.configuration.apiKey("X-Api-Key"); // ApiKey authentication
        }

        if (this.configuration && this.configuration.apiKey) {
            headerParameters["X-Application-Id"] = this.configuration.apiKey("X-Application-Id"); // ApplicationId authentication
        }

        const response = await this.request({
            path: `/v4/time-map`,
            method: 'POST',
            headers: headerParameters,
            query: queryParameters,
            body: RequestTimeMapToJSON(requestParameters.requestTimeMap),
        });

        return new runtime.JSONApiResponse(response, (jsonValue) => ResponseTimeMapFromJSON(jsonValue));
    }

    /**
     */
    async timeMap(requestParameters: TimeMapRequest): Promise<ResponseTimeMap> {
        const response = await this.timeMapRaw(requestParameters);
        return await response.value();
    }

}
