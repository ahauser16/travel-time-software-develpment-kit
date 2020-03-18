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
import { RequestTimeMapDepartureSearch } from './requestTimeMapDepartureSearch';
import { RequestUnionOnIntersection } from './requestUnionOnIntersection';
import { RequestTimeMapArrivalSearch } from './requestTimeMapArrivalSearch';


export interface RequestTimeMap { 
    departureSearches?: Array<RequestTimeMapDepartureSearch>;
    arrivalSearches?: Array<RequestTimeMapArrivalSearch>;
    unions?: Array<RequestUnionOnIntersection>;
    intersections?: Array<RequestUnionOnIntersection>;
}

