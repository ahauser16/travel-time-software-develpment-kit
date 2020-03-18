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
import { RequestTransportation } from './requestTransportation';
import { RequestRoutesProperty } from './requestRoutesProperty';
import { RequestRangeFull } from './requestRangeFull';


export interface RequestRoutesDepartureSearch { 
    id: string;
    departure_location_id: string;
    arrival_location_ids: Array<string>;
    transportation: RequestTransportation;
    departure_time: string;
    properties: Array<RequestRoutesProperty>;
    range?: RequestRangeFull;
}

