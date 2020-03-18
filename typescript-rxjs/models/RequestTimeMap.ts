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

import {
    RequestTimeMapArrivalSearch,
    RequestTimeMapDepartureSearch,
    RequestUnionOnIntersection,
} from './';

/**
 * @export
 * @interface RequestTimeMap
 */
export interface RequestTimeMap {
    /**
     * @type {Array<RequestTimeMapDepartureSearch>}
     * @memberof RequestTimeMap
     */
    departureSearches?: Array<RequestTimeMapDepartureSearch>;
    /**
     * @type {Array<RequestTimeMapArrivalSearch>}
     * @memberof RequestTimeMap
     */
    arrivalSearches?: Array<RequestTimeMapArrivalSearch>;
    /**
     * @type {Array<RequestUnionOnIntersection>}
     * @memberof RequestTimeMap
     */
    unions?: Array<RequestUnionOnIntersection>;
    /**
     * @type {Array<RequestUnionOnIntersection>}
     * @memberof RequestTimeMap
     */
    intersections?: Array<RequestUnionOnIntersection>;
}
