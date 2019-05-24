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


#include "ResponseTimeFilterFast.h"

namespace org {
namespace openapitools {
namespace server {
namespace model {

ResponseTimeFilterFast::ResponseTimeFilterFast()
{
    
}

ResponseTimeFilterFast::~ResponseTimeFilterFast()
{
}

void ResponseTimeFilterFast::validate()
{
    // TODO: implement validation
}

void to_json(nlohmann::json& j, const ResponseTimeFilterFast& o)
{
    j = nlohmann::json();
    j["results"] = o.m_Results;
}

void from_json(const nlohmann::json& j, ResponseTimeFilterFast& o)
{
    j.at("results").get_to(o.m_Results);
}

std::vector<ResponseTimeFilterFastResult>& ResponseTimeFilterFast::getResults()
{
    return m_Results;
}

}
}
}
}

