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
* Values: travelTimeReachable,travelTimeAll,coverage
*/

enum class RequestTimeFilterPostcodeSectorsProperty(val value: kotlin.String){


    @Json(name = "travel_time_reachable")
    travelTimeReachable("travel_time_reachable"),


    @Json(name = "travel_time_all")
    travelTimeAll("travel_time_all"),


    @Json(name = "coverage")
    coverage("coverage");



}

