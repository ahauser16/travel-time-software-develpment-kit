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


/**
 * 
 * @param httpStatus 
 * @param errorCode 
 * @param description 
 * @param documentationLink 
 * @param additionalInfo 
 */
data class ResponseError (
    val httpStatus: kotlin.Int? = null,
    val errorCode: kotlin.Int? = null,
    val description: kotlin.String? = null,
    val documentationLink: kotlin.String? = null,
    val additionalInfo: kotlin.collections.Map<kotlin.String, kotlin.Array<kotlin.String>>? = null
) 

