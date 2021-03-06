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
import { RequestRangeFull } from './requestRangeFull';
import { RequestTimeFilterPostcodeSectorsProperty } from './requestTimeFilterPostcodeSectorsProperty';
import { RequestTransportation } from './requestTransportation';


export interface RequestTimeFilterPostcodeSectorsDepartureSearch { 
    id: string;
    transportation: RequestTransportation;
    travel_time: number;
    departure_time: string;
    reachable_postcodes_threshold: number;
    properties: Array<RequestTimeFilterPostcodeSectorsProperty>;
    range?: RequestRangeFull;
}
