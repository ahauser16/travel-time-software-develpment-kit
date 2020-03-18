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

import org.openapitools.server.models.RequestTimeFilterPostcodesArrivalSearch
import org.openapitools.server.models.RequestTimeFilterPostcodesDepartureSearch

/**
 * 
 * @param departureSearches 
 * @param arrivalSearches 
 */
data class RequestTimeFilterPostcodes (
    val departureSearches: kotlin.Array<RequestTimeFilterPostcodesDepartureSearch>? = null,
    val arrivalSearches: kotlin.Array<RequestTimeFilterPostcodesArrivalSearch>? = null
) 

