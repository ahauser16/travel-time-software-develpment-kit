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
import java.util.ArrayList;
import java.util.List;
import org.openapitools.client.model.RequestRangeFull;
import org.openapitools.client.model.RequestTimeFilterPostcodeSectorsProperty;
import org.openapitools.client.model.RequestTransportation;
import org.threeten.bp.OffsetDateTime;

/**
 * RequestTimeFilterPostcodeSectorsDepartureSearch
 */
@javax.annotation.Generated(value = "org.openapitools.codegen.languages.JavaClientCodegen", date = "2020-03-18T08:49:07.511Z[Etc/UTC]")
public class RequestTimeFilterPostcodeSectorsDepartureSearch {
  public static final String SERIALIZED_NAME_ID = "id";
  @SerializedName(SERIALIZED_NAME_ID)
  private String id;

  public static final String SERIALIZED_NAME_TRANSPORTATION = "transportation";
  @SerializedName(SERIALIZED_NAME_TRANSPORTATION)
  private RequestTransportation transportation;

  public static final String SERIALIZED_NAME_TRAVEL_TIME = "travel_time";
  @SerializedName(SERIALIZED_NAME_TRAVEL_TIME)
  private Integer travelTime;

  public static final String SERIALIZED_NAME_DEPARTURE_TIME = "departure_time";
  @SerializedName(SERIALIZED_NAME_DEPARTURE_TIME)
  private OffsetDateTime departureTime;

  public static final String SERIALIZED_NAME_REACHABLE_POSTCODES_THRESHOLD = "reachable_postcodes_threshold";
  @SerializedName(SERIALIZED_NAME_REACHABLE_POSTCODES_THRESHOLD)
  private Double reachablePostcodesThreshold;

  public static final String SERIALIZED_NAME_PROPERTIES = "properties";
  @SerializedName(SERIALIZED_NAME_PROPERTIES)
  private List<RequestTimeFilterPostcodeSectorsProperty> properties = new ArrayList<RequestTimeFilterPostcodeSectorsProperty>();

  public static final String SERIALIZED_NAME_RANGE = "range";
  @SerializedName(SERIALIZED_NAME_RANGE)
  private RequestRangeFull range;


  public RequestTimeFilterPostcodeSectorsDepartureSearch id(String id) {
    
    this.id = id;
    return this;
  }

   /**
   * Get id
   * @return id
  **/
  @ApiModelProperty(required = true, value = "")

  public String getId() {
    return id;
  }


  public void setId(String id) {
    this.id = id;
  }


  public RequestTimeFilterPostcodeSectorsDepartureSearch transportation(RequestTransportation transportation) {
    
    this.transportation = transportation;
    return this;
  }

   /**
   * Get transportation
   * @return transportation
  **/
  @ApiModelProperty(required = true, value = "")

  public RequestTransportation getTransportation() {
    return transportation;
  }


  public void setTransportation(RequestTransportation transportation) {
    this.transportation = transportation;
  }


  public RequestTimeFilterPostcodeSectorsDepartureSearch travelTime(Integer travelTime) {
    
    this.travelTime = travelTime;
    return this;
  }

   /**
   * Get travelTime
   * minimum: 60
   * maximum: 14400
   * @return travelTime
  **/
  @ApiModelProperty(required = true, value = "")

  public Integer getTravelTime() {
    return travelTime;
  }


  public void setTravelTime(Integer travelTime) {
    this.travelTime = travelTime;
  }


  public RequestTimeFilterPostcodeSectorsDepartureSearch departureTime(OffsetDateTime departureTime) {
    
    this.departureTime = departureTime;
    return this;
  }

   /**
   * Get departureTime
   * @return departureTime
  **/
  @ApiModelProperty(required = true, value = "")

  public OffsetDateTime getDepartureTime() {
    return departureTime;
  }


  public void setDepartureTime(OffsetDateTime departureTime) {
    this.departureTime = departureTime;
  }


