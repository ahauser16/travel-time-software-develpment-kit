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

import {
    ResponseBoundingBox,
    ResponseTimeMapProperties,
} from './';

/**
 * @export
 * @interface ResponseTimeMapBoundingBoxesResult
 */
export interface ResponseTimeMapBoundingBoxesResult {
    /**
     * @type {string}
     * @memberof ResponseTimeMapBoundingBoxesResult
     */
    searchId: string;
    /**
     * @type {Array<ResponseBoundingBox>}
     * @memberof ResponseTimeMapBoundingBoxesResult
     */
    boundingBoxes: Array<ResponseBoundingBox>;
    /**
     * @type {ResponseTimeMapProperties}
     * @memberof ResponseTimeMapBoundingBoxesResult
     */
    properties: ResponseTimeMapProperties;
}
