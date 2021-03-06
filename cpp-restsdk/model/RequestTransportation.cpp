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



#include "RequestTransportation.h"

namespace org {
namespace openapitools {
namespace client {
namespace model {




RequestTransportation::RequestTransportation()
{
    m_Type = utility::conversions::to_string_t("");
    m_TypeIsSet = false;
    m_Pt_change_delay = 0;
    m_Pt_change_delayIsSet = false;
    m_Walking_time = 0;
    m_Walking_timeIsSet = false;
    m_Driving_time_to_station = 0;
    m_Driving_time_to_stationIsSet = false;
    m_Parking_time = 0;
    m_Parking_timeIsSet = false;
    m_Boarding_time = 0;
    m_Boarding_timeIsSet = false;
}

RequestTransportation::~RequestTransportation()
{
}

void RequestTransportation::validate()
{
    // TODO: implement validation
}

web::json::value RequestTransportation::toJson() const
{

    web::json::value val = web::json::value::object();
    
    if(m_TypeIsSet)
    {
        val[utility::conversions::to_string_t("type")] = ModelBase::toJson(m_Type);
    }
    if(m_Pt_change_delayIsSet)
    {
        val[utility::conversions::to_string_t("pt_change_delay")] = ModelBase::toJson(m_Pt_change_delay);
    }
    if(m_Walking_timeIsSet)
    {
        val[utility::conversions::to_string_t("walking_time")] = ModelBase::toJson(m_Walking_time);
    }
    if(m_Driving_time_to_stationIsSet)
    {
        val[utility::conversions::to_string_t("driving_time_to_station")] = ModelBase::toJson(m_Driving_time_to_station);
    }
    if(m_Parking_timeIsSet)
    {
        val[utility::conversions::to_string_t("parking_time")] = ModelBase::toJson(m_Parking_time);
    }
    if(m_Boarding_timeIsSet)
    {
        val[utility::conversions::to_string_t("boarding_time")] = ModelBase::toJson(m_Boarding_time);
    }

    return val;
}

bool RequestTransportation::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("type")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("type"));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_type;
            ok &= ModelBase::fromJson(fieldValue, refVal_type);
            setType(refVal_type);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("pt_change_delay")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("pt_change_delay"));
        if(!fieldValue.is_null())
        {
            int32_t refVal_pt_change_delay;
            ok &= ModelBase::fromJson(fieldValue, refVal_pt_change_delay);
            setPtChangeDelay(refVal_pt_change_delay);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("walking_time")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("walking_time"));
        if(!fieldValue.is_null())
        {
            int32_t refVal_walking_time;
            ok &= ModelBase::fromJson(fieldValue, refVal_walking_time);
            setWalkingTime(refVal_walking_time);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("driving_time_to_station")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("driving_time_to_station"));
        if(!fieldValue.is_null())
        {
            int32_t refVal_driving_time_to_station;
            ok &= ModelBase::fromJson(fieldValue, refVal_driving_time_to_station);
            setDrivingTimeToStation(refVal_driving_time_to_station);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("parking_time")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("parking_time"));
        if(!fieldValue.is_null())
        {
            int32_t refVal_parking_time;
            ok &= ModelBase::fromJson(fieldValue, refVal_parking_time);
            setParkingTime(refVal_parking_time);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("boarding_time")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("boarding_time"));
        if(!fieldValue.is_null())
        {
            int32_t refVal_boarding_time;
            ok &= ModelBase::fromJson(fieldValue, refVal_boarding_time);
            setBoardingTime(refVal_boarding_time);
        }
    }
    return ok;
}

void RequestTransportation::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }
    if(m_TypeIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("type"), m_Type));
    }
    if(m_Pt_change_delayIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("pt_change_delay"), m_Pt_change_delay));
    }
    if(m_Walking_timeIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("walking_time"), m_Walking_time));
    }
    if(m_Driving_time_to_stationIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("driving_time_to_station"), m_Driving_time_to_station));
    }
    if(m_Parking_timeIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("parking_time"), m_Parking_time));
    }
    if(m_Boarding_timeIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("boarding_time"), m_Boarding_time));
    }
}

