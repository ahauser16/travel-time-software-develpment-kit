package org.openapitools.models

import io.circe._
import io.finch.circe._
import io.circe.generic.semiauto._
import io.circe.java8.time._
import org.openapitools._
import org.openapitools.models.ResponseTravelTimeStatistics

/**
 * 
 * @param travelUnderscoretimeUnderscorereachable 
 * @param travelUnderscoretimeUnderscoreall 
 * @param coverage 
 */
case class ResponseTimeFilterPostcodeSectorProperties(travelUnderscoretimeUnderscorereachable: Option[ResponseTravelTimeStatistics],
                travelUnderscoretimeUnderscoreall: Option[ResponseTravelTimeStatistics],
                coverage: Option[Double]
                )

object ResponseTimeFilterPostcodeSectorProperties {
    /**
     * Creates the codec for converting ResponseTimeFilterPostcodeSectorProperties from and to JSON.
     */
    implicit val decoder: Decoder[ResponseTimeFilterPostcodeSectorProperties] = deriveDecoder
    implicit val encoder: ObjectEncoder[ResponseTimeFilterPostcodeSectorProperties] = deriveEncoder
}
