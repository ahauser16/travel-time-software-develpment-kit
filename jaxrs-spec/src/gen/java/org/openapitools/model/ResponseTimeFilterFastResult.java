package org.openapitools.model;

import io.swagger.annotations.ApiModel;
import io.swagger.annotations.ApiModelProperty;
import java.util.ArrayList;
import java.util.List;
import org.openapitools.model.ResponseTimeFilterFastLocation;
import javax.validation.constraints.*;
import javax.validation.Valid;

import io.swagger.annotations.*;
import java.util.Objects;
import com.fasterxml.jackson.annotation.JsonProperty;
import com.fasterxml.jackson.annotation.JsonCreator;
import com.fasterxml.jackson.annotation.JsonValue;



@javax.annotation.Generated(value = "org.openapitools.codegen.languages.JavaJAXRSSpecServerCodegen", date = "2020-03-18T08:51:11.573Z[Etc/UTC]")
public class ResponseTimeFilterFastResult   {
  
  private @Valid String searchId;
  private @Valid List<ResponseTimeFilterFastLocation> locations = new ArrayList<ResponseTimeFilterFastLocation>();
  private @Valid List<String> unreachable = new ArrayList<String>();

  /**
   **/
  public ResponseTimeFilterFastResult searchId(String searchId) {
    this.searchId = searchId;
    return this;
  }

  
  @ApiModelProperty(required = true, value = "")
  @JsonProperty("search_id")
  @NotNull
  public String getSearchId() {
    return searchId;
  }
  public void setSearchId(String searchId) {
    this.searchId = searchId;
  }

  /**
   **/
  public ResponseTimeFilterFastResult locations(List<ResponseTimeFilterFastLocation> locations) {
    this.locations = locations;
    return this;
  }

  
  @ApiModelProperty(required = true, value = "")
  @JsonProperty("locations")
  @NotNull
  public List<ResponseTimeFilterFastLocation> getLocations() {
    return locations;
  }
  public void setLocations(List<ResponseTimeFilterFastLocation> locations) {
    this.locations = locations;
  }

  /**
   **/
  public ResponseTimeFilterFastResult unreachable(List<String> unreachable) {
    this.unreachable = unreachable;
    return this;
  }

  
  @ApiModelProperty(required = true, value = "")
  @JsonProperty("unreachable")
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
    ResponseTimeFilterFastResult responseTimeFilterFastResult = (ResponseTimeFilterFastResult) o;
    return Objects.equals(this.searchId, responseTimeFilterFastResult.searchId) &&
        Objects.equals(this.locations, responseTimeFilterFastResult.locations) &&
        Objects.equals(this.unreachable, responseTimeFilterFastResult.unreachable);
  }

  @Override
  public int hashCode() {
    return Objects.hash(searchId, locations, unreachable);
  }

  @Override
  public String toString() {
    StringBuilder sb = new StringBuilder();
    sb.append("class ResponseTimeFilterFastResult {\n");
    
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

