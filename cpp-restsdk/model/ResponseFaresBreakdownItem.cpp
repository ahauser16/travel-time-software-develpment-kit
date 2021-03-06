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



#include "ResponseFaresBreakdownItem.h"

namespace org {
namespace openapitools {
namespace client {
namespace model {




ResponseFaresBreakdownItem::ResponseFaresBreakdownItem()
{
    m_ModesIsSet = false;
    m_Route_part_idsIsSet = false;
    m_TicketsIsSet = false;
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
    
    if(m_ModesIsSet)
    {
        val[utility::conversions::to_string_t("modes")] = ModelBase::toJson(m_Modes);
    }
    if(m_Route_part_idsIsSet)
    {
        val[utility::conversions::to_string_t("route_part_ids")] = ModelBase::toJson(m_Route_part_ids);
    }
    if(m_TicketsIsSet)
    {
        val[utility::conversions::to_string_t("tickets")] = ModelBase::toJson(m_Tickets);
    }

    return val;
}

bool ResponseFaresBreakdownItem::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("modes")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("modes"));
        if(!fieldValue.is_null())
        {
            std::vector<std::shared_ptr<ResponseTransportationMode>> refVal_modes;
            ok &= ModelBase::fromJson(fieldValue, refVal_modes);
            setModes(refVal_modes);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("route_part_ids")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("route_part_ids"));
        if(!fieldValue.is_null())
        {
            std::vector<int32_t> refVal_route_part_ids;
            ok &= ModelBase::fromJson(fieldValue, refVal_route_part_ids);
            setRoutePartIds(refVal_route_part_ids);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("tickets")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("tickets"));
        if(!fieldValue.is_null())
        {
            std::vector<std::shared_ptr<ResponseFareTicket>> refVal_tickets;
            ok &= ModelBase::fromJson(fieldValue, refVal_tickets);
            setTickets(refVal_tickets);
        }
    }
    return ok;
}

void ResponseFaresBreakdownItem::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }
    if(m_ModesIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("modes"), m_Modes));
    }
    if(m_Route_part_idsIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("route_part_ids"), m_Route_part_ids));
    }
    if(m_TicketsIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("tickets"), m_Tickets));
    }
}

bool ResponseFaresBreakdownItem::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
{
    bool ok = true;
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }

    if(multipart->hasContent(utility::conversions::to_string_t("modes")))
    {
        std::vector<std::shared_ptr<ResponseTransportationMode>> refVal_modes;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("modes")), refVal_modes );
        setModes(refVal_modes);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("route_part_ids")))
    {
        std::vector<int32_t> refVal_route_part_ids;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("route_part_ids")), refVal_route_part_ids );
        setRoutePartIds(refVal_route_part_ids);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("tickets")))
    {
        std::vector<std::shared_ptr<ResponseFareTicket>> refVal_tickets;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("tickets")), refVal_tickets );
        setTickets(refVal_tickets);
    }
    return ok;
}

std::vector<std::shared_ptr<ResponseTransportationMode>>& ResponseFaresBreakdownItem::getModes()
{
    return m_Modes;
}

void ResponseFaresBreakdownItem::setModes(const std::vector<std::shared_ptr<ResponseTransportationMode>>& value)
{
    m_Modes = value;
    m_ModesIsSet = true;
}

bool ResponseFaresBreakdownItem::modesIsSet() const
{
    return m_ModesIsSet;
}

void ResponseFaresBreakdownItem::unsetModes()
{
    m_ModesIsSet = false;
}
std::vector<int32_t>& ResponseFaresBreakdownItem::getRoutePartIds()
{
    return m_Route_part_ids;
}

void ResponseFaresBreakdownItem::setRoutePartIds(std::vector<int32_t> value)
{
    m_Route_part_ids = value;
    m_Route_part_idsIsSet = true;
}

bool ResponseFaresBreakdownItem::routePartIdsIsSet() const
{
    return m_Route_part_idsIsSet;
}

void ResponseFaresBreakdownItem::unsetRoute_part_ids()
{
    m_Route_part_idsIsSet = false;
}
std::vector<std::shared_ptr<ResponseFareTicket>>& ResponseFaresBreakdownItem::getTickets()
{
    return m_Tickets;
}

void ResponseFaresBreakdownItem::setTickets(const std::vector<std::shared_ptr<ResponseFareTicket>>& value)
{
    m_Tickets = value;
    m_TicketsIsSet = true;
}

bool ResponseFaresBreakdownItem::ticketsIsSet() const
{
    return m_TicketsIsSet;
}

void ResponseFaresBreakdownItem::unsetTickets()
{
    m_TicketsIsSet = false;
}
}
}
}
}


