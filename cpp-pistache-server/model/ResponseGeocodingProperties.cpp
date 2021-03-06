/**
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


#include "ResponseGeocodingProperties.h"

namespace org {
namespace openapitools {
namespace server {
namespace model {

ResponseGeocodingProperties::ResponseGeocodingProperties()
{
    m_Name = "";
    m_Label = "";
    m_Score = 0.0;
    m_ScoreIsSet = false;
    m_House_number = "";
    m_House_numberIsSet = false;
    m_Street = "";
    m_StreetIsSet = false;
    m_Region = "";
    m_RegionIsSet = false;
    m_Region_code = "";
    m_Region_codeIsSet = false;
    m_Neighbourhood = "";
    m_NeighbourhoodIsSet = false;
    m_County = "";
    m_CountyIsSet = false;
    m_Macroregion = "";
    m_MacroregionIsSet = false;
    m_City = "";
    m_CityIsSet = false;
    m_Country = "";
    m_CountryIsSet = false;
    m_Country_code = "";
    m_Country_codeIsSet = false;
    m_Continent = "";
    m_ContinentIsSet = false;
    m_Postcode = "";
    m_PostcodeIsSet = false;
    m_FeaturesIsSet = false;
    
}

ResponseGeocodingProperties::~ResponseGeocodingProperties()
{
}

void ResponseGeocodingProperties::validate()
{
    // TODO: implement validation
}

void to_json(nlohmann::json& j, const ResponseGeocodingProperties& o)
{
    j = nlohmann::json();
    j["name"] = o.m_Name;
    j["label"] = o.m_Label;
    if(o.scoreIsSet())
        j["score"] = o.m_Score;
    if(o.houseNumberIsSet())
        j["house_number"] = o.m_House_number;
    if(o.streetIsSet())
        j["street"] = o.m_Street;
    if(o.regionIsSet())
        j["region"] = o.m_Region;
    if(o.regionCodeIsSet())
        j["region_code"] = o.m_Region_code;
    if(o.neighbourhoodIsSet())
        j["neighbourhood"] = o.m_Neighbourhood;
    if(o.countyIsSet())
        j["county"] = o.m_County;
    if(o.macroregionIsSet())
        j["macroregion"] = o.m_Macroregion;
    if(o.cityIsSet())
        j["city"] = o.m_City;
    if(o.countryIsSet())
        j["country"] = o.m_Country;
    if(o.countryCodeIsSet())
        j["country_code"] = o.m_Country_code;
    if(o.continentIsSet())
        j["continent"] = o.m_Continent;
    if(o.postcodeIsSet())
        j["postcode"] = o.m_Postcode;
    if(o.featuresIsSet())
        j["features"] = o.m_Features;
}

void from_json(const nlohmann::json& j, ResponseGeocodingProperties& o)
{
    j.at("name").get_to(o.m_Name);
    j.at("label").get_to(o.m_Label);
    if(j.find("score") != j.end())
    {
        j.at("score").get_to(o.m_Score);
        o.m_ScoreIsSet = true;
    } 
    if(j.find("house_number") != j.end())
    {
        j.at("house_number").get_to(o.m_House_number);
        o.m_House_numberIsSet = true;
    } 
    if(j.find("street") != j.end())
    {
        j.at("street").get_to(o.m_Street);
        o.m_StreetIsSet = true;
    } 
    if(j.find("region") != j.end())
    {
        j.at("region").get_to(o.m_Region);
        o.m_RegionIsSet = true;
    } 
    if(j.find("region_code") != j.end())
    {
        j.at("region_code").get_to(o.m_Region_code);
        o.m_Region_codeIsSet = true;
    } 
    if(j.find("neighbourhood") != j.end())
    {
        j.at("neighbourhood").get_to(o.m_Neighbourhood);
        o.m_NeighbourhoodIsSet = true;
    } 
    if(j.find("county") != j.end())
    {
        j.at("county").get_to(o.m_County);
        o.m_CountyIsSet = true;
    } 
    if(j.find("macroregion") != j.end())
    {
        j.at("macroregion").get_to(o.m_Macroregion);
        o.m_MacroregionIsSet = true;
    } 
    if(j.find("city") != j.end())
    {
        j.at("city").get_to(o.m_City);
        o.m_CityIsSet = true;
    } 
    if(j.find("country") != j.end())
    {
        j.at("country").get_to(o.m_Country);
        o.m_CountryIsSet = true;
    } 
    if(j.find("country_code") != j.end())
    {
        j.at("country_code").get_to(o.m_Country_code);
        o.m_Country_codeIsSet = true;
    } 
    if(j.find("continent") != j.end())
    {
        j.at("continent").get_to(o.m_Continent);
        o.m_ContinentIsSet = true;
    } 
    if(j.find("postcode") != j.end())
    {
        j.at("postcode").get_to(o.m_Postcode);
        o.m_PostcodeIsSet = true;
    } 
    if(j.find("features") != j.end())
    {
        j.at("features").get_to(o.m_Features);
        o.m_FeaturesIsSet = true;
    } 
}

std::string ResponseGeocodingProperties::getName() const
{
    return m_Name;
}
void ResponseGeocodingProperties::setName(std::string const& value)
{
    m_Name = value;
}
std::string ResponseGeocodingProperties::getLabel() const
{
    return m_Label;
}
void ResponseGeocodingProperties::setLabel(std::string const& value)
{
    m_Label = value;
}
double ResponseGeocodingProperties::getScore() const
{
    return m_Score;
}
void ResponseGeocodingProperties::setScore(double const value)
{
    m_Score = value;
    m_ScoreIsSet = true;
}
bool ResponseGeocodingProperties::scoreIsSet() const
{
    return m_ScoreIsSet;
}
void ResponseGeocodingProperties::unsetScore()
{
    m_ScoreIsSet = false;
}
std::string ResponseGeocodingProperties::getHouseNumber() const
{
    return m_House_number;
}
void ResponseGeocodingProperties::setHouseNumber(std::string const& value)
{
    m_House_number = value;
    m_House_numberIsSet = true;
}
bool ResponseGeocodingProperties::houseNumberIsSet() const
{
    return m_House_numberIsSet;
}
void ResponseGeocodingProperties::unsetHouse_number()
{
    m_House_numberIsSet = false;
}
std::string ResponseGeocodingProperties::getStreet() const
{
    return m_Street;
}
void ResponseGeocodingProperties::setStreet(std::string const& value)
{
    m_Street = value;
    m_StreetIsSet = true;
}
bool ResponseGeocodingProperties::streetIsSet() const
{
    return m_StreetIsSet;
}
void ResponseGeocodingProperties::unsetStreet()
{
    m_StreetIsSet = false;
}
std::string ResponseGeocodingProperties::getRegion() const
{
    return m_Region;
}
void ResponseGeocodingProperties::setRegion(std::string const& value)
{
    m_Region = value;
    m_RegionIsSet = true;
}
bool ResponseGeocodingProperties::regionIsSet() const
{
    return m_RegionIsSet;
}
void ResponseGeocodingProperties::unsetRegion()
{
    m_RegionIsSet = false;
}
std::string ResponseGeocodingProperties::getRegionCode() const
{
    return m_Region_code;
}
void ResponseGeocodingProperties::setRegionCode(std::string const& value)
{
    m_Region_code = value;
    m_Region_codeIsSet = true;
}
bool ResponseGeocodingProperties::regionCodeIsSet() const
{
    return m_Region_codeIsSet;
}
void ResponseGeocodingProperties::unsetRegion_code()
{
    m_Region_codeIsSet = false;
}
std::string ResponseGeocodingProperties::getNeighbourhood() const
{
    return m_Neighbourhood;
}
void ResponseGeocodingProperties::setNeighbourhood(std::string const& value)
{
    m_Neighbourhood = value;
    m_NeighbourhoodIsSet = true;
}
bool ResponseGeocodingProperties::neighbourhoodIsSet() const
{
    return m_NeighbourhoodIsSet;
}
void ResponseGeocodingProperties::unsetNeighbourhood()
{
    m_NeighbourhoodIsSet = false;
}
std::string ResponseGeocodingProperties::getCounty() const
{
    return m_County;
}
void ResponseGeocodingProperties::setCounty(std::string const& value)
{
    m_County = value;
    m_CountyIsSet = true;
}
bool ResponseGeocodingProperties::countyIsSet() const
{
    return m_CountyIsSet;
}
void ResponseGeocodingProperties::unsetCounty()
{
    m_CountyIsSet = false;
}
std::string ResponseGeocodingProperties::getMacroregion() const
{
    return m_Macroregion;
}
void ResponseGeocodingProperties::setMacroregion(std::string const& value)
{
    m_Macroregion = value;
    m_MacroregionIsSet = true;
}
bool ResponseGeocodingProperties::macroregionIsSet() const
{
    return m_MacroregionIsSet;
}
void ResponseGeocodingProperties::unsetMacroregion()
{
    m_MacroregionIsSet = false;
}
std::string ResponseGeocodingProperties::getCity() const
{
    return m_City;
}
void ResponseGeocodingProperties::setCity(std::string const& value)
{
    m_City = value;
    m_CityIsSet = true;
}
bool ResponseGeocodingProperties::cityIsSet() const
{
    return m_CityIsSet;
}
void ResponseGeocodingProperties::unsetCity()
{
    m_CityIsSet = false;
}
std::string ResponseGeocodingProperties::getCountry() const
{
    return m_Country;
}
void ResponseGeocodingProperties::setCountry(std::string const& value)
{
    m_Country = value;
    m_CountryIsSet = true;
}
bool ResponseGeocodingProperties::countryIsSet() const
{
    return m_CountryIsSet;
}
void ResponseGeocodingProperties::unsetCountry()
{
    m_CountryIsSet = false;
}
std::string ResponseGeocodingProperties::getCountryCode() const
{
    return m_Country_code;
}
void ResponseGeocodingProperties::setCountryCode(std::string const& value)
{
    m_Country_code = value;
    m_Country_codeIsSet = true;
}
bool ResponseGeocodingProperties::countryCodeIsSet() const
{
    return m_Country_codeIsSet;
}
void ResponseGeocodingProperties::unsetCountry_code()
{
    m_Country_codeIsSet = false;
}
std::string ResponseGeocodingProperties::getContinent() const
{
    return m_Continent;
}
void ResponseGeocodingProperties::setContinent(std::string const& value)
{
    m_Continent = value;
    m_ContinentIsSet = true;
}
bool ResponseGeocodingProperties::continentIsSet() const
{
    return m_ContinentIsSet;
}
void ResponseGeocodingProperties::unsetContinent()
{
    m_ContinentIsSet = false;
}
std::string ResponseGeocodingProperties::getPostcode() const
{
    return m_Postcode;
}
void ResponseGeocodingProperties::setPostcode(std::string const& value)
{
    m_Postcode = value;
    m_PostcodeIsSet = true;
}
bool ResponseGeocodingProperties::postcodeIsSet() const
{
    return m_PostcodeIsSet;
}
void ResponseGeocodingProperties::unsetPostcode()
{
    m_PostcodeIsSet = false;
}
ResponseMapInfoFeatures ResponseGeocodingProperties::getFeatures() const
{
    return m_Features;
}
void ResponseGeocodingProperties::setFeatures(ResponseMapInfoFeatures const& value)
{
    m_Features = value;
    m_FeaturesIsSet = true;
}
bool ResponseGeocodingProperties::featuresIsSet() const
{
    return m_FeaturesIsSet;
}
void ResponseGeocodingProperties::unsetFeatures()
{
    m_FeaturesIsSet = false;
}

}
}
}
}

