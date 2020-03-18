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



#include "ResponseMapInfoFeatures.h"

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

ResponseMapInfoFeatures::ResponseMapInfoFeatures()
{
	m_Fares = false;
	m_Postcodes = false;
}

ResponseMapInfoFeatures::~ResponseMapInfoFeatures()
{
}

std::string ResponseMapInfoFeatures::toJsonString(bool prettyJson)
{
	std::stringstream ss;
	write_json(ss, this->toPropertyTree(), prettyJson);
	return ss.str();
}

void ResponseMapInfoFeatures::fromJsonString(std::string const& jsonString)
{
	std::stringstream ss(jsonString);
	ptree pt;
	read_json(ss,pt);
	this->fromPropertyTree(pt);
}

ptree ResponseMapInfoFeatures::toPropertyTree()
{
	ptree pt;
	ptree tmp_node;
	if (m_Public_transport != nullptr) {
		pt.add_child("public_transport", m_Public_transport->toPropertyTree());
	}
	pt.put("fares", m_Fares);
	pt.put("postcodes", m_Postcodes);
	return pt;
}

void ResponseMapInfoFeatures::fromPropertyTree(ptree const &pt)
{
	ptree tmp_node;
	if (pt.get_child_optional("public_transport")) {
		m_Public_transport = std::make_shared<ResponseMapInfoFeaturesPublicTransport>();
		m_Public_transport->fromPropertyTree(pt.get_child("public_transport"));
	}
	m_Fares = pt.get("fares", false);
	m_Postcodes = pt.get("postcodes", false);
}

std::shared_ptr<ResponseMapInfoFeaturesPublicTransport> ResponseMapInfoFeatures::getPublicTransport() const
{
    return m_Public_transport;
}
void ResponseMapInfoFeatures::setPublicTransport(std::shared_ptr<ResponseMapInfoFeaturesPublicTransport> value)
{
	m_Public_transport = value;
}
bool ResponseMapInfoFeatures::isFares() const
{
    return m_Fares;
}
void ResponseMapInfoFeatures::setFares(bool value)
{
	m_Fares = value;
}
bool ResponseMapInfoFeatures::isPostcodes() const
{
    return m_Postcodes;
}
void ResponseMapInfoFeatures::setPostcodes(bool value)
{
	m_Postcodes = value;
}

}
}
}
}

