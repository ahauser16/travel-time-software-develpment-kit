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


#include "ResponseTimeMapProperties.h"

namespace org {
namespace openapitools {
namespace server {
namespace model {

ResponseTimeMapProperties::ResponseTimeMapProperties()
{
    m_Is_only_walking = false;
    m_Is_only_walkingIsSet = false;
    
}

ResponseTimeMapProperties::~ResponseTimeMapProperties()
{
}

void ResponseTimeMapProperties::validate()
{
    // TODO: implement validation
}

void to_json(nlohmann::json& j, const ResponseTimeMapProperties& o)
{
    j = nlohmann::json();
    if(o.isOnlyWalkingIsSet())
        j["is_only_walking"] = o.m_Is_only_walking;
}

void from_json(const nlohmann::json& j, ResponseTimeMapProperties& o)
{
    if(j.contains("is_only_walking"))
    {
        j.at("is_only_walking").get_to(o.m_Is_only_walking);
        o.m_Is_only_walkingIsSet = true;
    } 
}

bool ResponseTimeMapProperties::isIsOnlyWalking() const
{
    return m_Is_only_walking;
}
void ResponseTimeMapProperties::setIsOnlyWalking(bool const value)
{
    m_Is_only_walking = value;
    m_Is_only_walkingIsSet = true;
}
bool ResponseTimeMapProperties::isOnlyWalkingIsSet() const
{
    return m_Is_only_walkingIsSet;
}
void ResponseTimeMapProperties::unsetIs_only_walking()
{
    m_Is_only_walkingIsSet = false;
}

}
}
}
}

