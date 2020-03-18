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
import org.openapitools.model.ResponseTimeFilterLocation;
import com.fasterxml.jackson.annotation.JsonPropertyOrder;
import javax.validation.constraints.*;
import javax.validation.Valid;

/**
 * ResponseTimeFilterResult
 */
@JsonPropertyOrder({
  ResponseTimeFilterResult.JSON_PROPERTY_SEARCH_ID,
  ResponseTimeFilterResult.JSON_PROPERTY_LOCATIONS,
  ResponseTimeFilterResult.JSON_PROPERTY_UNREACHABLE
})
@javax.annotation.Generated(value = "org.openapitools.codegen.languages.JavaJerseyServerCodegen", date = "2020-03-18T08:51:04.278Z[Etc/UTC]")
public class ResponseTimeFilterResult   {
  public static final String JSON_PROPERTY_SEARCH_ID = "search_id";
  @JsonProperty(JSON_PROPERTY_SEARCH_ID)
  private String searchId;

  public static final String JSON_PROPERTY_LOCATIONS = "locations";
  @JsonProperty(JSON_PROPERTY_LOCATIONS)
  private List<ResponseTimeFilterLocation> locations = new ArrayList<ResponseTimeFilterLocation>();

  public static final String JSON_PROPERTY_UNREACHABLE = "unreachable";
  @JsonProperty(JSON_PROPERTY_UNREACHABLE)
  private List<String> unreachable = new ArrayList<String>();

  public ResponseTimeFilterResult searchId(String searchId) {
    this.searchId = searchId;
    return this;
  }

  /**
   * Get searchId
   * @return searchId
   **/
  @JsonProperty("search_id")
  @ApiModelProperty(required = true, value = "")
  @NotNull 
  public String getSearchId() {
    return searchId;
  }

  public void setSearchId(String searchId) {
    this.searchId = searchId;
  }

  public ResponseTimeFilterResult locations(List<ResponseTimeFilterLocation> locations) {
    this.locations = locations;
    return this;
  }

  public ResponseTimeFilterResult addLocationsItem(ResponseTimeFilterLocation locationsItem) {
    this.locations.add(locationsItem);
    return this;
  }

  /**
   * Get locations
   * @return locations
   **/
  @JsonProperty("locations")
  @ApiModelProperty(required = true, value = "")
  @NotNull @Valid 
  public List<ResponseTimeFilterLocation> getLocations() {
    return locations;
  }

  public void setLocations(List<ResponseTimeFilterLocation> locations) {
    this.locations = locations;
  }

  public ResponseTimeFilterResult unreachable(List<String> unreachable) {
    this.unreachable = unreachable;
    return this;
  }

  public ResponseTimeFilterResult addUnreachableItem(String unreachableItem) {
    this.unreachable.add(unreachableItem);
    return this;
  }

  /**
   * Get unreachable
   * @return unreachable
   **/
  @JsonProperty("unreachable")
  @ApiModelProperty(required = true, value = "")
  @NotNull 
  public List<String> getUnreachable() {
    return unreachable;
  }

  public void setUnreachable(List<String> unreachable) {
    this.unreachable = unreachable;
  }


  @Override
  public boolean equals(java.lang.Object o) {
    if (this == o) {
      return true;
    }
    if (o == null || getClass() != o.getClass()) {
      return false;
    }
    ResponseTimeFilterResult responseTimeFilterResult = (ResponseTimeFilterResult) o;
    return Objects.equals(this.searchId, responseTimeFilterResult.searchId) &&
        Objects.equals(this.locations, responseTimeFilterResult.locations) &&
        Objects.equals(this.unreachable, responseTimeFilterResult.unreachable);
  }

  @Override
  public int hashCode() {
    return Objects.hash(searchId, locations, unreachable);
  }


  @Override
  public String toString() {
    StringBuilder sb = new StringBuilder();
    sb.append("class ResponseTimeFilterResult {\n");
    
    sb.append("    searchId: ").append(toIndentedString(searchId)).append("\n");
    sb.append("    locations: ").append(toIndentedString(locations)).append("\n");
    sb.append("    unreachable: ").append(toIndentedString(unreachable)).append("\n");
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

