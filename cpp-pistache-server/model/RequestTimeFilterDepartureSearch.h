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
/*
 * RequestTimeFilterDepartureSearch.h
 *
 * 
 */

#ifndef RequestTimeFilterDepartureSearch_H_
#define RequestTimeFilterDepartureSearch_H_


#include "RequestRangeFull.h"
#include "RequestTimeFilterProperty.h"
#include <string>
#include "RequestTransportation.h"
#include <vector>
#include <nlohmann/json.hpp>

namespace org {
namespace openapitools {
namespace server {
namespace model {

/// <summary>
/// 
/// </summary>
class  RequestTimeFilterDepartureSearch
{
public:
    RequestTimeFilterDepartureSearch();
    virtual ~RequestTimeFilterDepartureSearch();

    void validate();

    /////////////////////////////////////////////
    /// RequestTimeFilterDepartureSearch members

    /// <summary>
    /// 
    /// </summary>
    std::string getId() const;
    void setId(std::string const& value);
        /// <summary>
    /// 
    /// </summary>
    std::string getDepartureLocationId() const;
    void setDepartureLocationId(std::string const& value);
        /// <summary>
    /// 
    /// </summary>
    std::vector<std::string>& getArrivalLocationIds();
        /// <summary>
    /// 
    /// </summary>
    RequestTransportation getTransportation() const;
    void setTransportation(RequestTransportation const& value);
        /// <summary>
    /// 
    /// </summary>
    int32_t getTravelTime() const;
    void setTravelTime(int32_t const value);
        /// <summary>
    /// 
    /// </summary>
    std::string getDepartureTime() const;
    void setDepartureTime(std::string const& value);
        /// <summary>
    /// 
    /// </summary>
    std::vector<RequestTimeFilterProperty>& getProperties();
        /// <summary>
    /// 
    /// </summary>
    RequestRangeFull getRange() const;
    void setRange(RequestRangeFull const& value);
    bool rangeIsSet() const;
    void unsetRange();

    friend void to_json(nlohmann::json& j, const RequestTimeFilterDepartureSearch& o);
    friend void from_json(const nlohmann::json& j, RequestTimeFilterDepartureSearch& o);
protected:
    std::string m_Id;

    std::string m_Departure_location_id;

    std::vector<std::string> m_Arrival_location_ids;

    RequestTransportation m_Transportation;

    int32_t m_Travel_time;

    std::string m_Departure_time;

    std::vector<RequestTimeFilterProperty> m_Properties;

    RequestRangeFull m_Range;
    bool m_RangeIsSet;
};

}
}
}
}

#endif /* RequestTimeFilterDepartureSearch_H_ */
