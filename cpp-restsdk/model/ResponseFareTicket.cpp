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



#include "ResponseFareTicket.h"

namespace org {
namespace openapitools {
namespace client {
namespace model {




ResponseFareTicket::ResponseFareTicket()
{
    m_Type = utility::conversions::to_string_t("");
    m_Price = 0.0;
    m_Currency = utility::conversions::to_string_t("");
}

ResponseFareTicket::~ResponseFareTicket()
{
}

void ResponseFareTicket::validate()
{
    // TODO: implement validation
}

web::json::value ResponseFareTicket::toJson() const
{
    web::json::value val = web::json::value::object();

    val[utility::conversions::to_string_t("type")] = ModelBase::toJson(m_Type);
    val[utility::conversions::to_string_t("price")] = ModelBase::toJson(m_Price);
    val[utility::conversions::to_string_t("currency")] = ModelBase::toJson(m_Currency);

    return val;
}

void ResponseFareTicket::fromJson(const web::json::value& val)
{
    setType(ModelBase::stringFromJson(val.at(utility::conversions::to_string_t("type"))));
    setPrice(ModelBase::doubleFromJson(val.at(utility::conversions::to_string_t("price"))));
    setCurrency(ModelBase::stringFromJson(val.at(utility::conversions::to_string_t("currency"))));
}

void ResponseFareTicket::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }

    multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("type"), m_Type));
    multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("price"), m_Price));
    multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("currency"), m_Currency));
}

void ResponseFareTicket::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }

    setType(ModelBase::stringFromHttpContent(multipart->getContent(utility::conversions::to_string_t("type"))));
    setPrice(ModelBase::doubleFromHttpContent(multipart->getContent(utility::conversions::to_string_t("price"))));
    setCurrency(ModelBase::stringFromHttpContent(multipart->getContent(utility::conversions::to_string_t("currency"))));
}

utility::string_t ResponseFareTicket::getType() const
{
    return m_Type;
}

void ResponseFareTicket::setType(const utility::string_t& value)
{
    m_Type = value;
    
}

double ResponseFareTicket::getPrice() const
{
    return m_Price;
}

void ResponseFareTicket::setPrice(double value)
{
    m_Price = value;
    
}

utility::string_t ResponseFareTicket::getCurrency() const
{
    return m_Currency;
}

void ResponseFareTicket::setCurrency(const utility::string_t& value)
{
    m_Currency = value;
    
}

}
}
}
}


