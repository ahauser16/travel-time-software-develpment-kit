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
import org.openapitools.client.model.ResponseFareTicket;
import org.openapitools.client.model.ResponseFaresBreakdownItem;
import io.swagger.annotations.*;
import com.google.gson.annotations.SerializedName;

@ApiModel(description = "")
public class ResponseFares {
  
  @SerializedName("breakdown")
  private List<ResponseFaresBreakdownItem> breakdown = null;
  @SerializedName("tickets_total")
  private List<ResponseFareTicket> ticketsTotal = null;

  /**
   **/
  @ApiModelProperty(required = true, value = "")
  public List<ResponseFaresBreakdownItem> getBreakdown() {
    return breakdown;
  }
  public void setBreakdown(List<ResponseFaresBreakdownItem> breakdown) {
    this.breakdown = breakdown;
  }

  /**
   **/
  @ApiModelProperty(required = true, value = "")
  public List<ResponseFareTicket> getTicketsTotal() {
    return ticketsTotal;
  }
  public void setTicketsTotal(List<ResponseFareTicket> ticketsTotal) {
    this.ticketsTotal = ticketsTotal;
  }


  @Override
  public boolean equals(Object o) {
    if (this == o) {
      return true;
    }
    if (o == null || getClass() != o.getClass()) {
      return false;
    }
    ResponseFares responseFares = (ResponseFares) o;
    return (this.breakdown == null ? responseFares.breakdown == null : this.breakdown.equals(responseFares.breakdown)) &&
        (this.ticketsTotal == null ? responseFares.ticketsTotal == null : this.ticketsTotal.equals(responseFares.ticketsTotal));
  }

  @Override
  public int hashCode() {
    int result = 17;
    result = 31 * result + (this.breakdown == null ? 0: this.breakdown.hashCode());
    result = 31 * result + (this.ticketsTotal == null ? 0: this.ticketsTotal.hashCode());
    return result;
  }

  @Override
  public String toString()  {
    StringBuilder sb = new StringBuilder();
    sb.append("class ResponseFares {\n");
    
    sb.append("  breakdown: ").append(breakdown).append("\n");
    sb.append("  ticketsTotal: ").append(ticketsTotal).append("\n");
    sb.append("}\n");
    return sb.toString();
  }
}
