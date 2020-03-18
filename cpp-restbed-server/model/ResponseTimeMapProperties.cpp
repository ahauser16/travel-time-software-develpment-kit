/**
 * TravelTime Platform API
 * No description provided (generated by Openapi Generator https://github.com/openapitools/openapi-generator)
 *
 * The version of the OpenAPI document: 1.0.0
 * Contact: support@igeolise.com
 *
 * NOTE: This class is auto generated by OpenAPI-Generator 4.3.0-SNAPSHOT.
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */



#include "ResponseTimeMapProperties.h"

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

ResponseTimeMapProperties::ResponseTimeMapProperties()
{
	m_Is_only_walking = false;
}

ResponseTimeMapProperties::~ResponseTimeMapProperties()
{
}

std::string ResponseTimeMapProperties::toJsonString(bool prettyJson)
{
	std::stringstream ss;
	write_json(ss, this->toPropertyTree(), prettyJson);
	return ss.str();
}

void ResponseTimeMapProperties::fromJsonString(std::string const& jsonString)
{
	std::stringstream ss(jsonString);
	ptree pt;
	read_json(ss,pt);
	this->fromPropertyTree(pt);
}

ptree ResponseTimeMapProperties::toPropertyTree()
{
	ptree pt;
	ptree tmp_node;
	pt.put("is_only_walking", m_Is_only_walking);
	return pt;
}

void ResponseTimeMapProperties::fromPropertyTree(ptree const &pt)
{
	ptree tmp_node;
	m_Is_only_walking = pt.get("is_only_walking", false);
}

bool ResponseTimeMapProperties::isIsOnlyWalking() const
{
    return m_Is_only_walking;
}
void ResponseTimeMapProperties::setIsOnlyWalking(bool value)
{
	m_Is_only_walking = value;
}

}
}
}
}

