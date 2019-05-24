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


#include "ResponseRoutesResult.h"

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

void ResponseRoutesResult::validate()
{
    // TODO: implement validation
}

void to_json(nlohmann::json& j, const ResponseRoutesResult& o)
{
    j = nlohmann::json();
    j["search_id"] = o.m_Search_id;
    j["locations"] = o.m_Locations;
    j["unreachable"] = o.m_Unreachable;
}

void from_json(const nlohmann::json& j, ResponseRoutesResult& o)
{
    j.at("search_id").get_to(o.m_Search_id);
    j.at("locations").get_to(o.m_Locations);
    j.at("unreachable").get_to(o.m_Unreachable);
}

std::string ResponseRoutesResult::getSearchId() const
{
    return m_Search_id;
}
void ResponseRoutesResult::setSearchId(std::string const& value)
{
    m_Search_id = value;
    
}
std::vector<ResponseRoutesLocation>& ResponseRoutesResult::getLocations()
{
    return m_Locations;
}
std::vector<std::string>& ResponseRoutesResult::getUnreachable()
{
    return m_Unreachable;
}

}
}
}
}

