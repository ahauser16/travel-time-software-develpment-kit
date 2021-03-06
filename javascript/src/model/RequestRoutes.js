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
 *
 */

import ApiClient from '../ApiClient';
import RequestLocation from './RequestLocation';
import RequestRoutesArrivalSearch from './RequestRoutesArrivalSearch';
import RequestRoutesDepartureSearch from './RequestRoutesDepartureSearch';

/**
 * The RequestRoutes model module.
 * @module model/RequestRoutes
 * @version 1.0.0
 */
class RequestRoutes {
    /**
     * Constructs a new <code>RequestRoutes</code>.
     * @alias module:model/RequestRoutes
     * @param locations {Array.<module:model/RequestLocation>} 
     */
    constructor(locations) { 
        
        RequestRoutes.initialize(this, locations);
    }

    /**
     * Initializes the fields of this object.
     * This method is used by the constructors of any subclasses, in order to implement multiple inheritance (mix-ins).
     * Only for internal use.
     */
    static initialize(obj, locations) { 
        obj['locations'] = locations;
    }

    /**
     * Constructs a <code>RequestRoutes</code> from a plain JavaScript object, optionally creating a new instance.
     * Copies all relevant properties from <code>data</code> to <code>obj</code> if supplied or a new instance if not.
     * @param {Object} data The plain JavaScript object bearing properties of interest.
     * @param {module:model/RequestRoutes} obj Optional instance to populate.
     * @return {module:model/RequestRoutes} The populated <code>RequestRoutes</code> instance.
     */
    static constructFromObject(data, obj) {
        if (data) {
            obj = obj || new RequestRoutes();

            if (data.hasOwnProperty('locations')) {
                obj['locations'] = ApiClient.convertToType(data['locations'], [RequestLocation]);
            }
            if (data.hasOwnProperty('departure_searches')) {
                obj['departure_searches'] = ApiClient.convertToType(data['departure_searches'], [RequestRoutesDepartureSearch]);
            }
            if (data.hasOwnProperty('arrival_searches')) {
                obj['arrival_searches'] = ApiClient.convertToType(data['arrival_searches'], [RequestRoutesArrivalSearch]);
            }
        }
        return obj;
    }


}

/**
 * @member {Array.<module:model/RequestLocation>} locations
 */
RequestRoutes.prototype['locations'] = undefined;

/**
 * @member {Array.<module:model/RequestRoutesDepartureSearch>} departure_searches
 */
RequestRoutes.prototype['departure_searches'] = undefined;

/**
 * @member {Array.<module:model/RequestRoutesArrivalSearch>} arrival_searches
 */
RequestRoutes.prototype['arrival_searches'] = undefined;






export default RequestRoutes;

