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



#include "ResponseTimeFilterFast.h"

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

ResponseTimeFilterFast::ResponseTimeFilterFast()
{
    
}

ResponseTimeFilterFast::~ResponseTimeFilterFast()
{
}

std::string ResponseTimeFilterFast::toJsonString()
{
	std::stringstream ss;
	ptree pt;
	write_json(ss, pt, false);
	return ss.str();
}

void ResponseTimeFilterFast::fromJsonString(std::string const& jsonString)
{
	std::stringstream ss(jsonString);
	ptree pt;
	read_json(ss,pt);
}

std::vector<std::shared_ptr<ResponseTimeFilterFastResult>> ResponseTimeFilterFast::getResults() const
{
    return m_Results;
}
void ResponseTimeFilterFast::setResults(std::vector<std::shared_ptr<ResponseTimeFilterFastResult>> value)
{
    m_Results = value;
}

}
}
}
}

