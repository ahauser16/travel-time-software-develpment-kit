package org.openapitools.model;

import org.openapitools.model.ResponseMapInfoFeatures;
import javax.validation.constraints.*;
import javax.validation.Valid;

import io.swagger.annotations.ApiModelProperty;
import javax.xml.bind.annotation.XmlElement;
import javax.xml.bind.annotation.XmlRootElement;
import javax.xml.bind.annotation.XmlAccessType;
import javax.xml.bind.annotation.XmlAccessorType;
import javax.xml.bind.annotation.XmlType;
import javax.xml.bind.annotation.XmlEnum;
import javax.xml.bind.annotation.XmlEnumValue;
import com.fasterxml.jackson.annotation.JsonFormat;
import com.fasterxml.jackson.annotation.JsonProperty;


public class ResponseGeocodingProperties  {
  
  @ApiModelProperty(required = true, value = "")
  private String name;

  @ApiModelProperty(required = true, value = "")
  private String label;

  @ApiModelProperty(value = "")
  private Double score;

  @ApiModelProperty(value = "")
  private String houseNumber;

  @ApiModelProperty(value = "")
  private String street;

  @ApiModelProperty(value = "")
  private String region;

  @ApiModelProperty(value = "")
  private String regionCode;

  @ApiModelProperty(value = "")
  private String neighbourhood;

  @ApiModelProperty(value = "")
  private String county;

  @ApiModelProperty(value = "")
  private String macroregion;

  @ApiModelProperty(value = "")
  private String city;

  @ApiModelProperty(value = "")
  private String country;

  @ApiModelProperty(value = "")
  private String countryCode;

  @ApiModelProperty(value = "")
  private String continent;

  @ApiModelProperty(value = "")
  private String postcode;

  @ApiModelProperty(value = "")
  @Valid
  private ResponseMapInfoFeatures features;
 /**
  * Get name
  * @return name
  */
  @JsonProperty("name")
  @NotNull
  public String getName() {
    return name;
  }

  /**
   * Sets the <code>name</code> property.
   */
  public void setName(String name) {
    this.name = name;
  }

  /**
   * Sets the <code>name</code> property.
   */
  public ResponseGeocodingProperties name(String name) {
    this.name = name;
    return this;
  }

 /**
  * Get label
  * @return label
  */
  @JsonProperty("label")
  @NotNull
  public String getLabel() {
    return label;
  }

  /**
   * Sets the <code>label</code> property.
   */
  public void setLabel(String label) {
    this.label = label;
  }

  /**
   * Sets the <code>label</code> property.
   */
  public ResponseGeocodingProperties label(String label) {
    this.label = label;
    return this;
  }

 /**
  * Get score
  * @return score
  */
  @JsonProperty("score")
  public Double getScore() {
    return score;
  }

  /**
   * Sets the <code>score</code> property.
   */
  public void setScore(Double score) {
    this.score = score;
  }

  /**
   * Sets the <code>score</code> property.
   */
  public ResponseGeocodingProperties score(Double score) {
    this.score = score;
    return this;
  }

 /**
  * Get houseNumber
  * @return houseNumber
  */
  @JsonProperty("house_number")
  public String getHouseNumber() {
    return houseNumber;
  }

  /**
   * Sets the <code>houseNumber</code> property.
   */
  public void setHouseNumber(String houseNumber) {
    this.houseNumber = houseNumber;
  }

  /**
   * Sets the <code>houseNumber</code> property.
   */
  public ResponseGeocodingProperties houseNumber(String houseNumber) {
    this.houseNumber = houseNumber;
    return this;
  }

 /**
  * Get street
  * @return street
  */
  @JsonProperty("street")
  public String getStreet() {
    return street;
  }

  /**
   * Sets the <code>street</code> property.
   */
  public void setStreet(String street) {
    this.street = street;
  }

  /**
   * Sets the <code>street</code> property.
   */
  public ResponseGeocodingProperties street(String street) {
    this.street = street;
    return this;
  }

 /**
  * Get region
  * @return region
  */
  @JsonProperty("region")
  public String getRegion() {
    return region;
  }

  /**
   * Sets the <code>region</code> property.
   */
  public void setRegion(String region) {
    this.region = region;
  }

  /**
   * Sets the <code>region</code> property.
   */
  public ResponseGeocodingProperties region(String region) {
    this.region = region;
    return this;
  }

 /**
  * Get regionCode
  * @return regionCode
  */
  @JsonProperty("region_code")
  public String getRegionCode() {
    return regionCode;
  }

  /**
   * Sets the <code>regionCode</code> property.
   */
  public void setRegionCode(String regionCode) {
    this.regionCode = regionCode;
  }

  /**
   * Sets the <code>regionCode</code> property.
   */
  public ResponseGeocodingProperties regionCode(String regionCode) {
    this.regionCode = regionCode;
    return this;
  }

 /**
  * Get neighbourhood
  * @return neighbourhood
  */
  @JsonProperty("neighbourhood")
  public String getNeighbourhood() {
    return neighbourhood;
  }

  /**
   * Sets the <code>neighbourhood</code> property.
   */
  public void setNeighbourhood(String neighbourhood) {
    this.neighbourhood = neighbourhood;
  }

