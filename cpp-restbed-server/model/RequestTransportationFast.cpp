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



#include "RequestTransportationFast.h"

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

RequestTransportationFast::RequestTransportationFast()
{
    m_Type = "";
    
}

RequestTransportationFast::~RequestTransportationFast()
{
}

std::string RequestTransportationFast::toJsonString()
{
	std::stringstream ss;
	ptree pt;
	pt.put("Type", m_Type);
	write_json(ss, pt, false);
	return ss.str();
}

void RequestTransportationFast::fromJsonString(std::string const& jsonString)
{
	std::stringstream ss(jsonString);
	ptree pt;
	read_json(ss,pt);
	m_Type = pt.get("Type", "");
}

std::string RequestTransportationFast::getType() const
{
    return m_Type;
}
void RequestTransportationFast::setType(std::string value)
{
    m_Type = value;
}

}
}
}
}

