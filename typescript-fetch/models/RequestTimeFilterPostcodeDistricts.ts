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

import { exists } from '../runtime';
import {
    RequestTimeFilterPostcodeDistrictsArrivalSearch,
    RequestTimeFilterPostcodeDistrictsArrivalSearchFromJSON,
    RequestTimeFilterPostcodeDistrictsArrivalSearchToJSON,
    RequestTimeFilterPostcodeDistrictsDepartureSearch,
    RequestTimeFilterPostcodeDistrictsDepartureSearchFromJSON,
    RequestTimeFilterPostcodeDistrictsDepartureSearchToJSON,
} from './';

/**
 * 
 * @export
 * @interface RequestTimeFilterPostcodeDistricts
 */
export interface RequestTimeFilterPostcodeDistricts {
    /**
     * 
     * @type {Array<RequestTimeFilterPostcodeDistrictsDepartureSearch>}
     * @memberof RequestTimeFilterPostcodeDistricts
     */
    departureSearches?: Array<RequestTimeFilterPostcodeDistrictsDepartureSearch>;
    /**
     * 
     * @type {Array<RequestTimeFilterPostcodeDistrictsArrivalSearch>}
     * @memberof RequestTimeFilterPostcodeDistricts
     */
    arrivalSearches?: Array<RequestTimeFilterPostcodeDistrictsArrivalSearch>;
}

export function RequestTimeFilterPostcodeDistrictsFromJSON(json: any): RequestTimeFilterPostcodeDistricts {
    return {
        'departureSearches': !exists(json, 'departure_searches') ? undefined : (json['departure_searches'] as Array<any>).map(RequestTimeFilterPostcodeDistrictsDepartureSearchFromJSON),
        'arrivalSearches': !exists(json, 'arrival_searches') ? undefined : (json['arrival_searches'] as Array<any>).map(RequestTimeFilterPostcodeDistrictsArrivalSearchFromJSON),
    };
}

export function RequestTimeFilterPostcodeDistrictsToJSON(value?: RequestTimeFilterPostcodeDistricts): any {
    if (value === undefined) {
        return undefined;
    }
    return {
        'departure_searches': value.departureSearches === undefined ? undefined : (value.departureSearches as Array<any>).map(RequestTimeFilterPostcodeDistrictsDepartureSearchToJSON),
        'arrival_searches': value.arrivalSearches === undefined ? undefined : (value.arrivalSearches as Array<any>).map(RequestTimeFilterPostcodeDistrictsArrivalSearchToJSON),
    };
}


