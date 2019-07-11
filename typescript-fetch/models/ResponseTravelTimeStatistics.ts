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
/**
 * 
 * @export
 * @interface ResponseTravelTimeStatistics
 */
export interface ResponseTravelTimeStatistics {
    /**
     * 
     * @type {number}
     * @memberof ResponseTravelTimeStatistics
     */
    min: number;
    /**
     * 
     * @type {number}
     * @memberof ResponseTravelTimeStatistics
     */
    max: number;
    /**
     * 
     * @type {number}
     * @memberof ResponseTravelTimeStatistics
     */
    mean: number;
    /**
     * 
     * @type {number}
     * @memberof ResponseTravelTimeStatistics
     */
    median: number;
}

export function ResponseTravelTimeStatisticsFromJSON(json: any): ResponseTravelTimeStatistics {
    return {
        'min': json['min'],
        'max': json['max'],
        'mean': json['mean'],
        'median': json['median'],
    };
}

export function ResponseTravelTimeStatisticsToJSON(value?: ResponseTravelTimeStatistics): any {
    if (value === undefined) {
        return undefined;
    }
    return {
        'min': value.min,
        'max': value.max,
        'mean': value.mean,
        'median': value.median,
    };
}

