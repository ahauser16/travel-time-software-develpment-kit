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

import org.openapitools.client.models.RequestTimeFilterFastArrivalManyToOneSearch
import org.openapitools.client.models.RequestTimeFilterFastArrivalOneToManySearch

import com.squareup.moshi.Json
/**
 * 
 * @param manyToOne 
 * @param oneToMany 
 */

data class RequestTimeFilterFastArrivalSearches (
    @Json(name = "many_to_one")
    val manyToOne: kotlin.Array<RequestTimeFilterFastArrivalManyToOneSearch>? = null,
    @Json(name = "one_to_many")
    val oneToMany: kotlin.Array<RequestTimeFilterFastArrivalOneToManySearch>? = null
) 



