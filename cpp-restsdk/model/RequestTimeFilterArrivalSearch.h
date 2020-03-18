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

/*
 * RequestTimeFilterArrivalSearch.h
 *
 * 
 */

#ifndef ORG_OPENAPITOOLS_CLIENT_MODEL_RequestTimeFilterArrivalSearch_H_
#define ORG_OPENAPITOOLS_CLIENT_MODEL_RequestTimeFilterArrivalSearch_H_


#include "../ModelBase.h"

#include "RequestRangeFull.h"
#include "RequestTimeFilterProperty.h"
#include "RequestTransportation.h"
#include <cpprest/details/basic_types.h>
#include <vector>

namespace org {
namespace openapitools {
namespace client {
namespace model {


/// <summary>
/// 
/// </summary>
class  RequestTimeFilterArrivalSearch
    : public ModelBase
{
public:
    RequestTimeFilterArrivalSearch();
    virtual ~RequestTimeFilterArrivalSearch();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    void toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) const override;
    bool fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) override;

    /////////////////////////////////////////////
    /// RequestTimeFilterArrivalSearch members

    /// <summary>
    /// 
    /// </summary>
    utility::string_t getId() const;
    bool idIsSet() const;
    void unsetId();

    void setId(const utility::string_t& value);

    /// <summary>
    /// 
    /// </summary>
    std::vector<utility::string_t>& getDepartureLocationIds();
    bool departureLocationIdsIsSet() const;
    void unsetDeparture_location_ids();

    void setDepartureLocationIds(const std::vector<utility::string_t>& value);

    /// <summary>
    /// 
    /// </summary>
    utility::string_t getArrivalLocationId() const;
    bool arrivalLocationIdIsSet() const;
    void unsetArrival_location_id();

    void setArrivalLocationId(const utility::string_t& value);

    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<RequestTransportation> getTransportation() const;
    bool transportationIsSet() const;
    void unsetTransportation();

    void setTransportation(const std::shared_ptr<RequestTransportation>& value);

    /// <summary>
    /// 
    /// </summary>
    int32_t getTravelTime() const;
    bool travelTimeIsSet() const;
    void unsetTravel_time();

    void setTravelTime(int32_t value);

    /// <summary>
    /// 
    /// </summary>
    utility::datetime getArrivalTime() const;
    bool arrivalTimeIsSet() const;
    void unsetArrival_time();

    void setArrivalTime(const utility::datetime& value);

    /// <summary>
    /// 
    /// </summary>
    std::vector<std::shared_ptr<RequestTimeFilterProperty>>& getProperties();
    bool propertiesIsSet() const;
    void unsetProperties();

    void setProperties(const std::vector<std::shared_ptr<RequestTimeFilterProperty>>& value);

    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<RequestRangeFull> getRange() const;
    bool rangeIsSet() const;
    void unsetRange();

    void setRange(const std::shared_ptr<RequestRangeFull>& value);


protected:
    utility::string_t m_Id;
    bool m_IdIsSet;
    std::vector<utility::string_t> m_Departure_location_ids;
    bool m_Departure_location_idsIsSet;
    utility::string_t m_Arrival_location_id;
    bool m_Arrival_location_idIsSet;
    std::shared_ptr<RequestTransportation> m_Transportation;
    bool m_TransportationIsSet;
    int32_t m_Travel_time;
    bool m_Travel_timeIsSet;
    utility::datetime m_Arrival_time;
    bool m_Arrival_timeIsSet;
    std::vector<std::shared_ptr<RequestTimeFilterProperty>> m_Properties;
    bool m_PropertiesIsSet;
    std::shared_ptr<RequestRangeFull> m_Range;
    bool m_RangeIsSet;
};


}
}
}
}

#endif /* ORG_OPENAPITOOLS_CLIENT_MODEL_RequestTimeFilterArrivalSearch_H_ */
