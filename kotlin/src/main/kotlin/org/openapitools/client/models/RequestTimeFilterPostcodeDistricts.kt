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

import org.openapitools.client.models.RequestTimeFilterPostcodeDistrictsArrivalSearch
import org.openapitools.client.models.RequestTimeFilterPostcodeDistrictsDepartureSearch

import com.squareup.moshi.Json
/**
 * 
 * @param departureSearches 
 * @param arrivalSearches 
 */

data class RequestTimeFilterPostcodeDistricts (
    @Json(name = "departure_searches")
    val departureSearches: kotlin.Array<RequestTimeFilterPostcodeDistrictsDepartureSearch>? = null
,
    @Json(name = "arrival_searches")
    val arrivalSearches: kotlin.Array<RequestTimeFilterPostcodeDistrictsArrivalSearch>? = null

)

