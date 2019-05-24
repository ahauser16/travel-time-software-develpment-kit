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



#include "ResponseTravelTimeStatistics.h"

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

ResponseTravelTimeStatistics::ResponseTravelTimeStatistics()
{
    m_Min = 0;
    m_Max = 0;
    m_Mean = 0;
    m_Median = 0;
    
}

ResponseTravelTimeStatistics::~ResponseTravelTimeStatistics()
{
}

std::string ResponseTravelTimeStatistics::toJsonString()
{
	std::stringstream ss;
	ptree pt;
	pt.put("Min", m_Min);
	pt.put("Max", m_Max);
	pt.put("Mean", m_Mean);
	pt.put("Median", m_Median);
	write_json(ss, pt, false);
	return ss.str();
}

void ResponseTravelTimeStatistics::fromJsonString(std::string const& jsonString)
{
	std::stringstream ss(jsonString);
	ptree pt;
	read_json(ss,pt);
	m_Min = pt.get("Min", 0);
	m_Max = pt.get("Max", 0);
	m_Mean = pt.get("Mean", 0);
	m_Median = pt.get("Median", 0);
}

int32_t ResponseTravelTimeStatistics::getMin() const
{
    return m_Min;
}
void ResponseTravelTimeStatistics::setMin(int32_t value)
{
    m_Min = value;
}
int32_t ResponseTravelTimeStatistics::getMax() const
{
    return m_Max;
}
void ResponseTravelTimeStatistics::setMax(int32_t value)
{
    m_Max = value;
}
int32_t ResponseTravelTimeStatistics::getMean() const
{
    return m_Mean;
}
void ResponseTravelTimeStatistics::setMean(int32_t value)
{
    m_Mean = value;
}
int32_t ResponseTravelTimeStatistics::getMedian() const
{
    return m_Median;
}
void ResponseTravelTimeStatistics::setMedian(int32_t value)
{
    m_Median = value;
}

}
}
}
}

