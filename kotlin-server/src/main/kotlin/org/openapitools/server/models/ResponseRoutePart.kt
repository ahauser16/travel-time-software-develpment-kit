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
package org.openapitools.server.models

import org.openapitools.server.models.Coords
import org.openapitools.server.models.ResponseTransportationMode

/**
 * 
 * @param id 
 * @param type 
 * @param mode 
 * @param directions 
 * @param distance 
 * @param travelTime 
 * @param coords 
 * @param direction 
 * @param road 
 * @param turn 
 * @param line 
 * @param departureStation 
 * @param arrivalStation 
 * @param departsAt 
 * @param arrivesAt 
 * @param numStops 
 */
data class ResponseRoutePart (
    val id: kotlin.String,
    val type: ResponseRoutePart.Type,
    val mode: ResponseTransportationMode,
    val directions: kotlin.String,
    val distance: kotlin.Int,
    val travelTime: kotlin.Int,
    val coords: kotlin.Array<Coords>,
    val direction: kotlin.String? = null,
    val road: kotlin.String? = null,
    val turn: kotlin.String? = null,
    val line: kotlin.String? = null,
    val departureStation: kotlin.String? = null,
    val arrivalStation: kotlin.String? = null,
    val departsAt: kotlin.String? = null,
    val arrivesAt: kotlin.String? = null,
    val numStops: kotlin.Int? = null
) 
{
    /**
    * 
    * Values: basic,startEnd,road,publicTransport
    */
    enum class Type(val value: kotlin.String){
        basic("basic"),
        startEnd("start_end"),
        road("road"),
        publicTransport("public_transport");
    }
}
