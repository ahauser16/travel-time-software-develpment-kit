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
 * @interface ResponseBox
 */
export interface ResponseBox {
    /**
     * 
     * @type {number}
     * @memberof ResponseBox
     */
    minLat: number;
    /**
     * 
     * @type {number}
     * @memberof ResponseBox
     */
    maxLat: number;
    /**
     * 
     * @type {number}
     * @memberof ResponseBox
     */
    minLng: number;
    /**
     * 
     * @type {number}
     * @memberof ResponseBox
     */
    maxLng: number;
}

export function ResponseBoxFromJSON(json: any): ResponseBox {
    return {
        'minLat': json['min_lat'],
        'maxLat': json['max_lat'],
        'minLng': json['min_lng'],
        'maxLng': json['max_lng'],
    };
}

export function ResponseBoxToJSON(value?: ResponseBox): any {
    if (value === undefined) {
        return undefined;
    }
    return {
        'min_lat': value.minLat,
        'max_lat': value.maxLat,
        'min_lng': value.minLng,
        'max_lng': value.maxLng,
    };
}


