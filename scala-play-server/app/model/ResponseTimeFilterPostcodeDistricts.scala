package model

import play.api.libs.json._

/**
  * Represents the Swagger definition for ResponseTimeFilterPostcodeDistricts.
  */
@javax.annotation.Generated(value = Array("org.openapitools.codegen.languages.ScalaPlayFrameworkServerCodegen"), date = "2019-05-24T09:07:50.761Z[Etc/UTC]")
case class ResponseTimeFilterPostcodeDistricts(
  results: List[ResponseTimeFilterPostcodeDistrictsResult]
)

object ResponseTimeFilterPostcodeDistricts {
  implicit lazy val responseTimeFilterPostcodeDistrictsJsonFormat: Format[ResponseTimeFilterPostcodeDistricts] = Json.format[ResponseTimeFilterPostcodeDistricts]
}

