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
    RequestLocation,
    RequestRoutesArrivalSearch,
    RequestRoutesDepartureSearch,
} from './';

/**
 * @export
 * @interface RequestRoutes
 */
export interface RequestRoutes {
    /**
     * @type {Array<RequestLocation>}
     * @memberof RequestRoutes
     */
    locations: Array<RequestLocation>;
    /**
     * @type {Array<RequestRoutesDepartureSearch>}
     * @memberof RequestRoutes
     */
    departure_searches?: Array<RequestRoutesDepartureSearch>;
    /**
     * @type {Array<RequestRoutesArrivalSearch>}
     * @memberof RequestRoutes
     */
    arrival_searches?: Array<RequestRoutesArrivalSearch>;
}
