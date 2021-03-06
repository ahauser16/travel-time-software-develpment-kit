package model

import play.api.libs.json._

/**
  * Represents the Swagger definition for ResponseRoutesLocation.
  */
@javax.annotation.Generated(value = Array("org.openapitools.codegen.languages.ScalaPlayFrameworkServerCodegen"), date = "2020-03-18T08:51:49.713Z[Etc/UTC]")
case class ResponseRoutesLocation(
  id: String,
  properties: List[ResponseRoutesProperties]
)

object ResponseRoutesLocation {
  implicit lazy val responseRoutesLocationJsonFormat: Format[ResponseRoutesLocation] = Json.format[ResponseRoutesLocation]
}

