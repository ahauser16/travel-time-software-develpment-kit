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
import io.swagger.annotations.*;
import com.google.gson.annotations.SerializedName;

@ApiModel(description = "")
public class ResponseGeocodingGeometry {
  
  @SerializedName("type")
  private String type = null;
  @SerializedName("coordinates")
  private List<Double> coordinates = null;

  /**
   **/
  @ApiModelProperty(required = true, value = "")
  public String getType() {
    return type;
  }
  public void setType(String type) {
    this.type = type;
  }

  /**
   **/
  @ApiModelProperty(required = true, value = "")
  public List<Double> getCoordinates() {
    return coordinates;
  }
  public void setCoordinates(List<Double> coordinates) {
    this.coordinates = coordinates;
  }


  @Override
  public boolean equals(Object o) {
    if (this == o) {
      return true;
    }
    if (o == null || getClass() != o.getClass()) {
      return false;
    }
    ResponseGeocodingGeometry responseGeocodingGeometry = (ResponseGeocodingGeometry) o;
    return (this.type == null ? responseGeocodingGeometry.type == null : this.type.equals(responseGeocodingGeometry.type)) &&
        (this.coordinates == null ? responseGeocodingGeometry.coordinates == null : this.coordinates.equals(responseGeocodingGeometry.coordinates));
  }

  @Override
  public int hashCode() {
    int result = 17;
    result = 31 * result + (this.type == null ? 0: this.type.hashCode());
    result = 31 * result + (this.coordinates == null ? 0: this.coordinates.hashCode());
    return result;
  }

  @Override
  public String toString()  {
    StringBuilder sb = new StringBuilder();
    sb.append("class ResponseGeocodingGeometry {\n");
    
    sb.append("  type: ").append(type).append("\n");
    sb.append("  coordinates: ").append(coordinates).append("\n");
    sb.append("}\n");
    return sb.toString();
  }
}
