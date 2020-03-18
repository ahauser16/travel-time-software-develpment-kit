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



#include "ResponseTransportationMode.h"

namespace org {
namespace openapitools {
namespace client {
namespace model {



ResponseTransportationMode::ResponseTransportationMode()
{
}

ResponseTransportationMode::~ResponseTransportationMode()
{
}

void ResponseTransportationMode::validate()
{
    // TODO: implement validation
}

web::json::value ResponseTransportationMode::toJson() const
{
    web::json::value val = web::json::value::object();

    
    if (m_value == eResponseTransportationMode::ResponseTransportationMode_CAR) val = web::json::value::string(U("car"));
    if (m_value == eResponseTransportationMode::ResponseTransportationMode_PARKING) val = web::json::value::string(U("parking"));
    if (m_value == eResponseTransportationMode::ResponseTransportationMode_BOARDING) val = web::json::value::string(U("boarding"));
    if (m_value == eResponseTransportationMode::ResponseTransportationMode_WALK) val = web::json::value::string(U("walk"));
    if (m_value == eResponseTransportationMode::ResponseTransportationMode_BIKE) val = web::json::value::string(U("bike"));
    if (m_value == eResponseTransportationMode::ResponseTransportationMode_TRAIN) val = web::json::value::string(U("train"));
    if (m_value == eResponseTransportationMode::ResponseTransportationMode_RAIL_NATIONAL) val = web::json::value::string(U("rail_national"));
    if (m_value == eResponseTransportationMode::ResponseTransportationMode_RAIL_OVERGROUND) val = web::json::value::string(U("rail_overground"));
    if (m_value == eResponseTransportationMode::ResponseTransportationMode_RAIL_UNDERGROUND) val = web::json::value::string(U("rail_underground"));
    if (m_value == eResponseTransportationMode::ResponseTransportationMode_RAIL_DLR) val = web::json::value::string(U("rail_dlr"));
    if (m_value == eResponseTransportationMode::ResponseTransportationMode_BUS) val = web::json::value::string(U("bus"));
    if (m_value == eResponseTransportationMode::ResponseTransportationMode_CABLE_CAR) val = web::json::value::string(U("cable_car"));
    if (m_value == eResponseTransportationMode::ResponseTransportationMode_PLANE) val = web::json::value::string(U("plane"));
    if (m_value == eResponseTransportationMode::ResponseTransportationMode_FERRY) val = web::json::value::string(U("ferry"));
    if (m_value == eResponseTransportationMode::ResponseTransportationMode_COACH) val = web::json::value::string(U("coach"));

    return val;
}

bool ResponseTransportationMode::fromJson(const web::json::value& val)
{
    auto s = val.as_string();

    
    if (s == utility::conversions::to_string_t("car")) m_value = eResponseTransportationMode::ResponseTransportationMode_CAR;
    if (s == utility::conversions::to_string_t("parking")) m_value = eResponseTransportationMode::ResponseTransportationMode_PARKING;
    if (s == utility::conversions::to_string_t("boarding")) m_value = eResponseTransportationMode::ResponseTransportationMode_BOARDING;
    if (s == utility::conversions::to_string_t("walk")) m_value = eResponseTransportationMode::ResponseTransportationMode_WALK;
    if (s == utility::conversions::to_string_t("bike")) m_value = eResponseTransportationMode::ResponseTransportationMode_BIKE;
    if (s == utility::conversions::to_string_t("train")) m_value = eResponseTransportationMode::ResponseTransportationMode_TRAIN;
    if (s == utility::conversions::to_string_t("rail_national")) m_value = eResponseTransportationMode::ResponseTransportationMode_RAIL_NATIONAL;
    if (s == utility::conversions::to_string_t("rail_overground")) m_value = eResponseTransportationMode::ResponseTransportationMode_RAIL_OVERGROUND;
    if (s == utility::conversions::to_string_t("rail_underground")) m_value = eResponseTransportationMode::ResponseTransportationMode_RAIL_UNDERGROUND;
    if (s == utility::conversions::to_string_t("rail_dlr")) m_value = eResponseTransportationMode::ResponseTransportationMode_RAIL_DLR;
    if (s == utility::conversions::to_string_t("bus")) m_value = eResponseTransportationMode::ResponseTransportationMode_BUS;
    if (s == utility::conversions::to_string_t("cable_car")) m_value = eResponseTransportationMode::ResponseTransportationMode_CABLE_CAR;
    if (s == utility::conversions::to_string_t("plane")) m_value = eResponseTransportationMode::ResponseTransportationMode_PLANE;
    if (s == utility::conversions::to_string_t("ferry")) m_value = eResponseTransportationMode::ResponseTransportationMode_FERRY;
    if (s == utility::conversions::to_string_t("coach")) m_value = eResponseTransportationMode::ResponseTransportationMode_COACH;
    return true;
}

void ResponseTransportationMode::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }

