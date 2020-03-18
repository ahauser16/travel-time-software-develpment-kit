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



#include "ResponseFaresBreakdownItem.h"

namespace org {
namespace openapitools {
namespace client {
namespace model {




ResponseFaresBreakdownItem::ResponseFaresBreakdownItem()
{
}

ResponseFaresBreakdownItem::~ResponseFaresBreakdownItem()
{
}

void ResponseFaresBreakdownItem::validate()
{
    // TODO: implement validation
}

web::json::value ResponseFaresBreakdownItem::toJson() const
{
    web::json::value val = web::json::value::object();

    {
        std::vector<web::json::value> jsonArray;
        for( auto& item : m_Modes )
        {
            jsonArray.push_back(ModelBase::toJson(item));
        }
        val[utility::conversions::to_string_t("modes")] = web::json::value::array(jsonArray);
    }
    {
        std::vector<web::json::value> jsonArray;
        for( auto& item : m_Route_part_ids )
        {
            jsonArray.push_back(ModelBase::toJson(item));
        }
        val[utility::conversions::to_string_t("route_part_ids")] = web::json::value::array(jsonArray);
    }
    {
        std::vector<web::json::value> jsonArray;
        for( auto& item : m_Tickets )
        {
            jsonArray.push_back(ModelBase::toJson(item));
        }
        val[utility::conversions::to_string_t("tickets")] = web::json::value::array(jsonArray);
    }

    return val;
}

void ResponseFaresBreakdownItem::fromJson(const web::json::value& val)
{
    {
        m_Modes.clear();
        std::vector<web::json::value> jsonArray;
        for( auto& item : val.at(utility::conversions::to_string_t("modes")).as_array() )
        {
            if(item.is_null())
            {
                m_Modes.push_back( std::shared_ptr<ResponseTransportationMode>(nullptr) );
            }
            else
            {
                std::shared_ptr<ResponseTransportationMode> newItem(new ResponseTransportationMode());
                newItem->fromJson(item);
                m_Modes.push_back( newItem );
            }
        }
    }
    {
        m_Route_part_ids.clear();
        std::vector<web::json::value> jsonArray;
        for( auto& item : val.at(utility::conversions::to_string_t("route_part_ids")).as_array() )
        {
            m_Route_part_ids.push_back(ModelBase::int32_tFromJson(item));
        }
    }
    {
        m_Tickets.clear();
        std::vector<web::json::value> jsonArray;
        for( auto& item : val.at(utility::conversions::to_string_t("tickets")).as_array() )
        {
            if(item.is_null())
            {
                m_Tickets.push_back( std::shared_ptr<ResponseFareTicket>(nullptr) );
            }
            else
            {
                std::shared_ptr<ResponseFareTicket> newItem(new ResponseFareTicket());
                newItem->fromJson(item);
                m_Tickets.push_back( newItem );
            }
        }
    }
}

void ResponseFaresBreakdownItem::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }

    {
        std::vector<web::json::value> jsonArray;
        for( auto& item : m_Modes )
        {
            jsonArray.push_back(ModelBase::toJson(item));
        }
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("modes"), web::json::value::array(jsonArray), utility::conversions::to_string_t("application/json")));
            }
    {
        std::vector<web::json::value> jsonArray;
        for( auto& item : m_Route_part_ids )
        {
            jsonArray.push_back(ModelBase::toJson(item));
        }
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("route_part_ids"), web::json::value::array(jsonArray), utility::conversions::to_string_t("application/json")));
            }
    {
        std::vector<web::json::value> jsonArray;
        for( auto& item : m_Tickets )
        {
            jsonArray.push_back(ModelBase::toJson(item));
        }
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("tickets"), web::json::value::array(jsonArray), utility::conversions::to_string_t("application/json")));
            }
}

void ResponseFaresBreakdownItem::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }

    {
        m_Modes.clear();

        web::json::value jsonArray = web::json::value::parse(ModelBase::stringFromHttpContent(multipart->getContent(utility::conversions::to_string_t("modes"))));
        for( auto& item : jsonArray.as_array() )
        {
            if(item.is_null())
            {
                m_Modes.push_back( std::shared_ptr<ResponseTransportationMode>(nullptr) );
            }
            else
            {
                std::shared_ptr<ResponseTransportationMode> newItem(new ResponseTransportationMode());
                newItem->fromJson(item);
                m_Modes.push_back( newItem );
            }
        }
    }
    {
        m_Route_part_ids.clear();

        web::json::value jsonArray = web::json::value::parse(ModelBase::stringFromHttpContent(multipart->getContent(utility::conversions::to_string_t("route_part_ids"))));
        for( auto& item : jsonArray.as_array() )
        {
            m_Route_part_ids.push_back(ModelBase::int32_tFromJson(item));
        }
    }
    {
        m_Tickets.clear();

        web::json::value jsonArray = web::json::value::parse(ModelBase::stringFromHttpContent(multipart->getContent(utility::conversions::to_string_t("tickets"))));
        for( auto& item : jsonArray.as_array() )
        {
            if(item.is_null())
            {
                m_Tickets.push_back( std::shared_ptr<ResponseFareTicket>(nullptr) );
            }
            else
            {
                std::shared_ptr<ResponseFareTicket> newItem(new ResponseFareTicket());
                newItem->fromJson(item);
                m_Tickets.push_back( newItem );
            }
        }
    }
}

std::vector<std::shared_ptr<ResponseTransportationMode>>& ResponseFaresBreakdownItem::getModes()
{
    return m_Modes;
}

void ResponseFaresBreakdownItem::setModes(const std::vector<std::shared_ptr<ResponseTransportationMode>>& value)
{
    m_Modes = value;
    
}

std::vector<int32_t>& ResponseFaresBreakdownItem::getRoutePartIds()
{
    return m_Route_part_ids;
}

void ResponseFaresBreakdownItem::setRoutePartIds(std::vector<int32_t> value)
{
    m_Route_part_ids = value;
    
}

std::vector<std::shared_ptr<ResponseFareTicket>>& ResponseFaresBreakdownItem::getTickets()
{
    return m_Tickets;
}

void ResponseFaresBreakdownItem::setTickets(const std::vector<std::shared_ptr<ResponseFareTicket>>& value)
{
    m_Tickets = value;
    
}

}
}
}
}


