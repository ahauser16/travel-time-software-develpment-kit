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
    ResponseFares,
    ResponseRoute,
} from './';

/**
 * @export
 * @interface ResponseRoutesProperties
 */
export interface ResponseRoutesProperties {
    /**
     * @type {number}
     * @memberof ResponseRoutesProperties
     */
    travelTime?: number;
    /**
     * @type {number}
     * @memberof ResponseRoutesProperties
     */
    distance?: number;
    /**
     * @type {ResponseFares}
     * @memberof ResponseRoutesProperties
     */
    fares?: ResponseFares;
    /**
     * @type {ResponseRoute}
     * @memberof ResponseRoutesProperties
     */
    route?: ResponseRoute;
}
