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



#include "RequestTimeFilterProperty.h"

namespace org {
namespace openapitools {
namespace client {
namespace model {



RequestTimeFilterProperty::RequestTimeFilterProperty()
{
}

RequestTimeFilterProperty::~RequestTimeFilterProperty()
{
}

void RequestTimeFilterProperty::validate()
{
    // TODO: implement validation
}

web::json::value RequestTimeFilterProperty::toJson() const
{
    web::json::value val = web::json::value::object();

    
    if (m_value == eRequestTimeFilterProperty::RequestTimeFilterProperty_TRAVEL_TIME) val = web::json::value::string(U("travel_time"));
    if (m_value == eRequestTimeFilterProperty::RequestTimeFilterProperty_DISTANCE) val = web::json::value::string(U("distance"));
    if (m_value == eRequestTimeFilterProperty::RequestTimeFilterProperty_DISTANCE_BREAKDOWN) val = web::json::value::string(U("distance_breakdown"));
    if (m_value == eRequestTimeFilterProperty::RequestTimeFilterProperty_FARES) val = web::json::value::string(U("fares"));
    if (m_value == eRequestTimeFilterProperty::RequestTimeFilterProperty_ROUTE) val = web::json::value::string(U("route"));

    return val;
}

void RequestTimeFilterProperty::fromJson(const web::json::value& val)
{
    auto s = val.as_string();

    
    if (s == utility::conversions::to_string_t("travel_time")) m_value = eRequestTimeFilterProperty::RequestTimeFilterProperty_TRAVEL_TIME;
    if (s == utility::conversions::to_string_t("distance")) m_value = eRequestTimeFilterProperty::RequestTimeFilterProperty_DISTANCE;
    if (s == utility::conversions::to_string_t("distance_breakdown")) m_value = eRequestTimeFilterProperty::RequestTimeFilterProperty_DISTANCE_BREAKDOWN;
    if (s == utility::conversions::to_string_t("fares")) m_value = eRequestTimeFilterProperty::RequestTimeFilterProperty_FARES;
    if (s == utility::conversions::to_string_t("route")) m_value = eRequestTimeFilterProperty::RequestTimeFilterProperty_ROUTE;
}

void RequestTimeFilterProperty::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }

    utility::string_t s;

    
    if (m_value == eRequestTimeFilterProperty::RequestTimeFilterProperty_TRAVEL_TIME) s = utility::conversions::to_string_t("travel_time");
    if (m_value == eRequestTimeFilterProperty::RequestTimeFilterProperty_DISTANCE) s = utility::conversions::to_string_t("distance");
    if (m_value == eRequestTimeFilterProperty::RequestTimeFilterProperty_DISTANCE_BREAKDOWN) s = utility::conversions::to_string_t("distance_breakdown");
    if (m_value == eRequestTimeFilterProperty::RequestTimeFilterProperty_FARES) s = utility::conversions::to_string_t("fares");
    if (m_value == eRequestTimeFilterProperty::RequestTimeFilterProperty_ROUTE) s = utility::conversions::to_string_t("route");

    multipart->add(ModelBase::toHttpContent(namePrefix, s));
}

void RequestTimeFilterProperty::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }

    {
        utility::string_t s;
        s = ModelBase::stringFromHttpContent(multipart->getContent(namePrefix));
        eRequestTimeFilterProperty v;
        
        
        if (s == utility::conversions::to_string_t("travel_time")) v = eRequestTimeFilterProperty::RequestTimeFilterProperty_TRAVEL_TIME;
        if (s == utility::conversions::to_string_t("distance")) v = eRequestTimeFilterProperty::RequestTimeFilterProperty_DISTANCE;
        if (s == utility::conversions::to_string_t("distance_breakdown")) v = eRequestTimeFilterProperty::RequestTimeFilterProperty_DISTANCE_BREAKDOWN;
        if (s == utility::conversions::to_string_t("fares")) v = eRequestTimeFilterProperty::RequestTimeFilterProperty_FARES;
        if (s == utility::conversions::to_string_t("route")) v = eRequestTimeFilterProperty::RequestTimeFilterProperty_ROUTE;

        setValue(v);
    }
}

RequestTimeFilterProperty::eRequestTimeFilterProperty RequestTimeFilterProperty::getValue() const
{
   return m_value;
}

void RequestTimeFilterProperty::setValue(RequestTimeFilterProperty::eRequestTimeFilterProperty const value)
{
   m_value = value;
}


}
}
}
}


