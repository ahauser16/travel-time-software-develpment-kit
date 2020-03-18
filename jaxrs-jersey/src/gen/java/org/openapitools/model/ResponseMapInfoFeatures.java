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
import org.openapitools.model.ResponseMapInfoFeaturesPublicTransport;
import com.fasterxml.jackson.annotation.JsonPropertyOrder;
import javax.validation.constraints.*;
import javax.validation.Valid;

/**
 * ResponseMapInfoFeatures
 */
@JsonPropertyOrder({
  ResponseMapInfoFeatures.JSON_PROPERTY_PUBLIC_TRANSPORT,
  ResponseMapInfoFeatures.JSON_PROPERTY_FARES,
  ResponseMapInfoFeatures.JSON_PROPERTY_POSTCODES
})
@javax.annotation.Generated(value = "org.openapitools.codegen.languages.JavaJerseyServerCodegen", date = "2020-03-18T07:54:16.563Z[Etc/UTC]")
public class ResponseMapInfoFeatures   {
  public static final String JSON_PROPERTY_PUBLIC_TRANSPORT = "public_transport";
  @JsonProperty(JSON_PROPERTY_PUBLIC_TRANSPORT)
  private ResponseMapInfoFeaturesPublicTransport publicTransport;

  public static final String JSON_PROPERTY_FARES = "fares";
  @JsonProperty(JSON_PROPERTY_FARES)
  private Boolean fares;

  public static final String JSON_PROPERTY_POSTCODES = "postcodes";
  @JsonProperty(JSON_PROPERTY_POSTCODES)
  private Boolean postcodes;

  public ResponseMapInfoFeatures publicTransport(ResponseMapInfoFeaturesPublicTransport publicTransport) {
    this.publicTransport = publicTransport;
    return this;
  }

  /**
   * Get publicTransport
   * @return publicTransport
   **/
  @JsonProperty("public_transport")
  @ApiModelProperty(value = "")
  @Valid 
  public ResponseMapInfoFeaturesPublicTransport getPublicTransport() {
    return publicTransport;
  }

  public void setPublicTransport(ResponseMapInfoFeaturesPublicTransport publicTransport) {
    this.publicTransport = publicTransport;
  }

  public ResponseMapInfoFeatures fares(Boolean fares) {
    this.fares = fares;
    return this;
  }

  /**
   * Get fares
   * @return fares
   **/
  @JsonProperty("fares")
  @ApiModelProperty(required = true, value = "")
  @NotNull 
  public Boolean getFares() {
    return fares;
  }

  public void setFares(Boolean fares) {
    this.fares = fares;
  }

  public ResponseMapInfoFeatures postcodes(Boolean postcodes) {
    this.postcodes = postcodes;
    return this;
  }

  /**
   * Get postcodes
   * @return postcodes
   **/
  @JsonProperty("postcodes")
  @ApiModelProperty(required = true, value = "")
  @NotNull 
  public Boolean getPostcodes() {
    return postcodes;
  }

  public void setPostcodes(Boolean postcodes) {
    this.postcodes = postcodes;
  }


  @Override
  public boolean equals(java.lang.Object o) {
    if (this == o) {
      return true;
    }
    if (o == null || getClass() != o.getClass()) {
      return false;
    }
    ResponseMapInfoFeatures responseMapInfoFeatures = (ResponseMapInfoFeatures) o;
    return Objects.equals(this.publicTransport, responseMapInfoFeatures.publicTransport) &&
        Objects.equals(this.fares, responseMapInfoFeatures.fares) &&
        Objects.equals(this.postcodes, responseMapInfoFeatures.postcodes);
  }

  @Override
  public int hashCode() {
    return Objects.hash(publicTransport, fares, postcodes);
  }


  @Override
  public String toString() {
    StringBuilder sb = new StringBuilder();
    sb.append("class ResponseMapInfoFeatures {\n");
    
    sb.append("    publicTransport: ").append(toIndentedString(publicTransport)).append("\n");
    sb.append("    fares: ").append(toIndentedString(fares)).append("\n");
    sb.append("    postcodes: ").append(toIndentedString(postcodes)).append("\n");
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

