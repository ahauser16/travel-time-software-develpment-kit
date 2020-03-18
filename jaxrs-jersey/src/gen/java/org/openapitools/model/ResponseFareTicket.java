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
import com.fasterxml.jackson.annotation.JsonValue;
import io.swagger.annotations.ApiModel;
import io.swagger.annotations.ApiModelProperty;
import com.fasterxml.jackson.annotation.JsonPropertyOrder;
import javax.validation.constraints.*;
import javax.validation.Valid;

/**
 * ResponseFareTicket
 */
@JsonPropertyOrder({
  ResponseFareTicket.JSON_PROPERTY_TYPE,
  ResponseFareTicket.JSON_PROPERTY_PRICE,
  ResponseFareTicket.JSON_PROPERTY_CURRENCY
})
@javax.annotation.Generated(value = "org.openapitools.codegen.languages.JavaJerseyServerCodegen", date = "2020-03-18T07:54:16.563Z[Etc/UTC]")
public class ResponseFareTicket   {
  /**
   * Gets or Sets type
   */
  public enum TypeEnum {
    SINGLE("single"),
    
    WEEK("week"),
    
    MONTH("month"),
    
    YEAR("year");

    private String value;

    TypeEnum(String value) {
      this.value = value;
    }

    @Override
    @JsonValue
    public String toString() {
      return String.valueOf(value);
    }

    @JsonCreator
    public static TypeEnum fromValue(String value) {
      for (TypeEnum b : TypeEnum.values()) {
        if (b.value.equals(value)) {
          return b;
        }
      }
      throw new IllegalArgumentException("Unexpected value '" + value + "'");
    }
  }

  public static final String JSON_PROPERTY_TYPE = "type";
  @JsonProperty(JSON_PROPERTY_TYPE)
  private TypeEnum type;

  public static final String JSON_PROPERTY_PRICE = "price";
  @JsonProperty(JSON_PROPERTY_PRICE)
  private Double price;

  public static final String JSON_PROPERTY_CURRENCY = "currency";
  @JsonProperty(JSON_PROPERTY_CURRENCY)
  private String currency;

  public ResponseFareTicket type(TypeEnum type) {
    this.type = type;
    return this;
  }

  /**
   * Get type
   * @return type
   **/
  @JsonProperty("type")
  @ApiModelProperty(required = true, value = "")
  @NotNull 
  public TypeEnum getType() {
    return type;
  }

  public void setType(TypeEnum type) {
    this.type = type;
  }

  public ResponseFareTicket price(Double price) {
    this.price = price;
    return this;
  }

  /**
   * Get price
   * @return price
   **/
  @JsonProperty("price")
  @ApiModelProperty(required = true, value = "")
  @NotNull 
  public Double getPrice() {
    return price;
  }

  public void setPrice(Double price) {
    this.price = price;
  }

  public ResponseFareTicket currency(String currency) {
    this.currency = currency;
    return this;
  }

  /**
   * Get currency
   * @return currency
   **/
  @JsonProperty("currency")
  @ApiModelProperty(required = true, value = "")
  @NotNull 
  public String getCurrency() {
    return currency;
  }

  public void setCurrency(String currency) {
    this.currency = currency;
  }


  @Override
  public boolean equals(java.lang.Object o) {
    if (this == o) {
      return true;
    }
    if (o == null || getClass() != o.getClass()) {
      return false;
    }
    ResponseFareTicket responseFareTicket = (ResponseFareTicket) o;
    return Objects.equals(this.type, responseFareTicket.type) &&
        Objects.equals(this.price, responseFareTicket.price) &&
        Objects.equals(this.currency, responseFareTicket.currency);
  }

  @Override
  public int hashCode() {
    return Objects.hash(type, price, currency);
  }


  @Override
  public String toString() {
    StringBuilder sb = new StringBuilder();
    sb.append("class ResponseFareTicket {\n");
    
    sb.append("    type: ").append(toIndentedString(type)).append("\n");
    sb.append("    price: ").append(toIndentedString(price)).append("\n");
    sb.append("    currency: ").append(toIndentedString(currency)).append("\n");
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

