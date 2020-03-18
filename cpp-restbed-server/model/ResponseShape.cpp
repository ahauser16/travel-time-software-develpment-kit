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



#include "ResponseShape.h"

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

ResponseShape::ResponseShape()
{
}

ResponseShape::~ResponseShape()
{
}

std::string ResponseShape::toJsonString(bool prettyJson)
{
	std::stringstream ss;
	write_json(ss, this->toPropertyTree(), prettyJson);
	return ss.str();
}

void ResponseShape::fromJsonString(std::string const& jsonString)
{
	std::stringstream ss(jsonString);
	ptree pt;
	read_json(ss,pt);
	this->fromPropertyTree(pt);
}

ptree ResponseShape::toPropertyTree()
{
	ptree pt;
	ptree tmp_node;
	// generate tree for Shell
	if (!m_Shell.empty()) {
		for (const auto &childEntry : m_Shell) {
			ptree Shell_node;
			Shell_node.put("", childEntry);
			tmp_node.push_back(std::make_pair("", Shell_node));
		}
		pt.add_child("shell", tmp_node);
		tmp_node.clear();
	}
	// generate tree for Holes
	if (!m_Holes.empty()) {
		for (const auto &childEntry : m_Holes) {
			ptree Holes_node;
			Holes_node.put("", childEntry);
			tmp_node.push_back(std::make_pair("", Holes_node));
		}
		pt.add_child("holes", tmp_node);
		tmp_node.clear();
	}
	return pt;
}

void ResponseShape::fromPropertyTree(ptree const &pt)
{
	ptree tmp_node;
	// push all items of Shell into member vector
	if (pt.get_child_optional("shell")) {
		for (const auto &childTree : pt.get_child("shell")) {
			m_Shell.emplace_back(childTree.second.data());
		}
	}
	// push all items of Holes into member vector
	if (pt.get_child_optional("holes")) {
		for (const auto &childTree : pt.get_child("holes")) {
			m_Holes.emplace_back(childTree.second.data());
		}
	}
}

std::vector<std::shared_ptr<Coords>> ResponseShape::getShell() const
{
    return m_Shell;
}
void ResponseShape::setShell(std::vector<std::shared_ptr<Coords>> value)
{
	m_Shell = value;
}
std::vector<std::vector<std::shared_ptr<Coords>>> ResponseShape::getHoles() const
{
    return m_Holes;
}
void ResponseShape::setHoles(std::vector<std::vector<std::shared_ptr<Coords>>> value)
{
	m_Holes = value;
}

}
}
}
}

