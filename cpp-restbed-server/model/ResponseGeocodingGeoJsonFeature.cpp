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



#include "ResponseGeocodingGeoJsonFeature.h"

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

ResponseGeocodingGeoJsonFeature::ResponseGeocodingGeoJsonFeature()
{
    m_Type = "";
    
}

ResponseGeocodingGeoJsonFeature::~ResponseGeocodingGeoJsonFeature()
{
}

std::string ResponseGeocodingGeoJsonFeature::toJsonString()
{
	std::stringstream ss;
	ptree pt;
	pt.put("Type", m_Type);
	write_json(ss, pt, false);
	return ss.str();
}

void ResponseGeocodingGeoJsonFeature::fromJsonString(std::string const& jsonString)
{
	std::stringstream ss(jsonString);
	ptree pt;
	read_json(ss,pt);
	m_Type = pt.get("Type", "");
}

std::string ResponseGeocodingGeoJsonFeature::getType() const
{
    return m_Type;
}
void ResponseGeocodingGeoJsonFeature::setType(std::string value)
{
    m_Type = value;
}
std::shared_ptr<ResponseGeocodingGeometry> ResponseGeocodingGeoJsonFeature::getGeometry() const
{
    return m_Geometry;
}
void ResponseGeocodingGeoJsonFeature::setGeometry(std::shared_ptr<ResponseGeocodingGeometry> value)
{
    m_Geometry = value;
}
std::shared_ptr<ResponseGeocodingProperties> ResponseGeocodingGeoJsonFeature::getProperties() const
{
    return m_Properties;
}
void ResponseGeocodingGeoJsonFeature::setProperties(std::shared_ptr<ResponseGeocodingProperties> value)
{
    m_Properties = value;
}

}
}
}
}

