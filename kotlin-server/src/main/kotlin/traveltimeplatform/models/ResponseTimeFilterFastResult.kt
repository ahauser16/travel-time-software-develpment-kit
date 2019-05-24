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
package traveltimeplatform.models

import traveltimeplatform.models.ResponseTimeFilterFastLocation

/**
 * 
 * @param searchId 
 * @param locations 
 * @param unreachable 
 */
data class ResponseTimeFilterFastResult (
    val searchId: kotlin.String,
    val locations: kotlin.Array<ResponseTimeFilterFastLocation>,
    val unreachable: kotlin.Array<kotlin.String>
) {

}

