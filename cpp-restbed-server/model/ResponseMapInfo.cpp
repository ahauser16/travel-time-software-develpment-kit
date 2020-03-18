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



#include "ResponseMapInfo.h"

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

ResponseMapInfo::ResponseMapInfo()
{
}

ResponseMapInfo::~ResponseMapInfo()
{
}

std::string ResponseMapInfo::toJsonString(bool prettyJson)
{
	std::stringstream ss;
	write_json(ss, this->toPropertyTree(), prettyJson);
	return ss.str();
}

void ResponseMapInfo::fromJsonString(std::string const& jsonString)
{
	std::stringstream ss(jsonString);
	ptree pt;
	read_json(ss,pt);
	this->fromPropertyTree(pt);
}

ptree ResponseMapInfo::toPropertyTree()
{
	ptree pt;
	ptree tmp_node;
	// generate tree for Maps
	if (!m_Maps.empty()) {
		for (const auto &childEntry : m_Maps) {
			ptree Maps_node;
			Maps_node.put("", childEntry);
			tmp_node.push_back(std::make_pair("", Maps_node));
		}
		pt.add_child("maps", tmp_node);
		tmp_node.clear();
	}
	return pt;
}

void ResponseMapInfo::fromPropertyTree(ptree const &pt)
{
	ptree tmp_node;
	// push all items of Maps into member vector
	if (pt.get_child_optional("maps")) {
		for (const auto &childTree : pt.get_child("maps")) {
			m_Maps.emplace_back(childTree.second.data());
		}
	}
}

std::vector<std::shared_ptr<ResponseMapInfoMap>> ResponseMapInfo::getMaps() const
{
    return m_Maps;
}
void ResponseMapInfo::setMaps(std::vector<std::shared_ptr<ResponseMapInfoMap>> value)
{
	m_Maps = value;
}

}
}
}
}

