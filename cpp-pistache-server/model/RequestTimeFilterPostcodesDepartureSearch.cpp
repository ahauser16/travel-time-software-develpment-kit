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


#include "RequestTimeFilterPostcodesDepartureSearch.h"

namespace org {
namespace openapitools {
namespace server {
namespace model {

RequestTimeFilterPostcodesDepartureSearch::RequestTimeFilterPostcodesDepartureSearch()
{
    m_Id = "";
    m_Travel_time = 0;
    m_Departure_time = "";
    m_RangeIsSet = false;
    
}

RequestTimeFilterPostcodesDepartureSearch::~RequestTimeFilterPostcodesDepartureSearch()
{
}

void RequestTimeFilterPostcodesDepartureSearch::validate()
{
    // TODO: implement validation
}

void to_json(nlohmann::json& j, const RequestTimeFilterPostcodesDepartureSearch& o)
{
    j = nlohmann::json();
    j["id"] = o.m_Id;
    j["transportation"] = o.m_Transportation;
    j["travel_time"] = o.m_Travel_time;
    j["departure_time"] = o.m_Departure_time;
    j["properties"] = o.m_Properties;
    if(o.rangeIsSet())
        j["range"] = o.m_Range;
}

void from_json(const nlohmann::json& j, RequestTimeFilterPostcodesDepartureSearch& o)
{
    j.at("id").get_to(o.m_Id);
    j.at("transportation").get_to(o.m_Transportation);
    j.at("travel_time").get_to(o.m_Travel_time);
    j.at("departure_time").get_to(o.m_Departure_time);
    j.at("properties").get_to(o.m_Properties);
    if(j.contains("range"))
    {
        j.at("range").get_to(o.m_Range);
        o.m_RangeIsSet = true;
    } 
}

std::string RequestTimeFilterPostcodesDepartureSearch::getId() const
{
    return m_Id;
}
void RequestTimeFilterPostcodesDepartureSearch::setId(std::string const& value)
{
    m_Id = value;
    
}
RequestTransportation RequestTimeFilterPostcodesDepartureSearch::getTransportation() const
{
    return m_Transportation;
}
void RequestTimeFilterPostcodesDepartureSearch::setTransportation(RequestTransportation const& value)
{
    m_Transportation = value;
    
}
int32_t RequestTimeFilterPostcodesDepartureSearch::getTravelTime() const
{
    return m_Travel_time;
}
void RequestTimeFilterPostcodesDepartureSearch::setTravelTime(int32_t const value)
{
    m_Travel_time = value;
    
}
std::string RequestTimeFilterPostcodesDepartureSearch::getDepartureTime() const
{
    return m_Departure_time;
}
void RequestTimeFilterPostcodesDepartureSearch::setDepartureTime(std::string const& value)
{
    m_Departure_time = value;
    
}
std::vector<RequestTimeFilterPostcodesProperty>& RequestTimeFilterPostcodesDepartureSearch::getProperties()
{
    return m_Properties;
}
RequestRangeFull RequestTimeFilterPostcodesDepartureSearch::getRange() const
{
    return m_Range;
}
void RequestTimeFilterPostcodesDepartureSearch::setRange(RequestRangeFull const& value)
{
    m_Range = value;
    m_RangeIsSet = true;
}
bool RequestTimeFilterPostcodesDepartureSearch::rangeIsSet() const
{
    return m_RangeIsSet;
}
void RequestTimeFilterPostcodesDepartureSearch::unsetRange()
{
    m_RangeIsSet = false;
}

}
}
}
}

