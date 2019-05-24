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


#include "ResponseFareTicket.h"

namespace org {
namespace openapitools {
namespace server {
namespace model {

ResponseFareTicket::ResponseFareTicket()
{
    m_Type = "";
    m_Price = 0.0;
    m_Currency = "";
    
}

ResponseFareTicket::~ResponseFareTicket()
{
}

void ResponseFareTicket::validate()
{
    // TODO: implement validation
}

void to_json(nlohmann::json& j, const ResponseFareTicket& o)
{
    j = nlohmann::json();
    j["type"] = o.m_Type;
    j["price"] = o.m_Price;
    j["currency"] = o.m_Currency;
}

void from_json(const nlohmann::json& j, ResponseFareTicket& o)
{
    j.at("type").get_to(o.m_Type);
    j.at("price").get_to(o.m_Price);
    j.at("currency").get_to(o.m_Currency);
}

std::string ResponseFareTicket::getType() const
{
    return m_Type;
}
void ResponseFareTicket::setType(std::string const& value)
{
    m_Type = value;
    
}
double ResponseFareTicket::getPrice() const
{
    return m_Price;
}
void ResponseFareTicket::setPrice(double const value)
{
    m_Price = value;
    
}
std::string ResponseFareTicket::getCurrency() const
{
    return m_Currency;
}
void ResponseFareTicket::setCurrency(std::string const& value)
{
    m_Currency = value;
    
}

}
}
}
}

