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
 * RequestRoutesDepartureSearch.h
 *
 * 
 */

#ifndef RequestRoutesDepartureSearch_H_
#define RequestRoutesDepartureSearch_H_



#include "RequestRangeFull.h"
#include <string>
#include "RequestRoutesProperty.h"
#include "RequestTransportation.h"
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
class  RequestRoutesDepartureSearch 
{
public:
    RequestRoutesDepartureSearch();
    virtual ~RequestRoutesDepartureSearch();
    
    std::string toJsonString(bool prettyJson = false);
    void fromJsonString(std::string const& jsonString);
    boost::property_tree::ptree toPropertyTree();
    void fromPropertyTree(boost::property_tree::ptree const& pt);

    /////////////////////////////////////////////
    /// RequestRoutesDepartureSearch members

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
    std::shared_ptr<RequestTransportation> getTransportation() const;
    void setTransportation(std::shared_ptr<RequestTransportation> value);

    /// <summary>
    /// 
    /// </summary>
    std::string getDepartureTime() const;
    void setDepartureTime(std::string value);

    /// <summary>
    /// 
    /// </summary>
    std::vector<std::shared_ptr<RequestRoutesProperty>> getProperties() const;
    void setProperties(std::vector<std::shared_ptr<RequestRoutesProperty>> value);

    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<RequestRangeFull> getRange() const;
    void setRange(std::shared_ptr<RequestRangeFull> value);
protected:
    std::string m_Id;
    std::string m_Departure_location_id;
    std::vector<std::string> m_Arrival_location_ids;
    std::shared_ptr<RequestTransportation> m_Transportation;
    std::string m_Departure_time;
    std::vector<std::shared_ptr<RequestRoutesProperty>> m_Properties;
    std::shared_ptr<RequestRangeFull> m_Range;
};

}
}
}
}

#endif /* RequestRoutesDepartureSearch_H_ */
