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



#include "RequestTimeFilterPostcodeSectorsDepartureSearch.h"

namespace org {
namespace openapitools {
namespace client {
namespace model {




RequestTimeFilterPostcodeSectorsDepartureSearch::RequestTimeFilterPostcodeSectorsDepartureSearch()
{
    m_Id = utility::conversions::to_string_t("");
    m_IdIsSet = false;
    m_TransportationIsSet = false;
    m_Travel_time = 0;
    m_Travel_timeIsSet = false;
    m_Departure_time = utility::datetime();
    m_Departure_timeIsSet = false;
    m_Reachable_postcodes_threshold = 0.0;
    m_Reachable_postcodes_thresholdIsSet = false;
    m_PropertiesIsSet = false;
    m_RangeIsSet = false;
}

RequestTimeFilterPostcodeSectorsDepartureSearch::~RequestTimeFilterPostcodeSectorsDepartureSearch()
{
}

void RequestTimeFilterPostcodeSectorsDepartureSearch::validate()
{
    // TODO: implement validation
}

web::json::value RequestTimeFilterPostcodeSectorsDepartureSearch::toJson() const
{

    web::json::value val = web::json::value::object();
    
    if(m_IdIsSet)
    {
        val[utility::conversions::to_string_t("id")] = ModelBase::toJson(m_Id);
    }
    if(m_TransportationIsSet)
    {
        val[utility::conversions::to_string_t("transportation")] = ModelBase::toJson(m_Transportation);
    }
    if(m_Travel_timeIsSet)
    {
        val[utility::conversions::to_string_t("travel_time")] = ModelBase::toJson(m_Travel_time);
    }
    if(m_Departure_timeIsSet)
    {
        val[utility::conversions::to_string_t("departure_time")] = ModelBase::toJson(m_Departure_time);
    }
    if(m_Reachable_postcodes_thresholdIsSet)
    {
        val[utility::conversions::to_string_t("reachable_postcodes_threshold")] = ModelBase::toJson(m_Reachable_postcodes_threshold);
    }
    if(m_PropertiesIsSet)
    {
        val[utility::conversions::to_string_t("properties")] = ModelBase::toJson(m_Properties);
    }
    if(m_RangeIsSet)
    {
        val[utility::conversions::to_string_t("range")] = ModelBase::toJson(m_Range);
    }

    return val;
}

bool RequestTimeFilterPostcodeSectorsDepartureSearch::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("id")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("id"));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_id;
            ok &= ModelBase::fromJson(fieldValue, refVal_id);
            setId(refVal_id);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("transportation")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("transportation"));
        if(!fieldValue.is_null())
        {
            std::shared_ptr<RequestTransportation> refVal_transportation;
            ok &= ModelBase::fromJson(fieldValue, refVal_transportation);
            setTransportation(refVal_transportation);
        }
    }
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
    if(val.has_field(utility::conversions::to_string_t("departure_time")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("departure_time"));
        if(!fieldValue.is_null())
        {
            utility::datetime refVal_departure_time;
            ok &= ModelBase::fromJson(fieldValue, refVal_departure_time);
            setDepartureTime(refVal_departure_time);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("reachable_postcodes_threshold")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("reachable_postcodes_threshold"));
        if(!fieldValue.is_null())
        {
            double refVal_reachable_postcodes_threshold;
            ok &= ModelBase::fromJson(fieldValue, refVal_reachable_postcodes_threshold);
            setReachablePostcodesThreshold(refVal_reachable_postcodes_threshold);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("properties")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("properties"));
        if(!fieldValue.is_null())
        {
            std::vector<std::shared_ptr<RequestTimeFilterPostcodeSectorsProperty>> refVal_properties;
            ok &= ModelBase::fromJson(fieldValue, refVal_properties);
            setProperties(refVal_properties);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("range")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("range"));
        if(!fieldValue.is_null())
        {
            std::shared_ptr<RequestRangeFull> refVal_range;
            ok &= ModelBase::fromJson(fieldValue, refVal_range);
            setRange(refVal_range);
        }
    }
    return ok;
}

void RequestTimeFilterPostcodeSectorsDepartureSearch::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }
    if(m_IdIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("id"), m_Id));
    }
    if(m_TransportationIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("transportation"), m_Transportation));
    }
    if(m_Travel_timeIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("travel_time"), m_Travel_time));
    }
    if(m_Departure_timeIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("departure_time"), m_Departure_time));
    }
    if(m_Reachable_postcodes_thresholdIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("reachable_postcodes_threshold"), m_Reachable_postcodes_threshold));
    }
    if(m_PropertiesIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("properties"), m_Properties));
    }
    if(m_RangeIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("range"), m_Range));
    }
}

