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



#include "RequestRoutesArrivalSearch.h"

namespace org {
namespace openapitools {
namespace client {
namespace model {




RequestRoutesArrivalSearch::RequestRoutesArrivalSearch()
{
    m_Id = utility::conversions::to_string_t("");
    m_IdIsSet = false;
    m_Departure_location_idsIsSet = false;
    m_Arrival_location_id = utility::conversions::to_string_t("");
    m_Arrival_location_idIsSet = false;
    m_TransportationIsSet = false;
    m_Arrival_time = utility::datetime();
    m_Arrival_timeIsSet = false;
    m_PropertiesIsSet = false;
    m_RangeIsSet = false;
}

RequestRoutesArrivalSearch::~RequestRoutesArrivalSearch()
{
}

void RequestRoutesArrivalSearch::validate()
{
    // TODO: implement validation
}

web::json::value RequestRoutesArrivalSearch::toJson() const
{

    web::json::value val = web::json::value::object();
    
    if(m_IdIsSet)
    {
        val[utility::conversions::to_string_t("id")] = ModelBase::toJson(m_Id);
    }
    if(m_Departure_location_idsIsSet)
    {
        val[utility::conversions::to_string_t("departure_location_ids")] = ModelBase::toJson(m_Departure_location_ids);
    }
    if(m_Arrival_location_idIsSet)
    {
        val[utility::conversions::to_string_t("arrival_location_id")] = ModelBase::toJson(m_Arrival_location_id);
    }
    if(m_TransportationIsSet)
    {
        val[utility::conversions::to_string_t("transportation")] = ModelBase::toJson(m_Transportation);
    }
    if(m_Arrival_timeIsSet)
    {
        val[utility::conversions::to_string_t("arrival_time")] = ModelBase::toJson(m_Arrival_time);
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

bool RequestRoutesArrivalSearch::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("departure_location_ids")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("departure_location_ids"));
        if(!fieldValue.is_null())
        {
            std::vector<utility::string_t> refVal_departure_location_ids;
            ok &= ModelBase::fromJson(fieldValue, refVal_departure_location_ids);
            setDepartureLocationIds(refVal_departure_location_ids);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("arrival_location_id")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("arrival_location_id"));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_arrival_location_id;
            ok &= ModelBase::fromJson(fieldValue, refVal_arrival_location_id);
            setArrivalLocationId(refVal_arrival_location_id);
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
    if(val.has_field(utility::conversions::to_string_t("arrival_time")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("arrival_time"));
        if(!fieldValue.is_null())
        {
            utility::datetime refVal_arrival_time;
            ok &= ModelBase::fromJson(fieldValue, refVal_arrival_time);
            setArrivalTime(refVal_arrival_time);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("properties")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("properties"));
        if(!fieldValue.is_null())
        {
            std::vector<std::shared_ptr<RequestRoutesProperty>> refVal_properties;
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

void RequestRoutesArrivalSearch::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
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
    if(m_Departure_location_idsIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("departure_location_ids"), m_Departure_location_ids));
    }
    if(m_Arrival_location_idIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("arrival_location_id"), m_Arrival_location_id));
    }
    if(m_TransportationIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("transportation"), m_Transportation));
    }
    if(m_Arrival_timeIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("arrival_time"), m_Arrival_time));
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

