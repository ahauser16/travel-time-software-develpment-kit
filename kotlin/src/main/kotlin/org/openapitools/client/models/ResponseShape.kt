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

import org.openapitools.client.models.Coords

import com.squareup.moshi.Json
/**
 * 
 * @param shell 
 * @param holes 
 */

data class ResponseShape (
    @Json(name = "shell")
    val shell: kotlin.Array<Coords>
,
    @Json(name = "holes")
    val holes: kotlin.Array<kotlin.Array<Coords>>

)

