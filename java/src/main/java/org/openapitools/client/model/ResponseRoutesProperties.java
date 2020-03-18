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


package org.openapitools.client.model;

import java.util.Objects;
import java.util.Arrays;
import com.google.gson.TypeAdapter;
import com.google.gson.annotations.JsonAdapter;
import com.google.gson.annotations.SerializedName;
import com.google.gson.stream.JsonReader;
import com.google.gson.stream.JsonWriter;
import io.swagger.annotations.ApiModel;
import io.swagger.annotations.ApiModelProperty;
import java.io.IOException;
import org.openapitools.client.model.ResponseFares;
import org.openapitools.client.model.ResponseRoute;

/**
 * ResponseRoutesProperties
 */
@javax.annotation.Generated(value = "org.openapitools.codegen.languages.JavaClientCodegen", date = "2020-03-18T07:52:01.523Z[Etc/UTC]")
public class ResponseRoutesProperties {
  public static final String SERIALIZED_NAME_TRAVEL_TIME = "travel_time";
  @SerializedName(SERIALIZED_NAME_TRAVEL_TIME)
  private Integer travelTime;

  public static final String SERIALIZED_NAME_DISTANCE = "distance";
  @SerializedName(SERIALIZED_NAME_DISTANCE)
  private Integer distance;

  public static final String SERIALIZED_NAME_FARES = "fares";
  @SerializedName(SERIALIZED_NAME_FARES)
  private ResponseFares fares;

  public static final String SERIALIZED_NAME_ROUTE = "route";
  @SerializedName(SERIALIZED_NAME_ROUTE)
  private ResponseRoute route;


  public ResponseRoutesProperties travelTime(Integer travelTime) {
    
    this.travelTime = travelTime;
    return this;
  }

   /**
   * Get travelTime
   * @return travelTime
  **/
  @javax.annotation.Nullable
  @ApiModelProperty(value = "")

  public Integer getTravelTime() {
    return travelTime;
  }


  public void setTravelTime(Integer travelTime) {
    this.travelTime = travelTime;
  }


  public ResponseRoutesProperties distance(Integer distance) {
    
    this.distance = distance;
    return this;
  }

   /**
   * Get distance
   * @return distance
  **/
  @javax.annotation.Nullable
  @ApiModelProperty(value = "")

  public Integer getDistance() {
    return distance;
  }


  public void setDistance(Integer distance) {
    this.distance = distance;
  }


  public ResponseRoutesProperties fares(ResponseFares fares) {
    
    this.fares = fares;
    return this;
  }

   /**
   * Get fares
   * @return fares
  **/
  @javax.annotation.Nullable
  @ApiModelProperty(value = "")

  public ResponseFares getFares() {
    return fares;
  }


  public void setFares(ResponseFares fares) {
    this.fares = fares;
  }


  public ResponseRoutesProperties route(ResponseRoute route) {
    
    this.route = route;
    return this;
  }

   /**
   * Get route
   * @return route
  **/
  @javax.annotation.Nullable
  @ApiModelProperty(value = "")

  public ResponseRoute getRoute() {
    return route;
  }


  public void setRoute(ResponseRoute route) {
    this.route = route;
  }


  @Override
  public boolean equals(java.lang.Object o) {
    if (this == o) {
      return true;
    }
    if (o == null || getClass() != o.getClass()) {
      return false;
    }
    ResponseRoutesProperties responseRoutesProperties = (ResponseRoutesProperties) o;
    return Objects.equals(this.travelTime, responseRoutesProperties.travelTime) &&
        Objects.equals(this.distance, responseRoutesProperties.distance) &&
        Objects.equals(this.fares, responseRoutesProperties.fares) &&
        Objects.equals(this.route, responseRoutesProperties.route);
  }

  @Override
  public int hashCode() {
    return Objects.hash(travelTime, distance, fares, route);
  }


  @Override
  public String toString() {
    StringBuilder sb = new StringBuilder();
    sb.append("class ResponseRoutesProperties {\n");
    sb.append("    travelTime: ").append(toIndentedString(travelTime)).append("\n");
    sb.append("    distance: ").append(toIndentedString(distance)).append("\n");
    sb.append("    fares: ").append(toIndentedString(fares)).append("\n");
    sb.append("    route: ").append(toIndentedString(route)).append("\n");
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

