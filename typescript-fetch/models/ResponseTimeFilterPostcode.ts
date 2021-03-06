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
import {
    ModelString,
    ModelStringFromJSON,
    ModelStringFromJSONTyped,
    ModelStringToJSON,
    ResponseTimeFilterPostcodesProperties,
    ResponseTimeFilterPostcodesPropertiesFromJSON,
    ResponseTimeFilterPostcodesPropertiesFromJSONTyped,
    ResponseTimeFilterPostcodesPropertiesToJSON,
} from './';

/**
 * 
 * @export
 * @interface ResponseTimeFilterPostcode
 */
export interface ResponseTimeFilterPostcode {
    /**
     * 
     * @type {ModelString}
     * @memberof ResponseTimeFilterPostcode
     */
    code: ModelString;
    /**
     * 
     * @type {Array<ResponseTimeFilterPostcodesProperties>}
     * @memberof ResponseTimeFilterPostcode
     */
    properties: Array<ResponseTimeFilterPostcodesProperties>;
}

export function ResponseTimeFilterPostcodeFromJSON(json: any): ResponseTimeFilterPostcode {
    return ResponseTimeFilterPostcodeFromJSONTyped(json, false);
}

export function ResponseTimeFilterPostcodeFromJSONTyped(json: any, ignoreDiscriminator: boolean): ResponseTimeFilterPostcode {
    if ((json === undefined) || (json === null)) {
        return json;
    }
    return {
        
        'code': ModelStringFromJSON(json['code']),
        'properties': ((json['properties'] as Array<any>).map(ResponseTimeFilterPostcodesPropertiesFromJSON)),
    };
}

export function ResponseTimeFilterPostcodeToJSON(value?: ResponseTimeFilterPostcode | null): any {
    if (value === undefined) {
        return undefined;
    }
    if (value === null) {
        return null;
    }
    return {
        
        'code': ModelStringToJSON(value.code),
        'properties': ((value.properties as Array<any>).map(ResponseTimeFilterPostcodesPropertiesToJSON)),
    };
}


