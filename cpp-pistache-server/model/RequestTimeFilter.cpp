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


#include "RequestTimeFilter.h"

namespace org {
namespace openapitools {
namespace server {
namespace model {

RequestTimeFilter::RequestTimeFilter()
{
    m_Departure_searchesIsSet = false;
    m_Arrival_searchesIsSet = false;
    
}

RequestTimeFilter::~RequestTimeFilter()
{
}

void RequestTimeFilter::validate()
{
    // TODO: implement validation
}

void to_json(nlohmann::json& j, const RequestTimeFilter& o)
{
    j = nlohmann::json();
    j["locations"] = o.m_Locations;
    if(o.departureSearchesIsSet() || !o.m_Departure_searches.empty())
        j["departure_searches"] = o.m_Departure_searches;
    if(o.arrivalSearchesIsSet() || !o.m_Arrival_searches.empty())
        j["arrival_searches"] = o.m_Arrival_searches;
}

void from_json(const nlohmann::json& j, RequestTimeFilter& o)
{
    j.at("locations").get_to(o.m_Locations);
    if(j.find("departure_searches") != j.end())
    {
        j.at("departure_searches").get_to(o.m_Departure_searches);
        o.m_Departure_searchesIsSet = true;
    } 
    if(j.find("arrival_searches") != j.end())
    {
        j.at("arrival_searches").get_to(o.m_Arrival_searches);
        o.m_Arrival_searchesIsSet = true;
    } 
}

std::vector<RequestLocation>& RequestTimeFilter::getLocations()
{
    return m_Locations;
}
void RequestTimeFilter::setLocations(std::vector<RequestLocation> const& value)
{
    m_Locations = value;
}
std::vector<RequestTimeFilterDepartureSearch>& RequestTimeFilter::getDepartureSearches()
{
    return m_Departure_searches;
}
void RequestTimeFilter::setDepartureSearches(std::vector<RequestTimeFilterDepartureSearch> const& value)
{
    m_Departure_searches = value;
    m_Departure_searchesIsSet = true;
}
bool RequestTimeFilter::departureSearchesIsSet() const
{
    return m_Departure_searchesIsSet;
}
void RequestTimeFilter::unsetDeparture_searches()
{
    m_Departure_searchesIsSet = false;
}
std::vector<RequestTimeFilterArrivalSearch>& RequestTimeFilter::getArrivalSearches()
{
    return m_Arrival_searches;
}
void RequestTimeFilter::setArrivalSearches(std::vector<RequestTimeFilterArrivalSearch> const& value)
{
    m_Arrival_searches = value;
    m_Arrival_searchesIsSet = true;
}
bool RequestTimeFilter::arrivalSearchesIsSet() const
{
    return m_Arrival_searchesIsSet;
}
void RequestTimeFilter::unsetArrival_searches()
{
    m_Arrival_searchesIsSet = false;
}

}
}
}
}

