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


#include "ResponseError.h"

namespace org {
namespace openapitools {
namespace server {
namespace model {

ResponseError::ResponseError()
{
    m_Http_status = 0;
    m_Http_statusIsSet = false;
    m_Error_code = 0;
    m_Error_codeIsSet = false;
    m_Description = "";
    m_DescriptionIsSet = false;
    m_Documentation_link = "";
    m_Documentation_linkIsSet = false;
    m_Additional_infoIsSet = false;
    
}

ResponseError::~ResponseError()
{
}

void ResponseError::validate()
{
    // TODO: implement validation
}

void to_json(nlohmann::json& j, const ResponseError& o)
{
    j = nlohmann::json();
    if(o.httpStatusIsSet())
        j["http_status"] = o.m_Http_status;
    if(o.errorCodeIsSet())
        j["error_code"] = o.m_Error_code;
    if(o.descriptionIsSet())
        j["description"] = o.m_Description;
    if(o.documentationLinkIsSet())
        j["documentation_link"] = o.m_Documentation_link;
    if(o.additionalInfoIsSet() || !o.m_Additional_info.empty())
        j["additional_info"] = o.m_Additional_info;
}

void from_json(const nlohmann::json& j, ResponseError& o)
{
    if(j.find("http_status") != j.end())
    {
        j.at("http_status").get_to(o.m_Http_status);
        o.m_Http_statusIsSet = true;
    } 
    if(j.find("error_code") != j.end())
    {
        j.at("error_code").get_to(o.m_Error_code);
        o.m_Error_codeIsSet = true;
    } 
    if(j.find("description") != j.end())
    {
        j.at("description").get_to(o.m_Description);
        o.m_DescriptionIsSet = true;
    } 
    if(j.find("documentation_link") != j.end())
    {
        j.at("documentation_link").get_to(o.m_Documentation_link);
        o.m_Documentation_linkIsSet = true;
    } 
    if(j.find("additional_info") != j.end())
    {
        j.at("additional_info").get_to(o.m_Additional_info);
        o.m_Additional_infoIsSet = true;
    } 
}

int32_t ResponseError::getHttpStatus() const
{
    return m_Http_status;
}
void ResponseError::setHttpStatus(int32_t const value)
{
    m_Http_status = value;
    m_Http_statusIsSet = true;
}
bool ResponseError::httpStatusIsSet() const
{
    return m_Http_statusIsSet;
}
void ResponseError::unsetHttp_status()
{
    m_Http_statusIsSet = false;
}
int32_t ResponseError::getErrorCode() const
{
    return m_Error_code;
}
void ResponseError::setErrorCode(int32_t const value)
{
    m_Error_code = value;
    m_Error_codeIsSet = true;
}
bool ResponseError::errorCodeIsSet() const
{
    return m_Error_codeIsSet;
}
void ResponseError::unsetError_code()
{
    m_Error_codeIsSet = false;
}
std::string ResponseError::getDescription() const
{
    return m_Description;
}
void ResponseError::setDescription(std::string const& value)
{
    m_Description = value;
    m_DescriptionIsSet = true;
}
bool ResponseError::descriptionIsSet() const
{
    return m_DescriptionIsSet;
}
void ResponseError::unsetDescription()
{
    m_DescriptionIsSet = false;
}
std::string ResponseError::getDocumentationLink() const
{
    return m_Documentation_link;
}
void ResponseError::setDocumentationLink(std::string const& value)
{
    m_Documentation_link = value;
    m_Documentation_linkIsSet = true;
}
bool ResponseError::documentationLinkIsSet() const
{
    return m_Documentation_linkIsSet;
}
void ResponseError::unsetDocumentation_link()
{
    m_Documentation_linkIsSet = false;
}
std::map<std::string, std::vector<std::string>>& ResponseError::getAdditionalInfo()
{
    return m_Additional_info;
}
void ResponseError::setAdditionalInfo(std::map<std::string, std::vector<std::string>> const& value)
{
    m_Additional_info = value;
    m_Additional_infoIsSet = true;
}
bool ResponseError::additionalInfoIsSet() const
{
    return m_Additional_infoIsSet;
}
void ResponseError::unsetAdditional_info()
{
    m_Additional_infoIsSet = false;
}

}
}
}
}

