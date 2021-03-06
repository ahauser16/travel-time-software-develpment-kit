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
 * RequestTimeFilterFastArrivalOneToManySearch.h
 *
 * 
 */

#ifndef RequestTimeFilterFastArrivalOneToManySearch_H_
#define RequestTimeFilterFastArrivalOneToManySearch_H_



#include "RequestTimeFilterFastProperty.h"
#include <string>
#include "RequestArrivalTimePeriod.h"
#include "RequestTransportationFast.h"
#include <vector>
#include <memory>
#include <boost/property_tree/ptree.hpp>

namespace org {
namespace openapitools {
namespace server {
namespace model {

/// <summary>
/// 
/// </summary>
class  RequestTimeFilterFastArrivalOneToManySearch 
{
public:
    RequestTimeFilterFastArrivalOneToManySearch();
    virtual ~RequestTimeFilterFastArrivalOneToManySearch();
    
    std::string toJsonString(bool prettyJson = false);
    void fromJsonString(std::string const& jsonString);
    boost::property_tree::ptree toPropertyTree();
    void fromPropertyTree(boost::property_tree::ptree const& pt);

    /////////////////////////////////////////////
    /// RequestTimeFilterFastArrivalOneToManySearch members

    /// <summary>
    /// 
    /// </summary>
    std::string getId() const;
    void setId(std::string value);

    /// <summary>
    /// 
    /// </summary>
    std::string getDepartureLocationId() const;
    void setDepartureLocationId(std::string value);

    /// <summary>
    /// 
    /// </summary>
    std::vector<std::string> getArrivalLocationIds() const;
    void setArrivalLocationIds(std::vector<std::string> value);

    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<RequestTransportationFast> getTransportation() const;
    void setTransportation(std::shared_ptr<RequestTransportationFast> value);

    /// <summary>
    /// 
    /// </summary>
    int32_t getTravelTime() const;
    void setTravelTime(int32_t value);

    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<RequestArrivalTimePeriod> getArrivalTimePeriod() const;
    void setArrivalTimePeriod(std::shared_ptr<RequestArrivalTimePeriod> value);

    /// <summary>
    /// 
    /// </summary>
    std::vector<std::shared_ptr<RequestTimeFilterFastProperty>> getProperties() const;
    void setProperties(std::vector<std::shared_ptr<RequestTimeFilterFastProperty>> value);
protected:
    std::string m_Id;
    std::string m_Departure_location_id;
    std::vector<std::string> m_Arrival_location_ids;
    std::shared_ptr<RequestTransportationFast> m_Transportation;
    int32_t m_Travel_time;
    std::shared_ptr<RequestArrivalTimePeriod> m_Arrival_time_period;
    std::vector<std::shared_ptr<RequestTimeFilterFastProperty>> m_Properties;
};

}
}
}
}

#endif /* RequestTimeFilterFastArrivalOneToManySearch_H_ */
