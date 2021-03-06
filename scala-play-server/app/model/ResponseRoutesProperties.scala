package model

import play.api.libs.json._

/**
  * Represents the Swagger definition for ResponseRoutesProperties.
  */
@javax.annotation.Generated(value = Array("org.openapitools.codegen.languages.ScalaPlayFrameworkServerCodegen"), date = "2020-03-18T08:51:49.713Z[Etc/UTC]")
case class ResponseRoutesProperties(
  travelTime: Option[Int],
  distance: Option[Int],
  fares: Option[ResponseFares],
  route: Option[ResponseRoute]
)

object ResponseRoutesProperties {
  implicit lazy val responseRoutesPropertiesJsonFormat: Format[ResponseRoutesProperties] = Json.format[ResponseRoutesProperties]
}

