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


import com.squareup.moshi.Json
/**
 * 
 * @param enabled 
 * @param maxResults 
 * @param width 
 */
data class RequestRangeFull (
    @Json(name = "enabled")
    val enabled: kotlin.Boolean,
    @Json(name = "max_results")
    val maxResults: kotlin.Int,
    @Json(name = "width")
    val width: kotlin.Int
) {

}

