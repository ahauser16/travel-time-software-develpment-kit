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

import org.openapitools.client.models.ResponseMapInfoFeaturesPublicTransport

import com.squareup.moshi.Json
/**
 * 
 * @param fares 
 * @param postcodes 
 * @param publicTransport 
 */

data class ResponseMapInfoFeatures (
    @Json(name = "fares")
    val fares: kotlin.Boolean,
    @Json(name = "postcodes")
    val postcodes: kotlin.Boolean,
    @Json(name = "public_transport")
    val publicTransport: ResponseMapInfoFeaturesPublicTransport? = null
) 



