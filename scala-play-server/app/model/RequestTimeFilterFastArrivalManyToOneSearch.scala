package model

import play.api.libs.json._

/**
  * Represents the Swagger definition for RequestTimeFilterFastArrivalManyToOneSearch.
  */
@javax.annotation.Generated(value = Array("org.openapitools.codegen.languages.ScalaPlayFrameworkServerCodegen"), date = "2020-03-18T08:51:49.713Z[Etc/UTC]")
case class RequestTimeFilterFastArrivalManyToOneSearch(
  id: String,
  arrivalLocationId: String,
  departureLocationIds: List[String],
  transportation: RequestTransportationFast,
  travelTime: Int,
  arrivalTimePeriod: RequestArrivalTimePeriod,
  properties: List[RequestTimeFilterFastProperty]
)

object RequestTimeFilterFastArrivalManyToOneSearch {
  implicit lazy val requestTimeFilterFastArrivalManyToOneSearchJsonFormat: Format[RequestTimeFilterFastArrivalManyToOneSearch] = Json.format[RequestTimeFilterFastArrivalManyToOneSearch]
}

