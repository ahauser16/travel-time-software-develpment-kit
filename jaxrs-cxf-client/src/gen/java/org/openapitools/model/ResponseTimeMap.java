package org.openapitools.model;

import java.util.ArrayList;
import java.util.List;
import org.openapitools.model.ResponseTimeMapResult;

import io.swagger.annotations.ApiModelProperty;
import javax.xml.bind.annotation.XmlElement;
import javax.xml.bind.annotation.XmlRootElement;
import javax.xml.bind.annotation.XmlAccessType;
import javax.xml.bind.annotation.XmlAccessorType;
import javax.xml.bind.annotation.XmlType;
import javax.xml.bind.annotation.XmlEnum;
import javax.xml.bind.annotation.XmlEnumValue;
import com.fasterxml.jackson.annotation.JsonProperty;

public class ResponseTimeMap  {
  
  @ApiModelProperty(required = true, value = "")
  private List<ResponseTimeMapResult> results = new ArrayList<ResponseTimeMapResult>();
 /**
   * Get results
   * @return results
  **/
  @JsonProperty("results")
  public List<ResponseTimeMapResult> getResults() {
    return results;
  }

  public void setResults(List<ResponseTimeMapResult> results) {
    this.results = results;
  }

  public ResponseTimeMap results(List<ResponseTimeMapResult> results) {
    this.results = results;
    return this;
  }

  public ResponseTimeMap addResultsItem(ResponseTimeMapResult resultsItem) {
    this.results.add(resultsItem);
    return this;
  }


  @Override
  public String toString() {
    StringBuilder sb = new StringBuilder();
    sb.append("class ResponseTimeMap {\n");
    
    sb.append("    results: ").append(toIndentedString(results)).append("\n");
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