  /**
   * Sets the <code>neighbourhood</code> property.
   */
  public ResponseGeocodingProperties neighbourhood(String neighbourhood) {
    this.neighbourhood = neighbourhood;
    return this;
  }

 /**
  * Get county
  * @return county
  */
  @JsonProperty("county")
  public String getCounty() {
    return county;
  }

  /**
   * Sets the <code>county</code> property.
   */
  public void setCounty(String county) {
    this.county = county;
  }

  /**
   * Sets the <code>county</code> property.
   */
  public ResponseGeocodingProperties county(String county) {
    this.county = county;
    return this;
  }

 /**
  * Get macroregion
  * @return macroregion
  */
  @JsonProperty("macroregion")
  public String getMacroregion() {
    return macroregion;
  }

  /**
   * Sets the <code>macroregion</code> property.
   */
  public void setMacroregion(String macroregion) {
    this.macroregion = macroregion;
  }

  /**
   * Sets the <code>macroregion</code> property.
   */
  public ResponseGeocodingProperties macroregion(String macroregion) {
    this.macroregion = macroregion;
    return this;
  }

 /**
  * Get city
  * @return city
  */
  @JsonProperty("city")
  public String getCity() {
    return city;
  }

  /**
   * Sets the <code>city</code> property.
   */
  public void setCity(String city) {
    this.city = city;
  }

  /**
   * Sets the <code>city</code> property.
   */
  public ResponseGeocodingProperties city(String city) {
    this.city = city;
    return this;
  }

 /**
  * Get country
  * @return country
  */
  @JsonProperty("country")
  public String getCountry() {
    return country;
  }

  /**
   * Sets the <code>country</code> property.
   */
  public void setCountry(String country) {
    this.country = country;
  }

  /**
   * Sets the <code>country</code> property.
   */
  public ResponseGeocodingProperties country(String country) {
    this.country = country;
    return this;
  }

 /**
  * Get countryCode
  * @return countryCode
  */
  @JsonProperty("country_code")
  public String getCountryCode() {
    return countryCode;
  }

  /**
   * Sets the <code>countryCode</code> property.
   */
  public void setCountryCode(String countryCode) {
    this.countryCode = countryCode;
  }

  /**
   * Sets the <code>countryCode</code> property.
   */
  public ResponseGeocodingProperties countryCode(String countryCode) {
    this.countryCode = countryCode;
    return this;
  }

 /**
  * Get continent
  * @return continent
  */
  @JsonProperty("continent")
  public String getContinent() {
    return continent;
  }

  /**
   * Sets the <code>continent</code> property.
   */
  public void setContinent(String continent) {
    this.continent = continent;
  }

  /**
   * Sets the <code>continent</code> property.
   */
  public ResponseGeocodingProperties continent(String continent) {
    this.continent = continent;
    return this;
  }

 /**
  * Get postcode
  * @return postcode
  */
  @JsonProperty("postcode")
  public String getPostcode() {
    return postcode;
  }

  /**
   * Sets the <code>postcode</code> property.
   */
  public void setPostcode(String postcode) {
    this.postcode = postcode;
  }

  /**
   * Sets the <code>postcode</code> property.
   */
  public ResponseGeocodingProperties postcode(String postcode) {
    this.postcode = postcode;
    return this;
  }

 /**
  * Get features
  * @return features
  */
  @JsonProperty("features")
  public ResponseMapInfoFeatures getFeatures() {
    return features;
  }

  /**
   * Sets the <code>features</code> property.
   */
  public void setFeatures(ResponseMapInfoFeatures features) {
    this.features = features;
  }

  /**
   * Sets the <code>features</code> property.
   */
  public ResponseGeocodingProperties features(ResponseMapInfoFeatures features) {
    this.features = features;
    return this;
  }


  @Override
  public String toString() {
    StringBuilder sb = new StringBuilder();
    sb.append("class ResponseGeocodingProperties {\n");
    
    sb.append("    name: ").append(toIndentedString(name)).append("\n");
    sb.append("    label: ").append(toIndentedString(label)).append("\n");
    sb.append("    score: ").append(toIndentedString(score)).append("\n");
    sb.append("    houseNumber: ").append(toIndentedString(houseNumber)).append("\n");
    sb.append("    street: ").append(toIndentedString(street)).append("\n");
    sb.append("    region: ").append(toIndentedString(region)).append("\n");
    sb.append("    regionCode: ").append(toIndentedString(regionCode)).append("\n");
    sb.append("    neighbourhood: ").append(toIndentedString(neighbourhood)).append("\n");
    sb.append("    county: ").append(toIndentedString(county)).append("\n");
    sb.append("    macroregion: ").append(toIndentedString(macroregion)).append("\n");
    sb.append("    city: ").append(toIndentedString(city)).append("\n");
    sb.append("    country: ").append(toIndentedString(country)).append("\n");
    sb.append("    countryCode: ").append(toIndentedString(countryCode)).append("\n");
    sb.append("    continent: ").append(toIndentedString(continent)).append("\n");
    sb.append("    postcode: ").append(toIndentedString(postcode)).append("\n");
    sb.append("    features: ").append(toIndentedString(features)).append("\n");
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

