package model

import play.api.libs.json._

/**
  * Represents the Swagger definition for RequestRoutes.
  */
@javax.annotation.Generated(value = Array("org.openapitools.codegen.languages.ScalaPlayFrameworkServerCodegen"), date = "2020-03-18T08:51:49.713Z[Etc/UTC]")
case class RequestRoutes(
  locations: List[RequestLocation],
  departureSearches: Option[List[RequestRoutesDepartureSearch]],
  arrivalSearches: Option[List[RequestRoutesArrivalSearch]]
)

object RequestRoutes {
  implicit lazy val requestRoutesJsonFormat: Format[RequestRoutes] = Json.format[RequestRoutes]
}

