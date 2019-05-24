/**
 * TravelTime Platform API
 * No description provided (generated by Openapi Generator https://github.com/openapitools/openapi-generator)
 *
 * The version of the OpenAPI document: 1.0.0
 * Contact: support@igeolise.com
 *
 * NOTE: This class is auto generated by OpenAPI-Generator 4.0.0.
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */



#include "RequestTimeMapDepartureSearch.h"

#include <string>
#include <sstream>
#include <boost/property_tree/ptree.hpp>
#include <boost/property_tree/json_parser.hpp>

using boost::property_tree::ptree;
using boost::property_tree::read_json;
using boost::property_tree::write_json;

namespace org {
namespace openapitools {
namespace server {
namespace model {

RequestTimeMapDepartureSearch::RequestTimeMapDepartureSearch()
{
    m_Id = "";
    m_Travel_time = 0;
    m_Departure_time = "";
    
}

RequestTimeMapDepartureSearch::~RequestTimeMapDepartureSearch()
{
}

std::string RequestTimeMapDepartureSearch::toJsonString()
{
	std::stringstream ss;
	ptree pt;
	pt.put("Id", m_Id);
	pt.put("Travel_time", m_Travel_time);
	pt.put("Departure_time", m_Departure_time);
	write_json(ss, pt, false);
	return ss.str();
}

void RequestTimeMapDepartureSearch::fromJsonString(std::string const& jsonString)
{
	std::stringstream ss(jsonString);
	ptree pt;
	read_json(ss,pt);
	m_Id = pt.get("Id", "");
	m_Travel_time = pt.get("Travel_time", 0);
	m_Departure_time = pt.get("Departure_time", "");
}

std::string RequestTimeMapDepartureSearch::getId() const
{
    return m_Id;
}
void RequestTimeMapDepartureSearch::setId(std::string value)
{
    m_Id = value;
}
std::shared_ptr<Coords> RequestTimeMapDepartureSearch::getCoords() const
{
    return m_Coords;
}
void RequestTimeMapDepartureSearch::setCoords(std::shared_ptr<Coords> value)
{
    m_Coords = value;
}
std::shared_ptr<RequestTransportation> RequestTimeMapDepartureSearch::getTransportation() const
{
    return m_Transportation;
}
void RequestTimeMapDepartureSearch::setTransportation(std::shared_ptr<RequestTransportation> value)
{
    m_Transportation = value;
}
int32_t RequestTimeMapDepartureSearch::getTravelTime() const
{
    return m_Travel_time;
}
void RequestTimeMapDepartureSearch::setTravelTime(int32_t value)
{
    m_Travel_time = value;
}
std::string RequestTimeMapDepartureSearch::getDepartureTime() const
{
    return m_Departure_time;
}
void RequestTimeMapDepartureSearch::setDepartureTime(std::string value)
{
    m_Departure_time = value;
}
std::vector<std::shared_ptr<RequestTimeMapProperty>> RequestTimeMapDepartureSearch::getProperties() const
{
    return m_Properties;
}
void RequestTimeMapDepartureSearch::setProperties(std::vector<std::shared_ptr<RequestTimeMapProperty>> value)
{
    m_Properties = value;
}
std::shared_ptr<RequestRangeNoMaxResults> RequestTimeMapDepartureSearch::getRange() const
{
    return m_Range;
}
void RequestTimeMapDepartureSearch::setRange(std::shared_ptr<RequestRangeNoMaxResults> value)
{
    m_Range = value;
}

}
}
}
}

