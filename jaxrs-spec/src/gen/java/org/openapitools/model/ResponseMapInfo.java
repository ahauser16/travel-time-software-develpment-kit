package org.openapitools.model;

import io.swagger.annotations.ApiModel;
import io.swagger.annotations.ApiModelProperty;
import java.util.ArrayList;
import java.util.List;
import org.openapitools.model.ResponseMapInfoMap;
import javax.validation.constraints.*;
import javax.validation.Valid;

import io.swagger.annotations.*;
import java.util.Objects;
import com.fasterxml.jackson.annotation.JsonProperty;
import com.fasterxml.jackson.annotation.JsonCreator;
import com.fasterxml.jackson.annotation.JsonValue;



@javax.annotation.Generated(value = "org.openapitools.codegen.languages.JavaJAXRSSpecServerCodegen", date = "2020-03-18T08:51:11.573Z[Etc/UTC]")
public class ResponseMapInfo   {
  
  private @Valid List<ResponseMapInfoMap> maps = new ArrayList<ResponseMapInfoMap>();

  /**
   **/
  public ResponseMapInfo maps(List<ResponseMapInfoMap> maps) {
    this.maps = maps;
    return this;
  }

  
  @ApiModelProperty(required = true, value = "")
  @JsonProperty("maps")
  @NotNull
  public List<ResponseMapInfoMap> getMaps() {
    return maps;
  }
  public void setMaps(List<ResponseMapInfoMap> maps) {
    this.maps = maps;
  }


  @Override
  public boolean equals(java.lang.Object o) {
    if (this == o) {
      return true;
    }
    if (o == null || getClass() != o.getClass()) {
      return false;
    }
    ResponseMapInfo responseMapInfo = (ResponseMapInfo) o;
    return Objects.equals(this.maps, responseMapInfo.maps);
  }

  @Override
  public int hashCode() {
    return Objects.hash(maps);
  }

  @Override
  public String toString() {
    StringBuilder sb = new StringBuilder();
    sb.append("class ResponseMapInfo {\n");
    
    sb.append("    maps: ").append(toIndentedString(maps)).append("\n");
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

