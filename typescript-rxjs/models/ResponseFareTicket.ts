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

/**
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
