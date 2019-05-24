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



#include "RequestRoutesArrivalSearch.h"

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

RequestRoutesArrivalSearch::RequestRoutesArrivalSearch()
{
    m_Id = "";
    m_Arrival_location_id = "";
    m_Arrival_time = "";
    
}

RequestRoutesArrivalSearch::~RequestRoutesArrivalSearch()
{
}

std::string RequestRoutesArrivalSearch::toJsonString()
{
	std::stringstream ss;
	ptree pt;
	pt.put("Id", m_Id);
	pt.put("Arrival_location_id", m_Arrival_location_id);
	pt.put("Arrival_time", m_Arrival_time);
	write_json(ss, pt, false);
	return ss.str();
}

void RequestRoutesArrivalSearch::fromJsonString(std::string const& jsonString)
{
	std::stringstream ss(jsonString);
	ptree pt;
	read_json(ss,pt);
	m_Id = pt.get("Id", "");
	m_Arrival_location_id = pt.get("Arrival_location_id", "");
	m_Arrival_time = pt.get("Arrival_time", "");
}

std::string RequestRoutesArrivalSearch::getId() const
{
    return m_Id;
}
void RequestRoutesArrivalSearch::setId(std::string value)
{
    m_Id = value;
}
std::vector<std::string> RequestRoutesArrivalSearch::getDepartureLocationIds() const
{
    return m_Departure_location_ids;
}
void RequestRoutesArrivalSearch::setDepartureLocationIds(std::vector<std::string> value)
{
    m_Departure_location_ids = value;
}
std::string RequestRoutesArrivalSearch::getArrivalLocationId() const
{
    return m_Arrival_location_id;
}
void RequestRoutesArrivalSearch::setArrivalLocationId(std::string value)
{
    m_Arrival_location_id = value;
}
std::shared_ptr<RequestTransportation> RequestRoutesArrivalSearch::getTransportation() const
{
    return m_Transportation;
}
void RequestRoutesArrivalSearch::setTransportation(std::shared_ptr<RequestTransportation> value)
{
    m_Transportation = value;
}
std::string RequestRoutesArrivalSearch::getArrivalTime() const
{
    return m_Arrival_time;
}
void RequestRoutesArrivalSearch::setArrivalTime(std::string value)
{
    m_Arrival_time = value;
}
std::vector<std::shared_ptr<RequestRoutesProperty>> RequestRoutesArrivalSearch::getProperties() const
{
    return m_Properties;
}
void RequestRoutesArrivalSearch::setProperties(std::vector<std::shared_ptr<RequestRoutesProperty>> value)
{
    m_Properties = value;
}
std::shared_ptr<RequestRangeFull> RequestRoutesArrivalSearch::getRange() const
{
    return m_Range;
}
void RequestRoutesArrivalSearch::setRange(std::shared_ptr<RequestRangeFull> value)
{
    m_Range = value;
}

}
}
}
}

