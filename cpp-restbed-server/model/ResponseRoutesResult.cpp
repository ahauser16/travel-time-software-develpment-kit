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

std::string ResponseRoutesResult::toJsonString(bool prettyJson)
{
	std::stringstream ss;
	write_json(ss, this->toPropertyTree(), prettyJson);
	return ss.str();
}

void ResponseRoutesResult::fromJsonString(std::string const& jsonString)
{
	std::stringstream ss(jsonString);
	ptree pt;
	read_json(ss,pt);
	this->fromPropertyTree(pt);
}

ptree ResponseRoutesResult::toPropertyTree()
{
	ptree pt;
	ptree tmp_node;
	pt.put("search_id", m_Search_id);
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
	// generate tree for Unreachable
	if (!m_Unreachable.empty()) {
		for (const auto &childEntry : m_Unreachable) {
			ptree Unreachable_node;
			Unreachable_node.put("", childEntry);
			tmp_node.push_back(std::make_pair("", Unreachable_node));
		}
		pt.add_child("unreachable", tmp_node);
		tmp_node.clear();
	}
	return pt;
}

void ResponseRoutesResult::fromPropertyTree(ptree const &pt)
{
	ptree tmp_node;
	m_Search_id = pt.get("search_id", "");
	// push all items of Locations into member vector
	if (pt.get_child_optional("locations")) {
		for (const auto &childTree : pt.get_child("locations")) {
			m_Locations.emplace_back(childTree.second.data());
		}
	}
	// push all items of Unreachable into member vector
	if (pt.get_child_optional("unreachable")) {
		for (const auto &childTree : pt.get_child("unreachable")) {
			m_Unreachable.emplace_back(childTree.second.data());
		}
	}
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

