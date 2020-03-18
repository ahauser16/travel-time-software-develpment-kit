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


import com.squareup.moshi.Json

/**
* 
* Values: travelTime,distance,fares,route
*/

enum class RequestRoutesProperty(val value: kotlin.String){


    @Json(name = "travel_time")
    travelTime("travel_time"),


    @Json(name = "distance")
    distance("distance"),


    @Json(name = "fares")
    fares("fares"),


    @Json(name = "route")
    route("route");



}

