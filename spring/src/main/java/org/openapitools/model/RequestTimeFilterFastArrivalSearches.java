package org.openapitools.model;

import java.util.Objects;
import com.fasterxml.jackson.annotation.JsonProperty;
import com.fasterxml.jackson.annotation.JsonCreator;
import io.swagger.annotations.ApiModel;
import io.swagger.annotations.ApiModelProperty;
import java.util.ArrayList;
import java.util.List;
import org.openapitools.model.RequestTimeFilterFastArrivalManyToOneSearch;
import org.openapitools.model.RequestTimeFilterFastArrivalOneToManySearch;
import org.openapitools.jackson.nullable.JsonNullable;
import javax.validation.Valid;
import javax.validation.constraints.*;

/**
 * RequestTimeFilterFastArrivalSearches
 */
@javax.annotation.Generated(value = "org.openapitools.codegen.languages.SpringCodegen", date = "2020-03-18T08:51:54.244Z[Etc/UTC]")

public class RequestTimeFilterFastArrivalSearches   {
  @JsonProperty("many_to_one")
  @Valid
  private List<RequestTimeFilterFastArrivalManyToOneSearch> manyToOne = null;

  @JsonProperty("one_to_many")
  @Valid
  private List<RequestTimeFilterFastArrivalOneToManySearch> oneToMany = null;

  public RequestTimeFilterFastArrivalSearches manyToOne(List<RequestTimeFilterFastArrivalManyToOneSearch> manyToOne) {
    this.manyToOne = manyToOne;
    return this;
  }

  public RequestTimeFilterFastArrivalSearches addManyToOneItem(RequestTimeFilterFastArrivalManyToOneSearch manyToOneItem) {
    if (this.manyToOne == null) {
      this.manyToOne = new ArrayList<>();
    }
    this.manyToOne.add(manyToOneItem);
    return this;
  }

  /**
   * Get manyToOne
   * @return manyToOne
  */
  @ApiModelProperty(value = "")

  @Valid
@Size(max=10) 
  public List<RequestTimeFilterFastArrivalManyToOneSearch> getManyToOne() {
    return manyToOne;
  }

  public void setManyToOne(List<RequestTimeFilterFastArrivalManyToOneSearch> manyToOne) {
    this.manyToOne = manyToOne;
  }

  public RequestTimeFilterFastArrivalSearches oneToMany(List<RequestTimeFilterFastArrivalOneToManySearch> oneToMany) {
    this.oneToMany = oneToMany;
    return this;
  }

  public RequestTimeFilterFastArrivalSearches addOneToManyItem(RequestTimeFilterFastArrivalOneToManySearch oneToManyItem) {
    if (this.oneToMany == null) {
      this.oneToMany = new ArrayList<>();
    }
    this.oneToMany.add(oneToManyItem);
    return this;
  }

  /**
   * Get oneToMany
   * @return oneToMany
  */
  @ApiModelProperty(value = "")

  @Valid
@Size(max=10) 
  public List<RequestTimeFilterFastArrivalOneToManySearch> getOneToMany() {
    return oneToMany;
  }

  public void setOneToMany(List<RequestTimeFilterFastArrivalOneToManySearch> oneToMany) {
    this.oneToMany = oneToMany;
  }


  @Override
  public boolean equals(java.lang.Object o) {
    if (this == o) {
      return true;
    }
    if (o == null || getClass() != o.getClass()) {
      return false;
    }
    RequestTimeFilterFastArrivalSearches requestTimeFilterFastArrivalSearches = (RequestTimeFilterFastArrivalSearches) o;
    return Objects.equals(this.manyToOne, requestTimeFilterFastArrivalSearches.manyToOne) &&
        Objects.equals(this.oneToMany, requestTimeFilterFastArrivalSearches.oneToMany);
  }

  @Override
  public int hashCode() {
    return Objects.hash(manyToOne, oneToMany);
  }

  @Override
  public String toString() {
    StringBuilder sb = new StringBuilder();
    sb.append("class RequestTimeFilterFastArrivalSearches {\n");
    
    sb.append("    manyToOne: ").append(toIndentedString(manyToOne)).append("\n");
    sb.append("    oneToMany: ").append(toIndentedString(oneToMany)).append("\n");
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

