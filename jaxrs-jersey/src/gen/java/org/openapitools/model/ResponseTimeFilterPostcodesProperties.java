/*
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


package org.openapitools.model;

import java.util.Objects;
import com.fasterxml.jackson.annotation.JsonProperty;
import com.fasterxml.jackson.annotation.JsonCreator;
import io.swagger.annotations.ApiModel;
import io.swagger.annotations.ApiModelProperty;
import com.fasterxml.jackson.annotation.JsonPropertyOrder;
import javax.validation.constraints.*;
import javax.validation.Valid;

/**
 * ResponseTimeFilterPostcodesProperties
 */
@JsonPropertyOrder({
  ResponseTimeFilterPostcodesProperties.JSON_PROPERTY_TRAVEL_TIME,
  ResponseTimeFilterPostcodesProperties.JSON_PROPERTY_DISTANCE
})
@javax.annotation.Generated(value = "org.openapitools.codegen.languages.JavaJerseyServerCodegen", date = "2020-03-18T07:54:16.563Z[Etc/UTC]")
public class ResponseTimeFilterPostcodesProperties   {
  public static final String JSON_PROPERTY_TRAVEL_TIME = "travel_time";
  @JsonProperty(JSON_PROPERTY_TRAVEL_TIME)
  private Integer travelTime;

  public static final String JSON_PROPERTY_DISTANCE = "distance";
  @JsonProperty(JSON_PROPERTY_DISTANCE)
  private Integer distance;

  public ResponseTimeFilterPostcodesProperties travelTime(Integer travelTime) {
    this.travelTime = travelTime;
    return this;
  }

  /**
   * Get travelTime
   * @return travelTime
   **/
  @JsonProperty("travel_time")
  @ApiModelProperty(value = "")
  
  public Integer getTravelTime() {
    return travelTime;
  }

  public void setTravelTime(Integer travelTime) {
    this.travelTime = travelTime;
  }

  public ResponseTimeFilterPostcodesProperties distance(Integer distance) {
    this.distance = distance;
    return this;
  }

  /**
   * Get distance
   * @return distance
   **/
  @JsonProperty("distance")
  @ApiModelProperty(value = "")
  
  public Integer getDistance() {
    return distance;
  }

  public void setDistance(Integer distance) {
    this.distance = distance;
  }


  @Override
  public boolean equals(java.lang.Object o) {
    if (this == o) {
      return true;
    }
    if (o == null || getClass() != o.getClass()) {
      return false;
    }
    ResponseTimeFilterPostcodesProperties responseTimeFilterPostcodesProperties = (ResponseTimeFilterPostcodesProperties) o;
    return Objects.equals(this.travelTime, responseTimeFilterPostcodesProperties.travelTime) &&
        Objects.equals(this.distance, responseTimeFilterPostcodesProperties.distance);
  }

  @Override
  public int hashCode() {
    return Objects.hash(travelTime, distance);
  }


  @Override
  public String toString() {
    StringBuilder sb = new StringBuilder();
    sb.append("class ResponseTimeFilterPostcodesProperties {\n");
    
    sb.append("    travelTime: ").append(toIndentedString(travelTime)).append("\n");
    sb.append("    distance: ").append(toIndentedString(distance)).append("\n");
    sb.append("}");
    return sb.toString();
  }

  /**
   * Convert the given object to string with each line indented by 4 spaces
   * (except the first line).
   */
  private String toIndentedString(java.lang.Object o) {
    if (o == null) {
      return "null";
    }
    return o.toString().replace("\n", "\n    ");
  }
}

