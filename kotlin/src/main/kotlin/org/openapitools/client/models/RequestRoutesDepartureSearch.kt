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
package org.openapitools.client.models

import org.openapitools.client.models.RequestRangeFull
import org.openapitools.client.models.RequestRoutesProperty
import org.openapitools.client.models.RequestTransportation

import com.squareup.moshi.Json
/**
 * 
 * @param id 
 * @param departureLocationId 
 * @param arrivalLocationIds 
 * @param transportation 
 * @param departureTime 
 * @param properties 
 * @param range 
 */

data class RequestRoutesDepartureSearch (
    @Json(name = "id")
    val id: kotlin.String,
    @Json(name = "departure_location_id")
    val departureLocationId: kotlin.String,
    @Json(name = "arrival_location_ids")
    val arrivalLocationIds: kotlin.Array<kotlin.String>,
    @Json(name = "transportation")
    val transportation: RequestTransportation,
    @Json(name = "departure_time")
    val departureTime: java.time.OffsetDateTime,
    @Json(name = "properties")
    val properties: kotlin.Array<RequestRoutesProperty>,
    @Json(name = "range")
    val range: RequestRangeFull? = null
) 



