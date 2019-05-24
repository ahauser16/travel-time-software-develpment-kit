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



#include "ResponseRoutesResult.h"

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

ResponseRoutesResult::ResponseRoutesResult()
{
    m_Search_id = "";
    
}

ResponseRoutesResult::~ResponseRoutesResult()
{
}

std::string ResponseRoutesResult::toJsonString()
{
	std::stringstream ss;
	ptree pt;
	pt.put("Search_id", m_Search_id);
	write_json(ss, pt, false);
	return ss.str();
}

void ResponseRoutesResult::fromJsonString(std::string const& jsonString)
{
	std::stringstream ss(jsonString);
	ptree pt;
	read_json(ss,pt);
	m_Search_id = pt.get("Search_id", "");
}

std::string ResponseRoutesResult::getSearchId() const
{
    return m_Search_id;
}
void ResponseRoutesResult::setSearchId(std::string value)
{
    m_Search_id = value;
}
std::vector<std::shared_ptr<ResponseRoutesLocation>> ResponseRoutesResult::getLocations() const
{
    return m_Locations;
}
void ResponseRoutesResult::setLocations(std::vector<std::shared_ptr<ResponseRoutesLocation>> value)
{
    m_Locations = value;
}
std::vector<std::string> ResponseRoutesResult::getUnreachable() const
{
    return m_Unreachable;
}
void ResponseRoutesResult::setUnreachable(std::vector<std::string> value)
{
    m_Unreachable = value;
}

}
}
}
}

