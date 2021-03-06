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
package org.openapitools.client.model

import org.openapitools.client.core.ApiModel

case class RequestTransportation (
  `type`: RequestTransportationEnums.`Type`,
  ptChangeDelay: Option[Int] = None,
  walkingTime: Option[Int] = None,
  drivingTimeToStation: Option[Int] = None,
  parkingTime: Option[Int] = None,
  boardingTime: Option[Int] = None
) extends ApiModel

object RequestTransportationEnums {

  type `Type` = `Type`.Value
  object `Type` extends Enumeration {
    val Cycling = Value("cycling")
    val Driving = Value("driving")
    val Drivingtrain = Value("driving+train")
    val PublicTransport = Value("public_transport")
    val Walking = Value("walking")
    val Coach = Value("coach")
    val Bus = Value("bus")
    val Train = Value("train")
    val Ferry = Value("ferry")
    val Drivingferry = Value("driving+ferry")
    val Cyclingferry = Value("cycling+ferry")
  }

}

