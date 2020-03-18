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
    RequestArrivalTimePeriod,
    RequestTimeFilterFastProperty,
    RequestTransportationFast,
} from './';

/**
 * @export
 * @interface RequestTimeFilterFastArrivalManyToOneSearch
 */
export interface RequestTimeFilterFastArrivalManyToOneSearch {
    /**
     * @type {string}
     * @memberof RequestTimeFilterFastArrivalManyToOneSearch
     */
    id: string;
    /**
     * @type {string}
     * @memberof RequestTimeFilterFastArrivalManyToOneSearch
     */
    arrivalLocationId: string;
    /**
     * @type {Array<string>}
     * @memberof RequestTimeFilterFastArrivalManyToOneSearch
     */
    departureLocationIds: Array<string>;
    /**
     * @type {RequestTransportationFast}
     * @memberof RequestTimeFilterFastArrivalManyToOneSearch
     */
    transportation: RequestTransportationFast;
    /**
     * @type {number}
     * @memberof RequestTimeFilterFastArrivalManyToOneSearch
     */
    travelTime: number;
    /**
     * @type {RequestArrivalTimePeriod}
     * @memberof RequestTimeFilterFastArrivalManyToOneSearch
     */
    arrivalTimePeriod: RequestArrivalTimePeriod;
    /**
     * @type {Array<RequestTimeFilterFastProperty>}
     * @memberof RequestTimeFilterFastArrivalManyToOneSearch
     */
    properties: Array<RequestTimeFilterFastProperty>;
}
