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

import traveltimeplatform.models.ResponseFareTicket
import traveltimeplatform.models.ResponseFaresBreakdownItem

import com.squareup.moshi.Json
/**
 * 
 * @param breakdown 
 * @param ticketsTotal 
 */
data class ResponseFares (
    @Json(name = "breakdown")
    val breakdown: kotlin.Array<ResponseFaresBreakdownItem>,
    @Json(name = "tickets_total")
    val ticketsTotal: kotlin.Array<ResponseFareTicket>
) {

}

