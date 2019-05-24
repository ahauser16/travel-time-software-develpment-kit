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

import traveltimeplatform.models.ResponseFares
import traveltimeplatform.models.ResponseRoute

import com.squareup.moshi.Json
/**
 * 
 * @param travelTime 
 * @param distance 
 * @param fares 
 * @param route 
 */
data class ResponseRoutesProperties (
    @Json(name = "travel_time")
    val travelTime: kotlin.Int? = null,
    @Json(name = "distance")
    val distance: kotlin.Int? = null,
    @Json(name = "fares")
    val fares: ResponseFares? = null,
    @Json(name = "route")
    val route: ResponseRoute? = null
) {

}

