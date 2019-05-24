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

import traveltimeplatform.models.RequestLocation
import traveltimeplatform.models.RequestTimeFilterArrivalSearch
import traveltimeplatform.models.RequestTimeFilterDepartureSearch

import com.squareup.moshi.Json
/**
 * 
 * @param locations 
 * @param departureSearches 
 * @param arrivalSearches 
 */
data class RequestTimeFilter (
    @Json(name = "locations")
    val locations: kotlin.Array<RequestLocation>,
    @Json(name = "departure_searches")
    val departureSearches: kotlin.Array<RequestTimeFilterDepartureSearch>? = null,
    @Json(name = "arrival_searches")
    val arrivalSearches: kotlin.Array<RequestTimeFilterArrivalSearch>? = null
) {

}

