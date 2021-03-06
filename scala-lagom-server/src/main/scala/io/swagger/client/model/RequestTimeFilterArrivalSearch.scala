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

package io.swagger.client.model
import play.api.libs.json._
import java.time.OffsetDateTime

case class RequestTimeFilterArrivalSearch (
                  id: String,
                  departureLocationIds: Seq[String],
                  arrivalLocationId: String,
                  transportation: RequestTransportation,
                  travelTime: Int,
                  arrivalTime: OffsetDateTime,
                  properties: Seq[RequestTimeFilterProperty],
                  range: Option[RequestRangeFull]
)

object RequestTimeFilterArrivalSearch {
implicit val format: Format[RequestTimeFilterArrivalSearch] = Json.format
}

