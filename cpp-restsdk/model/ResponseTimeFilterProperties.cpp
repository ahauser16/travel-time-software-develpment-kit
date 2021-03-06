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



#include "ResponseTimeFilterProperties.h"

namespace org {
namespace openapitools {
namespace client {
namespace model {




ResponseTimeFilterProperties::ResponseTimeFilterProperties()
{
    m_Travel_time = 0;
    m_Travel_timeIsSet = false;
    m_Distance = 0;
    m_DistanceIsSet = false;
    m_Distance_breakdownIsSet = false;
    m_FaresIsSet = false;
    m_RouteIsSet = false;
}

ResponseTimeFilterProperties::~ResponseTimeFilterProperties()
{
}

void ResponseTimeFilterProperties::validate()
{
    // TODO: implement validation
}

web::json::value ResponseTimeFilterProperties::toJson() const
{

    web::json::value val = web::json::value::object();
    
    if(m_Travel_timeIsSet)
    {
        val[utility::conversions::to_string_t("travel_time")] = ModelBase::toJson(m_Travel_time);
    }
    if(m_DistanceIsSet)
    {
        val[utility::conversions::to_string_t("distance")] = ModelBase::toJson(m_Distance);
    }
    if(m_Distance_breakdownIsSet)
    {
        val[utility::conversions::to_string_t("distance_breakdown")] = ModelBase::toJson(m_Distance_breakdown);
    }
    if(m_FaresIsSet)
    {
        val[utility::conversions::to_string_t("fares")] = ModelBase::toJson(m_Fares);
    }
    if(m_RouteIsSet)
    {
        val[utility::conversions::to_string_t("route")] = ModelBase::toJson(m_Route);
    }

    return val;
}

bool ResponseTimeFilterProperties::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("travel_time")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("travel_time"));
        if(!fieldValue.is_null())
        {
            int32_t refVal_travel_time;
            ok &= ModelBase::fromJson(fieldValue, refVal_travel_time);
            setTravelTime(refVal_travel_time);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("distance")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("distance"));
        if(!fieldValue.is_null())
        {
            int32_t refVal_distance;
            ok &= ModelBase::fromJson(fieldValue, refVal_distance);
            setDistance(refVal_distance);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("distance_breakdown")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("distance_breakdown"));
        if(!fieldValue.is_null())
        {
            std::vector<std::shared_ptr<ResponseDistanceBreakdownItem>> refVal_distance_breakdown;
            ok &= ModelBase::fromJson(fieldValue, refVal_distance_breakdown);
            setDistanceBreakdown(refVal_distance_breakdown);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("fares")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("fares"));
        if(!fieldValue.is_null())
        {
            std::shared_ptr<ResponseFares> refVal_fares;
            ok &= ModelBase::fromJson(fieldValue, refVal_fares);
            setFares(refVal_fares);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("route")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("route"));
        if(!fieldValue.is_null())
        {
            std::shared_ptr<ResponseRoute> refVal_route;
            ok &= ModelBase::fromJson(fieldValue, refVal_route);
            setRoute(refVal_route);
        }
    }
    return ok;
}

void ResponseTimeFilterProperties::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }
    if(m_Travel_timeIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("travel_time"), m_Travel_time));
    }
    if(m_DistanceIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("distance"), m_Distance));
    }
    if(m_Distance_breakdownIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("distance_breakdown"), m_Distance_breakdown));
    }
    if(m_FaresIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("fares"), m_Fares));
    }
    if(m_RouteIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("route"), m_Route));
    }
}

bool ResponseTimeFilterProperties::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
{
    bool ok = true;
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }

    if(multipart->hasContent(utility::conversions::to_string_t("travel_time")))
    {
        int32_t refVal_travel_time;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("travel_time")), refVal_travel_time );
        setTravelTime(refVal_travel_time);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("distance")))
    {
        int32_t refVal_distance;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("distance")), refVal_distance );
        setDistance(refVal_distance);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("distance_breakdown")))
    {
        std::vector<std::shared_ptr<ResponseDistanceBreakdownItem>> refVal_distance_breakdown;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("distance_breakdown")), refVal_distance_breakdown );
        setDistanceBreakdown(refVal_distance_breakdown);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("fares")))
    {
        std::shared_ptr<ResponseFares> refVal_fares;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("fares")), refVal_fares );
        setFares(refVal_fares);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("route")))
    {
        std::shared_ptr<ResponseRoute> refVal_route;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("route")), refVal_route );
        setRoute(refVal_route);
    }
    return ok;
}

int32_t ResponseTimeFilterProperties::getTravelTime() const
{
    return m_Travel_time;
}

void ResponseTimeFilterProperties::setTravelTime(int32_t value)
{
    m_Travel_time = value;
    m_Travel_timeIsSet = true;
}

bool ResponseTimeFilterProperties::travelTimeIsSet() const
{
    return m_Travel_timeIsSet;
}

void ResponseTimeFilterProperties::unsetTravel_time()
{
    m_Travel_timeIsSet = false;
}
int32_t ResponseTimeFilterProperties::getDistance() const
{
    return m_Distance;
}

void ResponseTimeFilterProperties::setDistance(int32_t value)
{
    m_Distance = value;
    m_DistanceIsSet = true;
}

bool ResponseTimeFilterProperties::distanceIsSet() const
{
    return m_DistanceIsSet;
}

void ResponseTimeFilterProperties::unsetDistance()
{
    m_DistanceIsSet = false;
}
std::vector<std::shared_ptr<ResponseDistanceBreakdownItem>>& ResponseTimeFilterProperties::getDistanceBreakdown()
{
    return m_Distance_breakdown;
}

void ResponseTimeFilterProperties::setDistanceBreakdown(const std::vector<std::shared_ptr<ResponseDistanceBreakdownItem>>& value)
{
    m_Distance_breakdown = value;
    m_Distance_breakdownIsSet = true;
}

bool ResponseTimeFilterProperties::distanceBreakdownIsSet() const
{
    return m_Distance_breakdownIsSet;
}

void ResponseTimeFilterProperties::unsetDistance_breakdown()
{
    m_Distance_breakdownIsSet = false;
}
std::shared_ptr<ResponseFares> ResponseTimeFilterProperties::getFares() const
{
    return m_Fares;
}

void ResponseTimeFilterProperties::setFares(const std::shared_ptr<ResponseFares>& value)
{
    m_Fares = value;
    m_FaresIsSet = true;
}

bool ResponseTimeFilterProperties::faresIsSet() const
{
    return m_FaresIsSet;
}

void ResponseTimeFilterProperties::unsetFares()
{
    m_FaresIsSet = false;
}
std::shared_ptr<ResponseRoute> ResponseTimeFilterProperties::getRoute() const
{
    return m_Route;
}

void ResponseTimeFilterProperties::setRoute(const std::shared_ptr<ResponseRoute>& value)
{
    m_Route = value;
    m_RouteIsSet = true;
}

bool ResponseTimeFilterProperties::routeIsSet() const
{
    return m_RouteIsSet;
}

void ResponseTimeFilterProperties::unsetRoute()
{
    m_RouteIsSet = false;
}
}
}
}
}


