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

import org.openapitools.client.models.ResponseGeocodingGeoJsonFeature

import com.squareup.moshi.Json
/**
 * 
 * @param type 
 * @param features 
 */

data class ResponseGeocoding (
    @Json(name = "type")
    val type: kotlin.String,
    @Json(name = "features")
    val features: kotlin.Array<ResponseGeocodingGeoJsonFeature>
) 