bool RequestRoutesArrivalSearch::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
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
    if(multipart->hasContent(utility::conversions::to_string_t("departure_location_ids")))
    {
        std::vector<utility::string_t> refVal_departure_location_ids;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("departure_location_ids")), refVal_departure_location_ids );
        setDepartureLocationIds(refVal_departure_location_ids);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("arrival_location_id")))
    {
        utility::string_t refVal_arrival_location_id;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("arrival_location_id")), refVal_arrival_location_id );
        setArrivalLocationId(refVal_arrival_location_id);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("transportation")))
    {
        std::shared_ptr<RequestTransportation> refVal_transportation;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("transportation")), refVal_transportation );
        setTransportation(refVal_transportation);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("arrival_time")))
    {
        utility::datetime refVal_arrival_time;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("arrival_time")), refVal_arrival_time );
        setArrivalTime(refVal_arrival_time);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("properties")))
    {
        std::vector<std::shared_ptr<RequestRoutesProperty>> refVal_properties;
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

utility::string_t RequestRoutesArrivalSearch::getId() const
{
    return m_Id;
}

void RequestRoutesArrivalSearch::setId(const utility::string_t& value)
{
    m_Id = value;
    m_IdIsSet = true;
}

bool RequestRoutesArrivalSearch::idIsSet() const
{
    return m_IdIsSet;
}

void RequestRoutesArrivalSearch::unsetId()
{
    m_IdIsSet = false;
}
std::vector<utility::string_t>& RequestRoutesArrivalSearch::getDepartureLocationIds()
{
    return m_Departure_location_ids;
}

void RequestRoutesArrivalSearch::setDepartureLocationIds(const std::vector<utility::string_t>& value)
{
    m_Departure_location_ids = value;
    m_Departure_location_idsIsSet = true;
}

bool RequestRoutesArrivalSearch::departureLocationIdsIsSet() const
{
    return m_Departure_location_idsIsSet;
}

void RequestRoutesArrivalSearch::unsetDeparture_location_ids()
{
    m_Departure_location_idsIsSet = false;
}
utility::string_t RequestRoutesArrivalSearch::getArrivalLocationId() const
{
    return m_Arrival_location_id;
}

void RequestRoutesArrivalSearch::setArrivalLocationId(const utility::string_t& value)
{
    m_Arrival_location_id = value;
    m_Arrival_location_idIsSet = true;
}

bool RequestRoutesArrivalSearch::arrivalLocationIdIsSet() const
{
    return m_Arrival_location_idIsSet;
}

void RequestRoutesArrivalSearch::unsetArrival_location_id()
{
    m_Arrival_location_idIsSet = false;
}
std::shared_ptr<RequestTransportation> RequestRoutesArrivalSearch::getTransportation() const
{
    return m_Transportation;
}

void RequestRoutesArrivalSearch::setTransportation(const std::shared_ptr<RequestTransportation>& value)
{
    m_Transportation = value;
    m_TransportationIsSet = true;
}

bool RequestRoutesArrivalSearch::transportationIsSet() const
{
    return m_TransportationIsSet;
}

void RequestRoutesArrivalSearch::unsetTransportation()
{
    m_TransportationIsSet = false;
}
utility::datetime RequestRoutesArrivalSearch::getArrivalTime() const
{
    return m_Arrival_time;
}

void RequestRoutesArrivalSearch::setArrivalTime(const utility::datetime& value)
{
    m_Arrival_time = value;
    m_Arrival_timeIsSet = true;
}

bool RequestRoutesArrivalSearch::arrivalTimeIsSet() const
{
    return m_Arrival_timeIsSet;
}

void RequestRoutesArrivalSearch::unsetArrival_time()
{
    m_Arrival_timeIsSet = false;
}
std::vector<std::shared_ptr<RequestRoutesProperty>>& RequestRoutesArrivalSearch::getProperties()
{
    return m_Properties;
}

void RequestRoutesArrivalSearch::setProperties(const std::vector<std::shared_ptr<RequestRoutesProperty>>& value)
{
    m_Properties = value;
    m_PropertiesIsSet = true;
}

bool RequestRoutesArrivalSearch::propertiesIsSet() const
{
    return m_PropertiesIsSet;
}

void RequestRoutesArrivalSearch::unsetProperties()
{
    m_PropertiesIsSet = false;
}
std::shared_ptr<RequestRangeFull> RequestRoutesArrivalSearch::getRange() const
{
    return m_Range;
}

void RequestRoutesArrivalSearch::setRange(const std::shared_ptr<RequestRangeFull>& value)
{
    m_Range = value;
    m_RangeIsSet = true;
}

bool RequestRoutesArrivalSearch::rangeIsSet() const
{
    return m_RangeIsSet;
}

void RequestRoutesArrivalSearch::unsetRange()
{
    m_RangeIsSet = false;
}
}
}
}
}


