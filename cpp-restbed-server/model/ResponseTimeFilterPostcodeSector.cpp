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



#include "ResponseTimeFilterPostcodeSector.h"

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

ResponseTimeFilterPostcodeSector::ResponseTimeFilterPostcodeSector()
{
    
}

ResponseTimeFilterPostcodeSector::~ResponseTimeFilterPostcodeSector()
{
}

std::string ResponseTimeFilterPostcodeSector::toJsonString()
{
	std::stringstream ss;
	ptree pt;
	write_json(ss, pt, false);
	return ss.str();
}

void ResponseTimeFilterPostcodeSector::fromJsonString(std::string const& jsonString)
{
	std::stringstream ss(jsonString);
	ptree pt;
	read_json(ss,pt);
}

std::shared_ptr<String> ResponseTimeFilterPostcodeSector::getCode() const
{
    return m_Code;
}
void ResponseTimeFilterPostcodeSector::setCode(std::shared_ptr<String> value)
{
    m_Code = value;
}
std::shared_ptr<ResponseTimeFilterPostcodeSectorProperties> ResponseTimeFilterPostcodeSector::getProperties() const
{
    return m_Properties;
}
void ResponseTimeFilterPostcodeSector::setProperties(std::shared_ptr<ResponseTimeFilterPostcodeSectorProperties> value)
{
    m_Properties = value;
}

}
}
}
}

