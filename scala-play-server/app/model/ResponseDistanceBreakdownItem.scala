package model

import play.api.libs.json._

/**
  * Represents the Swagger definition for ResponseDistanceBreakdownItem.
  */
@javax.annotation.Generated(value = Array("org.openapitools.codegen.languages.ScalaPlayFrameworkServerCodegen"), date = "2020-03-18T07:55:16.100Z[Etc/UTC]")
case class ResponseDistanceBreakdownItem(
  mode: ResponseTransportationMode,
  distance: Int
)

object ResponseDistanceBreakdownItem {
  implicit lazy val responseDistanceBreakdownItemJsonFormat: Format[ResponseDistanceBreakdownItem] = Json.format[ResponseDistanceBreakdownItem]
}

