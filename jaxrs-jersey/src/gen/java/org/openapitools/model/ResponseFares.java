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
import java.util.ArrayList;
import java.util.List;
import org.openapitools.model.ResponseFareTicket;
import org.openapitools.model.ResponseFaresBreakdownItem;
import com.fasterxml.jackson.annotation.JsonPropertyOrder;
import javax.validation.constraints.*;
import javax.validation.Valid;

/**
 * ResponseFares
 */
@JsonPropertyOrder({
  ResponseFares.JSON_PROPERTY_BREAKDOWN,
  ResponseFares.JSON_PROPERTY_TICKETS_TOTAL
})
@javax.annotation.Generated(value = "org.openapitools.codegen.languages.JavaJerseyServerCodegen", date = "2020-03-18T08:51:04.278Z[Etc/UTC]")
public class ResponseFares   {
  public static final String JSON_PROPERTY_BREAKDOWN = "breakdown";
  @JsonProperty(JSON_PROPERTY_BREAKDOWN)
  private List<ResponseFaresBreakdownItem> breakdown = new ArrayList<ResponseFaresBreakdownItem>();

  public static final String JSON_PROPERTY_TICKETS_TOTAL = "tickets_total";
  @JsonProperty(JSON_PROPERTY_TICKETS_TOTAL)
  private List<ResponseFareTicket> ticketsTotal = new ArrayList<ResponseFareTicket>();

  public ResponseFares breakdown(List<ResponseFaresBreakdownItem> breakdown) {
    this.breakdown = breakdown;
    return this;
  }

  public ResponseFares addBreakdownItem(ResponseFaresBreakdownItem breakdownItem) {
    this.breakdown.add(breakdownItem);
    return this;
  }

  /**
   * Get breakdown
   * @return breakdown
   **/
  @JsonProperty("breakdown")
  @ApiModelProperty(required = true, value = "")
  @NotNull @Valid 
  public List<ResponseFaresBreakdownItem> getBreakdown() {
    return breakdown;
  }

  public void setBreakdown(List<ResponseFaresBreakdownItem> breakdown) {
    this.breakdown = breakdown;
  }

  public ResponseFares ticketsTotal(List<ResponseFareTicket> ticketsTotal) {
    this.ticketsTotal = ticketsTotal;
    return this;
  }

  public ResponseFares addTicketsTotalItem(ResponseFareTicket ticketsTotalItem) {
    this.ticketsTotal.add(ticketsTotalItem);
    return this;
  }

  /**
   * Get ticketsTotal
   * @return ticketsTotal
   **/
  @JsonProperty("tickets_total")
  @ApiModelProperty(required = true, value = "")
  @NotNull @Valid 
  public List<ResponseFareTicket> getTicketsTotal() {
    return ticketsTotal;
  }

  public void setTicketsTotal(List<ResponseFareTicket> ticketsTotal) {
    this.ticketsTotal = ticketsTotal;
  }


  @Override
  public boolean equals(java.lang.Object o) {
    if (this == o) {
      return true;
    }
    if (o == null || getClass() != o.getClass()) {
      return false;
    }
    ResponseFares responseFares = (ResponseFares) o;
    return Objects.equals(this.breakdown, responseFares.breakdown) &&
        Objects.equals(this.ticketsTotal, responseFares.ticketsTotal);
  }

  @Override
  public int hashCode() {
    return Objects.hash(breakdown, ticketsTotal);
  }


  @Override
  public String toString() {
    StringBuilder sb = new StringBuilder();
    sb.append("class ResponseFares {\n");
    
    sb.append("    breakdown: ").append(toIndentedString(breakdown)).append("\n");
    sb.append("    ticketsTotal: ").append(toIndentedString(ticketsTotal)).append("\n");
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

