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
import ResponseRoutePart from './ResponseRoutePart';

/**
 * The ResponseRoute model module.
 * @module model/ResponseRoute
 * @version 1.0.0
 */
class ResponseRoute {
    /**
     * Constructs a new <code>ResponseRoute</code>.
     * @alias module:model/ResponseRoute
     * @param departureTime {Date} 
     * @param arrivalTime {Date} 
     * @param parts {Array.<module:model/ResponseRoutePart>} 
     */
    constructor(departureTime, arrivalTime, parts) { 
        
        ResponseRoute.initialize(this, departureTime, arrivalTime, parts);
    }

    /**
     * Initializes the fields of this object.
     * This method is used by the constructors of any subclasses, in order to implement multiple inheritance (mix-ins).
     * Only for internal use.
     */
    static initialize(obj, departureTime, arrivalTime, parts) { 
        obj['departure_time'] = departureTime;
        obj['arrival_time'] = arrivalTime;
        obj['parts'] = parts;
    }

    /**
     * Constructs a <code>ResponseRoute</code> from a plain JavaScript object, optionally creating a new instance.
     * Copies all relevant properties from <code>data</code> to <code>obj</code> if supplied or a new instance if not.
     * @param {Object} data The plain JavaScript object bearing properties of interest.
     * @param {module:model/ResponseRoute} obj Optional instance to populate.
     * @return {module:model/ResponseRoute} The populated <code>ResponseRoute</code> instance.
     */
    static constructFromObject(data, obj) {
        if (data) {
            obj = obj || new ResponseRoute();

            if (data.hasOwnProperty('departure_time')) {
                obj['departure_time'] = ApiClient.convertToType(data['departure_time'], 'Date');
            }
            if (data.hasOwnProperty('arrival_time')) {
                obj['arrival_time'] = ApiClient.convertToType(data['arrival_time'], 'Date');
            }
            if (data.hasOwnProperty('parts')) {
                obj['parts'] = ApiClient.convertToType(data['parts'], [ResponseRoutePart]);
            }
        }
        return obj;
    }


}

/**
 * @member {Date} departure_time
 */
ResponseRoute.prototype['departure_time'] = undefined;

/**
 * @member {Date} arrival_time
 */
ResponseRoute.prototype['arrival_time'] = undefined;

/**
 * @member {Array.<module:model/ResponseRoutePart>} parts
 */
ResponseRoute.prototype['parts'] = undefined;






export default ResponseRoute;

