/**
 * TravelTime Platform API
 * No description provided (generated by Openapi Generator https://github.com/openapitools/openapi-generator)
 *
 * The version of the OpenAPI document: 1.0.0
 * Contact: support@igeolise.com
 *
 * NOTE: This class is auto generated by OpenAPI-Generator 4.2.3.
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */



#include "RequestTimeFilterPostcodeDistrictsProperty.h"

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

RequestTimeFilterPostcodeDistrictsProperty::RequestTimeFilterPostcodeDistrictsProperty()
{
}

RequestTimeFilterPostcodeDistrictsProperty::~RequestTimeFilterPostcodeDistrictsProperty()
{
}

std::string RequestTimeFilterPostcodeDistrictsProperty::toJsonString(bool prettyJson)
{
	std::stringstream ss;
	write_json(ss, this->toPropertyTree(), prettyJson);
	return ss.str();
}

void RequestTimeFilterPostcodeDistrictsProperty::fromJsonString(std::string const& jsonString)
{
	std::stringstream ss(jsonString);
	ptree pt;
	read_json(ss,pt);
	this->fromPropertyTree(pt);
}

ptree RequestTimeFilterPostcodeDistrictsProperty::toPropertyTree()
{
	ptree pt;
	ptree tmp_node;
	return pt;
}

void RequestTimeFilterPostcodeDistrictsProperty::fromPropertyTree(ptree const &pt)
{
	ptree tmp_node;
}


}
}
}
}

