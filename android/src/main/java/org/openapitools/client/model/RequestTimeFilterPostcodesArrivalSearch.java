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

package org.openapitools.client.model;

import java.util.*;
import java.util.Date;
import org.openapitools.client.model.RequestRangeFull;
import org.openapitools.client.model.RequestTimeFilterPostcodesProperty;
import org.openapitools.client.model.RequestTransportation;
import io.swagger.annotations.*;
import com.google.gson.annotations.SerializedName;

@ApiModel(description = "")
public class RequestTimeFilterPostcodesArrivalSearch {
  
  @SerializedName("id")
  private String id = null;
  @SerializedName("transportation")
  private RequestTransportation transportation = null;
  @SerializedName("travel_time")
  private Integer travelTime = null;
  @SerializedName("arrival_time")
  private Date arrivalTime = null;
  @SerializedName("properties")
  private List<RequestTimeFilterPostcodesProperty> properties = null;
  @SerializedName("range")
  private RequestRangeFull range = null;

  /**
   **/
  @ApiModelProperty(required = true, value = "")
  public String getId() {
    return id;
  }
  public void setId(String id) {
    this.id = id;
  }

  /**
   **/
  @ApiModelProperty(required = true, value = "")
  public RequestTransportation getTransportation() {
    return transportation;
  }
  public void setTransportation(RequestTransportation transportation) {
    this.transportation = transportation;
  }

  /**
   * minimum: 60
   * maximum: 14400
   **/
  @ApiModelProperty(required = true, value = "")
  public Integer getTravelTime() {
    return travelTime;
  }
  public void setTravelTime(Integer travelTime) {
    this.travelTime = travelTime;
  }

  /**
   **/
  @ApiModelProperty(required = true, value = "")
  public Date getArrivalTime() {
    return arrivalTime;
  }
  public void setArrivalTime(Date arrivalTime) {
    this.arrivalTime = arrivalTime;
  }

  /**
   **/
  @ApiModelProperty(required = true, value = "")
  public List<RequestTimeFilterPostcodesProperty> getProperties() {
    return properties;
  }
  public void setProperties(List<RequestTimeFilterPostcodesProperty> properties) {
    this.properties = properties;
  }

  /**
   **/
  @ApiModelProperty(value = "")
  public RequestRangeFull getRange() {
    return range;
  }
  public void setRange(RequestRangeFull range) {
    this.range = range;
  }


  @Override
  public boolean equals(Object o) {
    if (this == o) {
      return true;
    }
    if (o == null || getClass() != o.getClass()) {
      return false;
    }
    RequestTimeFilterPostcodesArrivalSearch requestTimeFilterPostcodesArrivalSearch = (RequestTimeFilterPostcodesArrivalSearch) o;
    return (this.id == null ? requestTimeFilterPostcodesArrivalSearch.id == null : this.id.equals(requestTimeFilterPostcodesArrivalSearch.id)) &&
        (this.transportation == null ? requestTimeFilterPostcodesArrivalSearch.transportation == null : this.transportation.equals(requestTimeFilterPostcodesArrivalSearch.transportation)) &&
        (this.travelTime == null ? requestTimeFilterPostcodesArrivalSearch.travelTime == null : this.travelTime.equals(requestTimeFilterPostcodesArrivalSearch.travelTime)) &&
        (this.arrivalTime == null ? requestTimeFilterPostcodesArrivalSearch.arrivalTime == null : this.arrivalTime.equals(requestTimeFilterPostcodesArrivalSearch.arrivalTime)) &&
        (this.properties == null ? requestTimeFilterPostcodesArrivalSearch.properties == null : this.properties.equals(requestTimeFilterPostcodesArrivalSearch.properties)) &&
        (this.range == null ? requestTimeFilterPostcodesArrivalSearch.range == null : this.range.equals(requestTimeFilterPostcodesArrivalSearch.range));
  }

  @Override
  public int hashCode() {
    int result = 17;
    result = 31 * result + (this.id == null ? 0: this.id.hashCode());
    result = 31 * result + (this.transportation == null ? 0: this.transportation.hashCode());
    result = 31 * result + (this.travelTime == null ? 0: this.travelTime.hashCode());
    result = 31 * result + (this.arrivalTime == null ? 0: this.arrivalTime.hashCode());
    result = 31 * result + (this.properties == null ? 0: this.properties.hashCode());
    result = 31 * result + (this.range == null ? 0: this.range.hashCode());
    return result;
  }

  @Override
  public String toString()  {
    StringBuilder sb = new StringBuilder();
    sb.append("class RequestTimeFilterPostcodesArrivalSearch {\n");
    
    sb.append("  id: ").append(id).append("\n");
    sb.append("  transportation: ").append(transportation).append("\n");
    sb.append("  travelTime: ").append(travelTime).append("\n");
    sb.append("  arrivalTime: ").append(arrivalTime).append("\n");
    sb.append("  properties: ").append(properties).append("\n");
    sb.append("  range: ").append(range).append("\n");
    sb.append("}\n");
    return sb.toString();
  }
}
