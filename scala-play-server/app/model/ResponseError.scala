package model

import play.api.libs.json._

/**
  * Represents the Swagger definition for ResponseError.
  */
@javax.annotation.Generated(value = Array("org.openapitools.codegen.languages.ScalaPlayFrameworkServerCodegen"), date = "2020-03-18T08:51:49.713Z[Etc/UTC]")
case class ResponseError(
  httpStatus: Option[Int],
  errorCode: Option[Int],
  description: Option[String],
  documentationLink: Option[String],
  additionalInfo: Option[Map[String, List[String]]]
)

object ResponseError {
  implicit lazy val responseErrorJsonFormat: Format[ResponseError] = Json.format[ResponseError]
}

