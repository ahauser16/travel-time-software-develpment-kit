package org.openapitools.model;

import java.util.Objects;
import com.fasterxml.jackson.annotation.JsonProperty;
import com.fasterxml.jackson.annotation.JsonCreator;
import io.swagger.annotations.ApiModel;
import io.swagger.annotations.ApiModelProperty;
import java.util.ArrayList;
import java.util.List;
import org.openapitools.model.RequestTimeMapArrivalSearch;
import org.openapitools.model.RequestTimeMapDepartureSearch;
import org.openapitools.model.RequestUnionOnIntersection;
import org.openapitools.jackson.nullable.JsonNullable;
import javax.validation.Valid;
import javax.validation.constraints.*;

/**
 * RequestTimeMap
 */
@javax.annotation.Generated(value = "org.openapitools.codegen.languages.SpringCodegen", date = "2020-03-18T08:51:54.244Z[Etc/UTC]")

public class RequestTimeMap   {
  @JsonProperty("departure_searches")
  @Valid
  private List<RequestTimeMapDepartureSearch> departureSearches = null;

  @JsonProperty("arrival_searches")
  @Valid
  private List<RequestTimeMapArrivalSearch> arrivalSearches = null;

  @JsonProperty("unions")
  @Valid
  private List<RequestUnionOnIntersection> unions = null;

  @JsonProperty("intersections")
  @Valid
  private List<RequestUnionOnIntersection> intersections = null;

  public RequestTimeMap departureSearches(List<RequestTimeMapDepartureSearch> departureSearches) {
    this.departureSearches = departureSearches;
    return this;
  }

  public RequestTimeMap addDepartureSearchesItem(RequestTimeMapDepartureSearch departureSearchesItem) {
    if (this.departureSearches == null) {
      this.departureSearches = new ArrayList<>();
    }
    this.departureSearches.add(departureSearchesItem);
    return this;
  }

  /**
   * Get departureSearches
   * @return departureSearches
  */
  @ApiModelProperty(value = "")

  @Valid
@Size(max=10) 
  public List<RequestTimeMapDepartureSearch> getDepartureSearches() {
    return departureSearches;
  }

  public void setDepartureSearches(List<RequestTimeMapDepartureSearch> departureSearches) {
    this.departureSearches = departureSearches;
  }

  public RequestTimeMap arrivalSearches(List<RequestTimeMapArrivalSearch> arrivalSearches) {
    this.arrivalSearches = arrivalSearches;
    return this;
  }

  public RequestTimeMap addArrivalSearchesItem(RequestTimeMapArrivalSearch arrivalSearchesItem) {
    if (this.arrivalSearches == null) {
      this.arrivalSearches = new ArrayList<>();
    }
    this.arrivalSearches.add(arrivalSearchesItem);
    return this;
  }

  /**
   * Get arrivalSearches
   * @return arrivalSearches
  */
  @ApiModelProperty(value = "")

  @Valid
@Size(max=10) 
  public List<RequestTimeMapArrivalSearch> getArrivalSearches() {
    return arrivalSearches;
  }

  public void setArrivalSearches(List<RequestTimeMapArrivalSearch> arrivalSearches) {
    this.arrivalSearches = arrivalSearches;
  }

  public RequestTimeMap unions(List<RequestUnionOnIntersection> unions) {
    this.unions = unions;
    return this;
  }

  public RequestTimeMap addUnionsItem(RequestUnionOnIntersection unionsItem) {
    if (this.unions == null) {
      this.unions = new ArrayList<>();
    }
    this.unions.add(unionsItem);
    return this;
  }

  /**
   * Get unions
   * @return unions
  */
  @ApiModelProperty(value = "")

  @Valid
@Size(max=10) 
  public List<RequestUnionOnIntersection> getUnions() {
    return unions;
  }

  public void setUnions(List<RequestUnionOnIntersection> unions) {
    this.unions = unions;
  }

  public RequestTimeMap intersections(List<RequestUnionOnIntersection> intersections) {
    this.intersections = intersections;
    return this;
  }

  public RequestTimeMap addIntersectionsItem(RequestUnionOnIntersection intersectionsItem) {
    if (this.intersections == null) {
      this.intersections = new ArrayList<>();
    }
    this.intersections.add(intersectionsItem);
    return this;
  }

  /**
   * Get intersections
   * @return intersections
  */
  @ApiModelProperty(value = "")

  @Valid
@Size(max=10) 
  public List<RequestUnionOnIntersection> getIntersections() {
    return intersections;
  }

  public void setIntersections(List<RequestUnionOnIntersection> intersections) {
    this.intersections = intersections;
  }


  @Override
  public boolean equals(java.lang.Object o) {
    if (this == o) {
      return true;
    }
    if (o == null || getClass() != o.getClass()) {
      return false;
    }
    RequestTimeMap requestTimeMap = (RequestTimeMap) o;
    return Objects.equals(this.departureSearches, requestTimeMap.departureSearches) &&
        Objects.equals(this.arrivalSearches, requestTimeMap.arrivalSearches) &&
        Objects.equals(this.unions, requestTimeMap.unions) &&
        Objects.equals(this.intersections, requestTimeMap.intersections);
  }

  @Override
  public int hashCode() {
    return Objects.hash(departureSearches, arrivalSearches, unions, intersections);
  }

  @Override
  public String toString() {
    StringBuilder sb = new StringBuilder();
    sb.append("class RequestTimeMap {\n");
    
    sb.append("    departureSearches: ").append(toIndentedString(departureSearches)).append("\n");
    sb.append("    arrivalSearches: ").append(toIndentedString(arrivalSearches)).append("\n");
    sb.append("    unions: ").append(toIndentedString(unions)).append("\n");
    sb.append("    intersections: ").append(toIndentedString(intersections)).append("\n");
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

