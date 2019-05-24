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


#include "RequestTimeMapDepartureSearch.h"

namespace org {
namespace openapitools {
namespace server {
namespace model {

RequestTimeMapDepartureSearch::RequestTimeMapDepartureSearch()
{
    m_Id = "";
    m_Travel_time = 0;
    m_Departure_time = "";
    m_PropertiesIsSet = false;
    m_RangeIsSet = false;
    
}

RequestTimeMapDepartureSearch::~RequestTimeMapDepartureSearch()
{
}

void RequestTimeMapDepartureSearch::validate()
{
    // TODO: implement validation
}

void to_json(nlohmann::json& j, const RequestTimeMapDepartureSearch& o)
{
    j = nlohmann::json();
    j["id"] = o.m_Id;
    j["coords"] = o.m_Coords;
    j["transportation"] = o.m_Transportation;
    j["travel_time"] = o.m_Travel_time;
    j["departure_time"] = o.m_Departure_time;
    if(o.propertiesIsSet())
        j["properties"] = o.m_Properties;
    if(o.rangeIsSet())
        j["range"] = o.m_Range;
}

void from_json(const nlohmann::json& j, RequestTimeMapDepartureSearch& o)
{
    j.at("id").get_to(o.m_Id);
    j.at("coords").get_to(o.m_Coords);
    j.at("transportation").get_to(o.m_Transportation);
    j.at("travel_time").get_to(o.m_Travel_time);
    j.at("departure_time").get_to(o.m_Departure_time);
    if(j.contains("properties"))
    {
        j.at("properties").get_to(o.m_Properties);
        o.m_PropertiesIsSet = true;
    } 
    if(j.contains("range"))
    {
        j.at("range").get_to(o.m_Range);
        o.m_RangeIsSet = true;
    } 
}

std::string RequestTimeMapDepartureSearch::getId() const
{
    return m_Id;
}
void RequestTimeMapDepartureSearch::setId(std::string const& value)
{
    m_Id = value;
    
}
Coords RequestTimeMapDepartureSearch::getCoords() const
{
    return m_Coords;
}
void RequestTimeMapDepartureSearch::setCoords(Coords const& value)
{
    m_Coords = value;
    
}
RequestTransportation RequestTimeMapDepartureSearch::getTransportation() const
{
    return m_Transportation;
}
void RequestTimeMapDepartureSearch::setTransportation(RequestTransportation const& value)
{
    m_Transportation = value;
    
}
int32_t RequestTimeMapDepartureSearch::getTravelTime() const
{
    return m_Travel_time;
}
void RequestTimeMapDepartureSearch::setTravelTime(int32_t const value)
{
    m_Travel_time = value;
    
}
std::string RequestTimeMapDepartureSearch::getDepartureTime() const
{
    return m_Departure_time;
}
void RequestTimeMapDepartureSearch::setDepartureTime(std::string const& value)
{
    m_Departure_time = value;
    
}
std::vector<RequestTimeMapProperty>& RequestTimeMapDepartureSearch::getProperties()
{
    return m_Properties;
}
bool RequestTimeMapDepartureSearch::propertiesIsSet() const
{
    return m_PropertiesIsSet;
}
void RequestTimeMapDepartureSearch::unsetProperties()
{
    m_PropertiesIsSet = false;
}
RequestRangeNoMaxResults RequestTimeMapDepartureSearch::getRange() const
{
    return m_Range;
}
void RequestTimeMapDepartureSearch::setRange(RequestRangeNoMaxResults const& value)
{
    m_Range = value;
    m_RangeIsSet = true;
}
bool RequestTimeMapDepartureSearch::rangeIsSet() const
{
    return m_RangeIsSet;
}
void RequestTimeMapDepartureSearch::unsetRange()
{
    m_RangeIsSet = false;
}

}
}
}
}

