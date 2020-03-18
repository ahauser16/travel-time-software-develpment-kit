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



#include "RequestTimeFilterFastArrivalSearches.h"

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

RequestTimeFilterFastArrivalSearches::RequestTimeFilterFastArrivalSearches()
{
}

RequestTimeFilterFastArrivalSearches::~RequestTimeFilterFastArrivalSearches()
{
}

std::string RequestTimeFilterFastArrivalSearches::toJsonString(bool prettyJson)
{
	std::stringstream ss;
	write_json(ss, this->toPropertyTree(), prettyJson);
	return ss.str();
}

void RequestTimeFilterFastArrivalSearches::fromJsonString(std::string const& jsonString)
{
	std::stringstream ss(jsonString);
	ptree pt;
	read_json(ss,pt);
	this->fromPropertyTree(pt);
}

ptree RequestTimeFilterFastArrivalSearches::toPropertyTree()
{
	ptree pt;
	ptree tmp_node;
	// generate tree for Many_to_one
	if (!m_Many_to_one.empty()) {
		for (const auto &childEntry : m_Many_to_one) {
			ptree Many_to_one_node;
			Many_to_one_node.put("", childEntry);
			tmp_node.push_back(std::make_pair("", Many_to_one_node));
		}
		pt.add_child("many_to_one", tmp_node);
		tmp_node.clear();
	}
	// generate tree for One_to_many
	if (!m_One_to_many.empty()) {
		for (const auto &childEntry : m_One_to_many) {
			ptree One_to_many_node;
			One_to_many_node.put("", childEntry);
			tmp_node.push_back(std::make_pair("", One_to_many_node));
		}
		pt.add_child("one_to_many", tmp_node);
		tmp_node.clear();
	}
	return pt;
}

void RequestTimeFilterFastArrivalSearches::fromPropertyTree(ptree const &pt)
{
	ptree tmp_node;
	// push all items of Many_to_one into member vector
	if (pt.get_child_optional("many_to_one")) {
		for (const auto &childTree : pt.get_child("many_to_one")) {
			m_Many_to_one.emplace_back(childTree.second.data());
		}
	}
	// push all items of One_to_many into member vector
	if (pt.get_child_optional("one_to_many")) {
		for (const auto &childTree : pt.get_child("one_to_many")) {
			m_One_to_many.emplace_back(childTree.second.data());
		}
	}
}

std::vector<std::shared_ptr<RequestTimeFilterFastArrivalManyToOneSearch>> RequestTimeFilterFastArrivalSearches::getManyToOne() const
{
    return m_Many_to_one;
}
void RequestTimeFilterFastArrivalSearches::setManyToOne(std::vector<std::shared_ptr<RequestTimeFilterFastArrivalManyToOneSearch>> value)
{
	m_Many_to_one = value;
}
std::vector<std::shared_ptr<RequestTimeFilterFastArrivalOneToManySearch>> RequestTimeFilterFastArrivalSearches::getOneToMany() const
{
    return m_One_to_many;
}
void RequestTimeFilterFastArrivalSearches::setOneToMany(std::vector<std::shared_ptr<RequestTimeFilterFastArrivalOneToManySearch>> value)
{
	m_One_to_many = value;
}

}
}
}
}

