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
 * @interface ResponseFareTicket
 */
export interface ResponseFareTicket {
    /**
     * 
     * @type {string}
     * @memberof ResponseFareTicket
     */
    type: ResponseFareTicketTypeEnum;
    /**
     * 
     * @type {number}
     * @memberof ResponseFareTicket
     */
    price: number;
    /**
     * 
     * @type {string}
     * @memberof ResponseFareTicket
     */
    currency: string;
}

export function ResponseFareTicketFromJSON(json: any): ResponseFareTicket {
    return ResponseFareTicketFromJSONTyped(json, false);
}

export function ResponseFareTicketFromJSONTyped(json: any, ignoreDiscriminator: boolean): ResponseFareTicket {
    if ((json === undefined) || (json === null)) {
        return json;
    }
    return {
        
        'type': json['type'],
        'price': json['price'],
        'currency': json['currency'],
    };
}

export function ResponseFareTicketToJSON(value?: ResponseFareTicket | null): any {
    if (value === undefined) {
        return undefined;
    }
    if (value === null) {
        return null;
    }
    return {
        
        'type': value.type,
        'price': value.price,
        'currency': value.currency,
    };
}

/**
* @export
* @enum {string}
*/
export enum ResponseFareTicketTypeEnum {
    Single = 'single',
    Week = 'week',
    Month = 'month',
    Year = 'year'
}


