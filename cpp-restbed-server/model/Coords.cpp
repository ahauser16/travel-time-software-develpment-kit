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



#include "Coords.h"

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

Coords::Coords()
{
	m_Lat = 0.0;
	m_Lng = 0.0;
}

Coords::~Coords()
{
}

std::string Coords::toJsonString(bool prettyJson)
{
	std::stringstream ss;
	write_json(ss, this->toPropertyTree(), prettyJson);
	return ss.str();
}

void Coords::fromJsonString(std::string const& jsonString)
{
	std::stringstream ss(jsonString);
	ptree pt;
	read_json(ss,pt);
	this->fromPropertyTree(pt);
}

ptree Coords::toPropertyTree()
{
	ptree pt;
	ptree tmp_node;
	pt.put("lat", m_Lat);
	pt.put("lng", m_Lng);
	return pt;
}

void Coords::fromPropertyTree(ptree const &pt)
{
	ptree tmp_node;
	m_Lat = pt.get("lat", 0.0);
	m_Lng = pt.get("lng", 0.0);
}

double Coords::getLat() const
{
    return m_Lat;
}
void Coords::setLat(double value)
{
	m_Lat = value;
}
double Coords::getLng() const
{
    return m_Lng;
}
void Coords::setLng(double value)
{
	m_Lng = value;
}

}
}
}
}

