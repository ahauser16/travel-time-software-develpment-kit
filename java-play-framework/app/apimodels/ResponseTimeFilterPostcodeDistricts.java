package apimodels;

import apimodels.ResponseTimeFilterPostcodeDistrictsResult;
import java.util.ArrayList;
import java.util.List;
import com.fasterxml.jackson.annotation.*;
import java.util.Set;
import javax.validation.*;
import java.util.Objects;
import javax.validation.constraints.*;
/**
 * ResponseTimeFilterPostcodeDistricts
 */
@javax.annotation.Generated(value = "org.openapitools.codegen.languages.JavaPlayFrameworkCodegen", date = "2020-03-18T08:50:52.411Z[Etc/UTC]")

@SuppressWarnings({"UnusedReturnValue", "WeakerAccess"})
public class ResponseTimeFilterPostcodeDistricts   {
  @JsonProperty("results")
  private List<ResponseTimeFilterPostcodeDistrictsResult> results = new ArrayList<>();

  public ResponseTimeFilterPostcodeDistricts results(List<ResponseTimeFilterPostcodeDistrictsResult> results) {
    this.results = results;
    return this;
  }

  public ResponseTimeFilterPostcodeDistricts addResultsItem(ResponseTimeFilterPostcodeDistrictsResult resultsItem) {
    results.add(resultsItem);
    return this;
  }

   /**
   * Get results
   * @return results
  **/
  @NotNull
@Valid
  public List<ResponseTimeFilterPostcodeDistrictsResult> getResults() {
    return results;
  }

  public void setResults(List<ResponseTimeFilterPostcodeDistrictsResult> results) {
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
    ResponseTimeFilterPostcodeDistricts responseTimeFilterPostcodeDistricts = (ResponseTimeFilterPostcodeDistricts) o;
    return Objects.equals(results, responseTimeFilterPostcodeDistricts.results);
  }

  @Override
  public int hashCode() {
    return Objects.hash(results);
  }

  @SuppressWarnings("StringBufferReplaceableByString")
  @Override
  public String toString() {
    StringBuilder sb = new StringBuilder();
    sb.append("class ResponseTimeFilterPostcodeDistricts {\n");
    
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

