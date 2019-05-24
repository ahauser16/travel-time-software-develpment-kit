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
import org.openapitools.client.model.RequestRoutesProperty;
import org.openapitools.client.model.RequestTransportation;
import io.swagger.annotations.*;
import com.google.gson.annotations.SerializedName;

@ApiModel(description = "")
public class RequestRoutesDepartureSearch {
  
  @SerializedName("id")
  private String id = null;
  @SerializedName("departure_location_id")
  private String departureLocationId = null;
  @SerializedName("arrival_location_ids")
  private List<String> arrivalLocationIds = null;
  @SerializedName("transportation")
  private RequestTransportation transportation = null;
  @SerializedName("departure_time")
  private Date departureTime = null;
  @SerializedName("properties")
  private List<RequestRoutesProperty> properties = null;
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
  public String getDepartureLocationId() {
    return departureLocationId;
  }
  public void setDepartureLocationId(String departureLocationId) {
    this.departureLocationId = departureLocationId;
  }

  /**
   **/
  @ApiModelProperty(required = true, value = "")
  public List<String> getArrivalLocationIds() {
    return arrivalLocationIds;
  }
  public void setArrivalLocationIds(List<String> arrivalLocationIds) {
    this.arrivalLocationIds = arrivalLocationIds;
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
   **/
  @ApiModelProperty(required = true, value = "")
  public Date getDepartureTime() {
    return departureTime;
  }
  public void setDepartureTime(Date departureTime) {
    this.departureTime = departureTime;
  }

  /**
   **/
  @ApiModelProperty(required = true, value = "")
  public List<RequestRoutesProperty> getProperties() {
    return properties;
  }
  public void setProperties(List<RequestRoutesProperty> properties) {
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
    RequestRoutesDepartureSearch requestRoutesDepartureSearch = (RequestRoutesDepartureSearch) o;
    return (this.id == null ? requestRoutesDepartureSearch.id == null : this.id.equals(requestRoutesDepartureSearch.id)) &&
        (this.departureLocationId == null ? requestRoutesDepartureSearch.departureLocationId == null : this.departureLocationId.equals(requestRoutesDepartureSearch.departureLocationId)) &&
        (this.arrivalLocationIds == null ? requestRoutesDepartureSearch.arrivalLocationIds == null : this.arrivalLocationIds.equals(requestRoutesDepartureSearch.arrivalLocationIds)) &&
        (this.transportation == null ? requestRoutesDepartureSearch.transportation == null : this.transportation.equals(requestRoutesDepartureSearch.transportation)) &&
        (this.departureTime == null ? requestRoutesDepartureSearch.departureTime == null : this.departureTime.equals(requestRoutesDepartureSearch.departureTime)) &&
        (this.properties == null ? requestRoutesDepartureSearch.properties == null : this.properties.equals(requestRoutesDepartureSearch.properties)) &&
        (this.range == null ? requestRoutesDepartureSearch.range == null : this.range.equals(requestRoutesDepartureSearch.range));
  }

  @Override
  public int hashCode() {
    int result = 17;
    result = 31 * result + (this.id == null ? 0: this.id.hashCode());
    result = 31 * result + (this.departureLocationId == null ? 0: this.departureLocationId.hashCode());
    result = 31 * result + (this.arrivalLocationIds == null ? 0: this.arrivalLocationIds.hashCode());
    result = 31 * result + (this.transportation == null ? 0: this.transportation.hashCode());
    result = 31 * result + (this.departureTime == null ? 0: this.departureTime.hashCode());
    result = 31 * result + (this.properties == null ? 0: this.properties.hashCode());
    result = 31 * result + (this.range == null ? 0: this.range.hashCode());
    return result;
  }

  @Override
  public String toString()  {
    StringBuilder sb = new StringBuilder();
    sb.append("class RequestRoutesDepartureSearch {\n");
    
    sb.append("  id: ").append(id).append("\n");
    sb.append("  departureLocationId: ").append(departureLocationId).append("\n");
    sb.append("  arrivalLocationIds: ").append(arrivalLocationIds).append("\n");
    sb.append("  transportation: ").append(transportation).append("\n");
    sb.append("  departureTime: ").append(departureTime).append("\n");
    sb.append("  properties: ").append(properties).append("\n");
    sb.append("  range: ").append(range).append("\n");
    sb.append("}\n");
    return sb.toString();
  }
}
