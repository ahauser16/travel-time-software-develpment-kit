package org.openapitools.model;

import org.openapitools.model.ResponseTravelTimeStatistics;
import javax.validation.constraints.*;
import javax.validation.Valid;

import io.swagger.annotations.ApiModelProperty;
import javax.xml.bind.annotation.XmlElement;
import javax.xml.bind.annotation.XmlRootElement;
import javax.xml.bind.annotation.XmlAccessType;
import javax.xml.bind.annotation.XmlAccessorType;
import javax.xml.bind.annotation.XmlType;
import javax.xml.bind.annotation.XmlEnum;
import javax.xml.bind.annotation.XmlEnumValue;
import com.fasterxml.jackson.annotation.JsonProperty;

public class ResponseTimeFilterPostcodeDistrictProperties  {
  
  @ApiModelProperty(value = "")
  @Valid
  private ResponseTravelTimeStatistics travelTimeReachable;

  @ApiModelProperty(value = "")
  @Valid
  private ResponseTravelTimeStatistics travelTimeAll;

  @ApiModelProperty(value = "")
  private Double coverage;
 /**
   * Get travelTimeReachable
   * @return travelTimeReachable
  **/
  @JsonProperty("travel_time_reachable")
  public ResponseTravelTimeStatistics getTravelTimeReachable() {
    return travelTimeReachable;
  }

  public void setTravelTimeReachable(ResponseTravelTimeStatistics travelTimeReachable) {
    this.travelTimeReachable = travelTimeReachable;
  }

  public ResponseTimeFilterPostcodeDistrictProperties travelTimeReachable(ResponseTravelTimeStatistics travelTimeReachable) {
    this.travelTimeReachable = travelTimeReachable;
    return this;
  }

 /**
   * Get travelTimeAll
   * @return travelTimeAll
  **/
  @JsonProperty("travel_time_all")
  public ResponseTravelTimeStatistics getTravelTimeAll() {
    return travelTimeAll;
  }

  public void setTravelTimeAll(ResponseTravelTimeStatistics travelTimeAll) {
    this.travelTimeAll = travelTimeAll;
  }

  public ResponseTimeFilterPostcodeDistrictProperties travelTimeAll(ResponseTravelTimeStatistics travelTimeAll) {
    this.travelTimeAll = travelTimeAll;
    return this;
  }

 /**
   * Get coverage
   * @return coverage
  **/
  @JsonProperty("coverage")
  public Double getCoverage() {
    return coverage;
  }

  public void setCoverage(Double coverage) {
    this.coverage = coverage;
  }

  public ResponseTimeFilterPostcodeDistrictProperties coverage(Double coverage) {
    this.coverage = coverage;
    return this;
  }


  @Override
  public String toString() {
    StringBuilder sb = new StringBuilder();
    sb.append("class ResponseTimeFilterPostcodeDistrictProperties {\n");
    
    sb.append("    travelTimeReachable: ").append(toIndentedString(travelTimeReachable)).append("\n");
    sb.append("    travelTimeAll: ").append(toIndentedString(travelTimeAll)).append("\n");
    sb.append("    coverage: ").append(toIndentedString(coverage)).append("\n");
    sb.append("}");
    return sb.toString();
  }

  /**
   * Convert the given object to string with each line indented by 4 spaces
   * (except the first line).
   */
  private static String toIndentedString(java.lang.Object o) {
    if (o == null) {
      return "null";
    }
    return o.toString().replace("\n", "\n    ");
  }
}