    utility::string_t s;

    
    if (m_value == eResponseTransportationMode::ResponseTransportationMode_CAR) s = utility::conversions::to_string_t("car");
    if (m_value == eResponseTransportationMode::ResponseTransportationMode_PARKING) s = utility::conversions::to_string_t("parking");
    if (m_value == eResponseTransportationMode::ResponseTransportationMode_BOARDING) s = utility::conversions::to_string_t("boarding");
    if (m_value == eResponseTransportationMode::ResponseTransportationMode_WALK) s = utility::conversions::to_string_t("walk");
    if (m_value == eResponseTransportationMode::ResponseTransportationMode_BIKE) s = utility::conversions::to_string_t("bike");
    if (m_value == eResponseTransportationMode::ResponseTransportationMode_TRAIN) s = utility::conversions::to_string_t("train");
    if (m_value == eResponseTransportationMode::ResponseTransportationMode_RAIL_NATIONAL) s = utility::conversions::to_string_t("rail_national");
    if (m_value == eResponseTransportationMode::ResponseTransportationMode_RAIL_OVERGROUND) s = utility::conversions::to_string_t("rail_overground");
    if (m_value == eResponseTransportationMode::ResponseTransportationMode_RAIL_UNDERGROUND) s = utility::conversions::to_string_t("rail_underground");
    if (m_value == eResponseTransportationMode::ResponseTransportationMode_RAIL_DLR) s = utility::conversions::to_string_t("rail_dlr");
    if (m_value == eResponseTransportationMode::ResponseTransportationMode_BUS) s = utility::conversions::to_string_t("bus");
    if (m_value == eResponseTransportationMode::ResponseTransportationMode_CABLE_CAR) s = utility::conversions::to_string_t("cable_car");
    if (m_value == eResponseTransportationMode::ResponseTransportationMode_PLANE) s = utility::conversions::to_string_t("plane");
    if (m_value == eResponseTransportationMode::ResponseTransportationMode_FERRY) s = utility::conversions::to_string_t("ferry");
    if (m_value == eResponseTransportationMode::ResponseTransportationMode_COACH) s = utility::conversions::to_string_t("coach");

    multipart->add(ModelBase::toHttpContent(namePrefix, s));
}

bool ResponseTransportationMode::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
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
        eResponseTransportationMode v;

        
        if (s == utility::conversions::to_string_t("car")) v = eResponseTransportationMode::ResponseTransportationMode_CAR;
        if (s == utility::conversions::to_string_t("parking")) v = eResponseTransportationMode::ResponseTransportationMode_PARKING;
        if (s == utility::conversions::to_string_t("boarding")) v = eResponseTransportationMode::ResponseTransportationMode_BOARDING;
        if (s == utility::conversions::to_string_t("walk")) v = eResponseTransportationMode::ResponseTransportationMode_WALK;
        if (s == utility::conversions::to_string_t("bike")) v = eResponseTransportationMode::ResponseTransportationMode_BIKE;
        if (s == utility::conversions::to_string_t("train")) v = eResponseTransportationMode::ResponseTransportationMode_TRAIN;
        if (s == utility::conversions::to_string_t("rail_national")) v = eResponseTransportationMode::ResponseTransportationMode_RAIL_NATIONAL;
        if (s == utility::conversions::to_string_t("rail_overground")) v = eResponseTransportationMode::ResponseTransportationMode_RAIL_OVERGROUND;
        if (s == utility::conversions::to_string_t("rail_underground")) v = eResponseTransportationMode::ResponseTransportationMode_RAIL_UNDERGROUND;
        if (s == utility::conversions::to_string_t("rail_dlr")) v = eResponseTransportationMode::ResponseTransportationMode_RAIL_DLR;
        if (s == utility::conversions::to_string_t("bus")) v = eResponseTransportationMode::ResponseTransportationMode_BUS;
        if (s == utility::conversions::to_string_t("cable_car")) v = eResponseTransportationMode::ResponseTransportationMode_CABLE_CAR;
        if (s == utility::conversions::to_string_t("plane")) v = eResponseTransportationMode::ResponseTransportationMode_PLANE;
        if (s == utility::conversions::to_string_t("ferry")) v = eResponseTransportationMode::ResponseTransportationMode_FERRY;
        if (s == utility::conversions::to_string_t("coach")) v = eResponseTransportationMode::ResponseTransportationMode_COACH;

        setValue(v);
    }
    return ok;
}

ResponseTransportationMode::eResponseTransportationMode ResponseTransportationMode::getValue() const
{
   return m_value;
}

void ResponseTransportationMode::setValue(ResponseTransportationMode::eResponseTransportationMode const value)
{
   m_value = value;
}


}
}
}
}


