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
import { RequestRangeNoMaxResults } from './requestRangeNoMaxResults';
import { RequestTimeMapProperty } from './requestTimeMapProperty';
import { Coords } from './coords';


export interface RequestTimeMapArrivalSearch { 
    id: string;
    coords: Coords;
    transportation: RequestTransportation;
    travelTime: number;
    arrivalTime: Date;
    properties?: Array<RequestTimeMapProperty>;
    range?: RequestRangeNoMaxResults;
}

