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
import org.openapitools.model.ResponseTimeFilterPostcodeSectorsResult;
import com.fasterxml.jackson.annotation.JsonPropertyOrder;
import javax.validation.constraints.*;
import javax.validation.Valid;

/**
 * ResponseTimeFilterPostcodeSectors
 */
@JsonPropertyOrder({
  ResponseTimeFilterPostcodeSectors.JSON_PROPERTY_RESULTS
})
@javax.annotation.Generated(value = "org.openapitools.codegen.languages.JavaJerseyServerCodegen", date = "2020-03-18T08:51:04.278Z[Etc/UTC]")
public class ResponseTimeFilterPostcodeSectors   {
  public static final String JSON_PROPERTY_RESULTS = "results";
  @JsonProperty(JSON_PROPERTY_RESULTS)
  private List<ResponseTimeFilterPostcodeSectorsResult> results = new ArrayList<ResponseTimeFilterPostcodeSectorsResult>();

  public ResponseTimeFilterPostcodeSectors results(List<ResponseTimeFilterPostcodeSectorsResult> results) {
    this.results = results;
    return this;
  }

  public ResponseTimeFilterPostcodeSectors addResultsItem(ResponseTimeFilterPostcodeSectorsResult resultsItem) {
    this.results.add(resultsItem);
    return this;
  }

  /**
   * Get results
   * @return results
   **/
  @JsonProperty("results")
  @ApiModelProperty(required = true, value = "")
  @NotNull @Valid 
  public List<ResponseTimeFilterPostcodeSectorsResult> getResults() {
    return results;
  }

  public void setResults(List<ResponseTimeFilterPostcodeSectorsResult> results) {
    this.results = results;
  }


  @Override
  public boolean equals(java.lang.Object o) {
    if (this == o) {
      return true;
    }
    if (o == null || getClass() != o.getClass()) {
      return false;
    }
    ResponseTimeFilterPostcodeSectors responseTimeFilterPostcodeSectors = (ResponseTimeFilterPostcodeSectors) o;
    return Objects.equals(this.results, responseTimeFilterPostcodeSectors.results);
  }

  @Override
  public int hashCode() {
    return Objects.hash(results);
  }


  @Override
  public String toString() {
    StringBuilder sb = new StringBuilder();
    sb.append("class ResponseTimeFilterPostcodeSectors {\n");
    
    sb.append("    results: ").append(toIndentedString(results)).append("\n");
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

