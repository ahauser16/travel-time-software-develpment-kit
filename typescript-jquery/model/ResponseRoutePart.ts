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

import * as models from './models';

export interface ResponseRoutePart {
    id: string;

    type: ResponseRoutePart.TypeEnum;

    mode: models.ResponseTransportationMode;

    directions: string;

    distance: number;

    travel_time: number;

    coords: Array<models.Coords>;

    direction?: string;

    road?: string;

    turn?: string;

    line?: string;

    departure_station?: string;

    arrival_station?: string;

    departs_at?: string;

    arrives_at?: string;

    num_stops?: number;

}
export namespace ResponseRoutePart {
    export enum TypeEnum {
        Basic = <any> 'basic',
        StartEnd = <any> 'start_end',
        Road = <any> 'road',
        PublicTransport = <any> 'public_transport'
    }
}