  public RequestTimeFilterPostcodeSectorsDepartureSearch reachablePostcodesThreshold(Double reachablePostcodesThreshold) {
    
    this.reachablePostcodesThreshold = reachablePostcodesThreshold;
    return this;
  }

   /**
   * Get reachablePostcodesThreshold
   * @return reachablePostcodesThreshold
  **/
  @ApiModelProperty(required = true, value = "")

  public Double getReachablePostcodesThreshold() {
    return reachablePostcodesThreshold;
  }


  public void setReachablePostcodesThreshold(Double reachablePostcodesThreshold) {
    this.reachablePostcodesThreshold = reachablePostcodesThreshold;
  }


  public RequestTimeFilterPostcodeSectorsDepartureSearch properties(List<RequestTimeFilterPostcodeSectorsProperty> properties) {
    
    this.properties = properties;
    return this;
  }

  public RequestTimeFilterPostcodeSectorsDepartureSearch addPropertiesItem(RequestTimeFilterPostcodeSectorsProperty propertiesItem) {
    this.properties.add(propertiesItem);
    return this;
  }

   /**
   * Get properties
   * @return properties
  **/
  @ApiModelProperty(required = true, value = "")

  public List<RequestTimeFilterPostcodeSectorsProperty> getProperties() {
    return properties;
  }


  public void setProperties(List<RequestTimeFilterPostcodeSectorsProperty> properties) {
    this.properties = properties;
  }


  public RequestTimeFilterPostcodeSectorsDepartureSearch range(RequestRangeFull range) {
    
    this.range = range;
    return this;
  }

   /**
   * Get range
   * @return range
  **/
  @javax.annotation.Nullable
  @ApiModelProperty(value = "")

  public RequestRangeFull getRange() {
    return range;
  }


  public void setRange(RequestRangeFull range) {
    this.range = range;
  }


  @Override
  public boolean equals(java.lang.Object o) {
    if (this == o) {
      return true;
    }
    if (o == null || getClass() != o.getClass()) {
      return false;
    }
    RequestTimeFilterPostcodeSectorsDepartureSearch requestTimeFilterPostcodeSectorsDepartureSearch = (RequestTimeFilterPostcodeSectorsDepartureSearch) o;
    return Objects.equals(this.id, requestTimeFilterPostcodeSectorsDepartureSearch.id) &&
        Objects.equals(this.transportation, requestTimeFilterPostcodeSectorsDepartureSearch.transportation) &&
        Objects.equals(this.travelTime, requestTimeFilterPostcodeSectorsDepartureSearch.travelTime) &&
        Objects.equals(this.departureTime, requestTimeFilterPostcodeSectorsDepartureSearch.departureTime) &&
        Objects.equals(this.reachablePostcodesThreshold, requestTimeFilterPostcodeSectorsDepartureSearch.reachablePostcodesThreshold) &&
        Objects.equals(this.properties, requestTimeFilterPostcodeSectorsDepartureSearch.properties) &&
        Objects.equals(this.range, requestTimeFilterPostcodeSectorsDepartureSearch.range);
  }

  @Override
  public int hashCode() {
    return Objects.hash(id, transportation, travelTime, departureTime, reachablePostcodesThreshold, properties, range);
  }


  @Override
  public String toString() {
    StringBuilder sb = new StringBuilder();
    sb.append("class RequestTimeFilterPostcodeSectorsDepartureSearch {\n");
    sb.append("    id: ").append(toIndentedString(id)).append("\n");
    sb.append("    transportation: ").append(toIndentedString(transportation)).append("\n");
    sb.append("    travelTime: ").append(toIndentedString(travelTime)).append("\n");
    sb.append("    departureTime: ").append(toIndentedString(departureTime)).append("\n");
    sb.append("    reachablePostcodesThreshold: ").append(toIndentedString(reachablePostcodesThreshold)).append("\n");
    sb.append("    properties: ").append(toIndentedString(properties)).append("\n");
    sb.append("    range: ").append(toIndentedString(range)).append("\n");
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

