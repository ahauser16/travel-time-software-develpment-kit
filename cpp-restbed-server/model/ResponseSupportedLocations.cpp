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



#include "ResponseSupportedLocations.h"

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

ResponseSupportedLocations::ResponseSupportedLocations()
{
}

ResponseSupportedLocations::~ResponseSupportedLocations()
{
}

std::string ResponseSupportedLocations::toJsonString(bool prettyJson)
{
	std::stringstream ss;
	write_json(ss, this->toPropertyTree(), prettyJson);
	return ss.str();
}

void ResponseSupportedLocations::fromJsonString(std::string const& jsonString)
{
	std::stringstream ss(jsonString);
	ptree pt;
	read_json(ss,pt);
	this->fromPropertyTree(pt);
}

ptree ResponseSupportedLocations::toPropertyTree()
{
	ptree pt;
	ptree tmp_node;
	// generate tree for Locations
	if (!m_Locations.empty()) {
		for (const auto &childEntry : m_Locations) {
			ptree Locations_node;
			Locations_node.put("", childEntry);
			tmp_node.push_back(std::make_pair("", Locations_node));
		}
		pt.add_child("locations", tmp_node);
		tmp_node.clear();
	}
	// generate tree for Unsupported_locations
	if (!m_Unsupported_locations.empty()) {
		for (const auto &childEntry : m_Unsupported_locations) {
			ptree Unsupported_locations_node;
			Unsupported_locations_node.put("", childEntry);
			tmp_node.push_back(std::make_pair("", Unsupported_locations_node));
		}
		pt.add_child("unsupported_locations", tmp_node);
		tmp_node.clear();
	}
	return pt;
}

void ResponseSupportedLocations::fromPropertyTree(ptree const &pt)
{
	ptree tmp_node;
	// push all items of Locations into member vector
	if (pt.get_child_optional("locations")) {
		for (const auto &childTree : pt.get_child("locations")) {
			m_Locations.emplace_back(childTree.second.data());
		}
	}
	// push all items of Unsupported_locations into member vector
	if (pt.get_child_optional("unsupported_locations")) {
		for (const auto &childTree : pt.get_child("unsupported_locations")) {
			m_Unsupported_locations.emplace_back(childTree.second.data());
		}
	}
}

std::vector<std::shared_ptr<ResponseSupportedLocation>> ResponseSupportedLocations::getLocations() const
{
    return m_Locations;
}
void ResponseSupportedLocations::setLocations(std::vector<std::shared_ptr<ResponseSupportedLocation>> value)
{
	m_Locations = value;
}
std::vector<std::string> ResponseSupportedLocations::getUnsupportedLocations() const
{
    return m_Unsupported_locations;
}
void ResponseSupportedLocations::setUnsupportedLocations(std::vector<std::string> value)
{
	m_Unsupported_locations = value;
}

}
}
}
}

