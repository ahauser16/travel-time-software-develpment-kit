/**
 * TravelTime Platform API
 * No description provided (generated by Openapi Generator https://github.com/openapitools/openapi-generator)
 *
 * The version of the OpenAPI document: 1.0.0
 * Contact: support@igeolise.com
 *
 * NOTE: This class is auto generated by OpenAPI-Generator 4.3.0-SNAPSHOT.
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */



#include "RequestTimeFilterFastProperty.h"

namespace org {
namespace openapitools {
namespace client {
namespace model {



RequestTimeFilterFastProperty::RequestTimeFilterFastProperty()
{
}

RequestTimeFilterFastProperty::~RequestTimeFilterFastProperty()
{
}

void RequestTimeFilterFastProperty::validate()
{
    // TODO: implement validation
}

web::json::value RequestTimeFilterFastProperty::toJson() const
{
    web::json::value val = web::json::value::object();

    
    if (m_value == eRequestTimeFilterFastProperty::RequestTimeFilterFastProperty_TRAVEL_TIME) val = web::json::value::string(U("travel_time"));
    if (m_value == eRequestTimeFilterFastProperty::RequestTimeFilterFastProperty_FARES) val = web::json::value::string(U("fares"));

    return val;
}

bool RequestTimeFilterFastProperty::fromJson(const web::json::value& val)
{
    auto s = val.as_string();

    
    if (s == utility::conversions::to_string_t("travel_time")) m_value = eRequestTimeFilterFastProperty::RequestTimeFilterFastProperty_TRAVEL_TIME;
    if (s == utility::conversions::to_string_t("fares")) m_value = eRequestTimeFilterFastProperty::RequestTimeFilterFastProperty_FARES;
    return true;
}

void RequestTimeFilterFastProperty::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }

    utility::string_t s;

    
    if (m_value == eRequestTimeFilterFastProperty::RequestTimeFilterFastProperty_TRAVEL_TIME) s = utility::conversions::to_string_t("travel_time");
    if (m_value == eRequestTimeFilterFastProperty::RequestTimeFilterFastProperty_FARES) s = utility::conversions::to_string_t("fares");

    multipart->add(ModelBase::toHttpContent(namePrefix, s));
}

bool RequestTimeFilterFastProperty::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
{
    bool ok = true;
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }
    {
        utility::string_t s;
        ok = ModelBase::fromHttpContent(multipart->getContent(namePrefix), s);
        eRequestTimeFilterFastProperty v;

        
        if (s == utility::conversions::to_string_t("travel_time")) v = eRequestTimeFilterFastProperty::RequestTimeFilterFastProperty_TRAVEL_TIME;
        if (s == utility::conversions::to_string_t("fares")) v = eRequestTimeFilterFastProperty::RequestTimeFilterFastProperty_FARES;

        setValue(v);
    }
    return ok;
}

RequestTimeFilterFastProperty::eRequestTimeFilterFastProperty RequestTimeFilterFastProperty::getValue() const
{
   return m_value;
}

void RequestTimeFilterFastProperty::setValue(RequestTimeFilterFastProperty::eRequestTimeFilterFastProperty const value)
{
   m_value = value;
}


}
}
}
}


