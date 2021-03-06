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
/**
* Enum class RequestTimeFilterPostcodeDistrictsProperty.
* @enum {}
* @readonly
*/
export default class RequestTimeFilterPostcodeDistrictsProperty {
    
        /**
         * value: "travel_time_reachable"
         * @const
         */
        "travel_time_reachable" = "travel_time_reachable";

    
        /**
         * value: "travel_time_all"
         * @const
         */
        "travel_time_all" = "travel_time_all";

    
        /**
         * value: "coverage"
         * @const
         */
        "coverage" = "coverage";

    

    /**
    * Returns a <code>RequestTimeFilterPostcodeDistrictsProperty</code> enum value from a Javascript object name.
    * @param {Object} data The plain JavaScript object containing the name of the enum value.
    * @return {module:model/RequestTimeFilterPostcodeDistrictsProperty} The enum <code>RequestTimeFilterPostcodeDistrictsProperty</code> value.
    */
    static constructFromObject(object) {
        return object;
    }
}