bool RequestTimeFilterPostcodeSectorsDepartureSearch::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
{
    bool ok = true;
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }

    if(multipart->hasContent(utility::conversions::to_string_t("id")))
    {
        utility::string_t refVal_id;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("id")), refVal_id );
        setId(refVal_id);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("transportation")))
    {
        std::shared_ptr<RequestTransportation> refVal_transportation;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("transportation")), refVal_transportation );
        setTransportation(refVal_transportation);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("travel_time")))
    {
        int32_t refVal_travel_time;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("travel_time")), refVal_travel_time );
        setTravelTime(refVal_travel_time);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("departure_time")))
    {
        utility::datetime refVal_departure_time;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("departure_time")), refVal_departure_time );
        setDepartureTime(refVal_departure_time);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("reachable_postcodes_threshold")))
    {
        double refVal_reachable_postcodes_threshold;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("reachable_postcodes_threshold")), refVal_reachable_postcodes_threshold );
        setReachablePostcodesThreshold(refVal_reachable_postcodes_threshold);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("properties")))
    {
        std::vector<std::shared_ptr<RequestTimeFilterPostcodeSectorsProperty>> refVal_properties;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("properties")), refVal_properties );
        setProperties(refVal_properties);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("range")))
    {
        std::shared_ptr<RequestRangeFull> refVal_range;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("range")), refVal_range );
        setRange(refVal_range);
    }
    return ok;
}

utility::string_t RequestTimeFilterPostcodeSectorsDepartureSearch::getId() const
{
    return m_Id;
}

void RequestTimeFilterPostcodeSectorsDepartureSearch::setId(const utility::string_t& value)
{
    m_Id = value;
    m_IdIsSet = true;
}

bool RequestTimeFilterPostcodeSectorsDepartureSearch::idIsSet() const
{
    return m_IdIsSet;
}

void RequestTimeFilterPostcodeSectorsDepartureSearch::unsetId()
{
    m_IdIsSet = false;
}
std::shared_ptr<RequestTransportation> RequestTimeFilterPostcodeSectorsDepartureSearch::getTransportation() const
{
    return m_Transportation;
}

void RequestTimeFilterPostcodeSectorsDepartureSearch::setTransportation(const std::shared_ptr<RequestTransportation>& value)
{
    m_Transportation = value;
    m_TransportationIsSet = true;
}

bool RequestTimeFilterPostcodeSectorsDepartureSearch::transportationIsSet() const
{
    return m_TransportationIsSet;
}

void RequestTimeFilterPostcodeSectorsDepartureSearch::unsetTransportation()
{
    m_TransportationIsSet = false;
}
int32_t RequestTimeFilterPostcodeSectorsDepartureSearch::getTravelTime() const
{
    return m_Travel_time;
}

void RequestTimeFilterPostcodeSectorsDepartureSearch::setTravelTime(int32_t value)
{
    m_Travel_time = value;
    m_Travel_timeIsSet = true;
}

bool RequestTimeFilterPostcodeSectorsDepartureSearch::travelTimeIsSet() const
{
    return m_Travel_timeIsSet;
}

void RequestTimeFilterPostcodeSectorsDepartureSearch::unsetTravel_time()
{
    m_Travel_timeIsSet = false;
}
utility::datetime RequestTimeFilterPostcodeSectorsDepartureSearch::getDepartureTime() const
{
    return m_Departure_time;
}

void RequestTimeFilterPostcodeSectorsDepartureSearch::setDepartureTime(const utility::datetime& value)
{
    m_Departure_time = value;
    m_Departure_timeIsSet = true;
}

bool RequestTimeFilterPostcodeSectorsDepartureSearch::departureTimeIsSet() const
{
    return m_Departure_timeIsSet;
}

void RequestTimeFilterPostcodeSectorsDepartureSearch::unsetDeparture_time()
{
    m_Departure_timeIsSet = false;
}
double RequestTimeFilterPostcodeSectorsDepartureSearch::getReachablePostcodesThreshold() const
{
    return m_Reachable_postcodes_threshold;
}

void RequestTimeFilterPostcodeSectorsDepartureSearch::setReachablePostcodesThreshold(double value)
{
    m_Reachable_postcodes_threshold = value;
    m_Reachable_postcodes_thresholdIsSet = true;
}

bool RequestTimeFilterPostcodeSectorsDepartureSearch::reachablePostcodesThresholdIsSet() const
{
    return m_Reachable_postcodes_thresholdIsSet;
}

void RequestTimeFilterPostcodeSectorsDepartureSearch::unsetReachable_postcodes_threshold()
{
    m_Reachable_postcodes_thresholdIsSet = false;
}
std::vector<std::shared_ptr<RequestTimeFilterPostcodeSectorsProperty>>& RequestTimeFilterPostcodeSectorsDepartureSearch::getProperties()
{
    return m_Properties;
}

void RequestTimeFilterPostcodeSectorsDepartureSearch::setProperties(const std::vector<std::shared_ptr<RequestTimeFilterPostcodeSectorsProperty>>& value)
{
    m_Properties = value;
    m_PropertiesIsSet = true;
}

bool RequestTimeFilterPostcodeSectorsDepartureSearch::propertiesIsSet() const
{
    return m_PropertiesIsSet;
}

void RequestTimeFilterPostcodeSectorsDepartureSearch::unsetProperties()
{
    m_PropertiesIsSet = false;
}
std::shared_ptr<RequestRangeFull> RequestTimeFilterPostcodeSectorsDepartureSearch::getRange() const
{
    return m_Range;
}

void RequestTimeFilterPostcodeSectorsDepartureSearch::setRange(const std::shared_ptr<RequestRangeFull>& value)
{
    m_Range = value;
    m_RangeIsSet = true;
}

bool RequestTimeFilterPostcodeSectorsDepartureSearch::rangeIsSet() const
{
    return m_RangeIsSet;
}

void RequestTimeFilterPostcodeSectorsDepartureSearch::unsetRange()
{
    m_RangeIsSet = false;
}
}
}
}
}


