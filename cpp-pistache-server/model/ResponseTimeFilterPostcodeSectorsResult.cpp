/**
* TravelTime Platform API
* No description provided (generated by Openapi Generator https://github.com/openapitools/openapi-generator)
*
* The version of the OpenAPI document: 1.0.0
* Contact: support@igeolise.com
*
* NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
* https://openapi-generator.tech
* Do not edit the class manually.
*/


#include "ResponseTimeFilterPostcodeSectorsResult.h"

namespace org {
namespace openapitools {
namespace server {
namespace model {

ResponseTimeFilterPostcodeSectorsResult::ResponseTimeFilterPostcodeSectorsResult()
{
    m_Search_id = "";
    
}

ResponseTimeFilterPostcodeSectorsResult::~ResponseTimeFilterPostcodeSectorsResult()
{
}

void ResponseTimeFilterPostcodeSectorsResult::validate()
{
    // TODO: implement validation
}

void to_json(nlohmann::json& j, const ResponseTimeFilterPostcodeSectorsResult& o)
{
    j = nlohmann::json();
    j["search_id"] = o.m_Search_id;
    j["sectors"] = o.m_Sectors;
}

void from_json(const nlohmann::json& j, ResponseTimeFilterPostcodeSectorsResult& o)
{
    j.at("search_id").get_to(o.m_Search_id);
    j.at("sectors").get_to(o.m_Sectors);
}

std::string ResponseTimeFilterPostcodeSectorsResult::getSearchId() const
{
    return m_Search_id;
}
void ResponseTimeFilterPostcodeSectorsResult::setSearchId(std::string const& value)
{
    m_Search_id = value;
    
}
std::vector<ResponseTimeFilterPostcodeSector>& ResponseTimeFilterPostcodeSectorsResult::getSectors()
{
    return m_Sectors;
}

}
}
}
}

