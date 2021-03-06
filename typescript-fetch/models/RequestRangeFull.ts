/* tslint:disable */
/* eslint-disable */
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

import { exists, mapValues } from '../runtime';
/**
 * 
 * @export
 * @interface RequestRangeFull
 */
export interface RequestRangeFull {
    /**
     * 
     * @type {boolean}
     * @memberof RequestRangeFull
     */
    enabled: boolean;
    /**
     * 
     * @type {number}
     * @memberof RequestRangeFull
     */
    maxResults: number;
    /**
     * 
     * @type {number}
     * @memberof RequestRangeFull
     */
    width: number;
}

export function RequestRangeFullFromJSON(json: any): RequestRangeFull {
    return RequestRangeFullFromJSONTyped(json, false);
}

export function RequestRangeFullFromJSONTyped(json: any, ignoreDiscriminator: boolean): RequestRangeFull {
    if ((json === undefined) || (json === null)) {
        return json;
    }
    return {
        
        'enabled': json['enabled'],
        'maxResults': json['max_results'],
        'width': json['width'],
    };
}

export function RequestRangeFullToJSON(value?: RequestRangeFull | null): any {
    if (value === undefined) {
        return undefined;
    }
    if (value === null) {
        return null;
    }
    return {
        
        'enabled': value.enabled,
        'max_results': value.maxResults,
        'width': value.width,
    };
}