bool RequestTransportation::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
{
    bool ok = true;
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }

    if(multipart->hasContent(utility::conversions::to_string_t("type")))
    {
        utility::string_t refVal_type;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("type")), refVal_type );
        setType(refVal_type);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("pt_change_delay")))
    {
        int32_t refVal_pt_change_delay;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("pt_change_delay")), refVal_pt_change_delay );
        setPtChangeDelay(refVal_pt_change_delay);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("walking_time")))
    {
        int32_t refVal_walking_time;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("walking_time")), refVal_walking_time );
        setWalkingTime(refVal_walking_time);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("driving_time_to_station")))
    {
        int32_t refVal_driving_time_to_station;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("driving_time_to_station")), refVal_driving_time_to_station );
        setDrivingTimeToStation(refVal_driving_time_to_station);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("parking_time")))
    {
        int32_t refVal_parking_time;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("parking_time")), refVal_parking_time );
        setParkingTime(refVal_parking_time);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("boarding_time")))
    {
        int32_t refVal_boarding_time;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("boarding_time")), refVal_boarding_time );
        setBoardingTime(refVal_boarding_time);
    }
    return ok;
}

utility::string_t RequestTransportation::getType() const
{
    return m_Type;
}

void RequestTransportation::setType(const utility::string_t& value)
{
    m_Type = value;
    m_TypeIsSet = true;
}

bool RequestTransportation::typeIsSet() const
{
    return m_TypeIsSet;
}

void RequestTransportation::unsetType()
{
    m_TypeIsSet = false;
}
int32_t RequestTransportation::getPtChangeDelay() const
{
    return m_Pt_change_delay;
}

void RequestTransportation::setPtChangeDelay(int32_t value)
{
    m_Pt_change_delay = value;
    m_Pt_change_delayIsSet = true;
}

bool RequestTransportation::ptChangeDelayIsSet() const
{
    return m_Pt_change_delayIsSet;
}

void RequestTransportation::unsetPt_change_delay()
{
    m_Pt_change_delayIsSet = false;
}
int32_t RequestTransportation::getWalkingTime() const
{
    return m_Walking_time;
}

void RequestTransportation::setWalkingTime(int32_t value)
{
    m_Walking_time = value;
    m_Walking_timeIsSet = true;
}

bool RequestTransportation::walkingTimeIsSet() const
{
    return m_Walking_timeIsSet;
}

void RequestTransportation::unsetWalking_time()
{
    m_Walking_timeIsSet = false;
}
int32_t RequestTransportation::getDrivingTimeToStation() const
{
    return m_Driving_time_to_station;
}

void RequestTransportation::setDrivingTimeToStation(int32_t value)
{
    m_Driving_time_to_station = value;
    m_Driving_time_to_stationIsSet = true;
}

bool RequestTransportation::drivingTimeToStationIsSet() const
{
    return m_Driving_time_to_stationIsSet;
}

void RequestTransportation::unsetDriving_time_to_station()
{
    m_Driving_time_to_stationIsSet = false;
}
int32_t RequestTransportation::getParkingTime() const
{
    return m_Parking_time;
}

void RequestTransportation::setParkingTime(int32_t value)
{
    m_Parking_time = value;
    m_Parking_timeIsSet = true;
}

bool RequestTransportation::parkingTimeIsSet() const
{
    return m_Parking_timeIsSet;
}

void RequestTransportation::unsetParking_time()
{
    m_Parking_timeIsSet = false;
}
int32_t RequestTransportation::getBoardingTime() const
{
    return m_Boarding_time;
}

void RequestTransportation::setBoardingTime(int32_t value)
{
    m_Boarding_time = value;
    m_Boarding_timeIsSet = true;
}

bool RequestTransportation::boardingTimeIsSet() const
{
    return m_Boarding_timeIsSet;
}

void RequestTransportation::unsetBoarding_time()
{
    m_Boarding_timeIsSet = false;
}
}
}
}
}


