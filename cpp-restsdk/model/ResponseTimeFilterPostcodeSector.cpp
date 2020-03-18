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



#include "ResponseTimeFilterPostcodeSector.h"

namespace org {
namespace openapitools {
namespace client {
namespace model {




ResponseTimeFilterPostcodeSector::ResponseTimeFilterPostcodeSector()
{
}

ResponseTimeFilterPostcodeSector::~ResponseTimeFilterPostcodeSector()
{
}

void ResponseTimeFilterPostcodeSector::validate()
{
    // TODO: implement validation
}

web::json::value ResponseTimeFilterPostcodeSector::toJson() const
{
    web::json::value val = web::json::value::object();

    val[utility::conversions::to_string_t("code")] = ModelBase::toJson(m_Code);
    val[utility::conversions::to_string_t("properties")] = ModelBase::toJson(m_Properties);

    return val;
}

void ResponseTimeFilterPostcodeSector::fromJson(const web::json::value& val)
{
    std::shared_ptr<String> newCode(nullptr);
    newCode->fromJson(val.at(utility::conversions::to_string_t("code")));
    setCode( newCode );
    std::shared_ptr<ResponseTimeFilterPostcodeSectorProperties> newProperties(new ResponseTimeFilterPostcodeSectorProperties());
    newProperties->fromJson(val.at(utility::conversions::to_string_t("properties")));
    setProperties( newProperties );
}

void ResponseTimeFilterPostcodeSector::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }

    m_Code->toMultipart(multipart, utility::conversions::to_string_t("code."));
    m_Properties->toMultipart(multipart, utility::conversions::to_string_t("properties."));
}

void ResponseTimeFilterPostcodeSector::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }

    std::shared_ptr<String> newCode(nullptr);
    newCode->fromMultiPart(multipart, utility::conversions::to_string_t("code."));
    setCode( newCode );
    std::shared_ptr<ResponseTimeFilterPostcodeSectorProperties> newProperties(new ResponseTimeFilterPostcodeSectorProperties());
    newProperties->fromMultiPart(multipart, utility::conversions::to_string_t("properties."));
    setProperties( newProperties );
}

std::shared_ptr<String> ResponseTimeFilterPostcodeSector::getCode() const
{
    return m_Code;
}

void ResponseTimeFilterPostcodeSector::setCode(const std::shared_ptr<String>& value)
{
    m_Code = value;
    
}

std::shared_ptr<ResponseTimeFilterPostcodeSectorProperties> ResponseTimeFilterPostcodeSector::getProperties() const
{
    return m_Properties;
}

void ResponseTimeFilterPostcodeSector::setProperties(const std::shared_ptr<ResponseTimeFilterPostcodeSectorProperties>& value)
{
    m_Properties = value;
    
}

}
}
}
}


