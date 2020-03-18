/**
 * TravelTime Platform API
 * No description provided (generated by Openapi Generator https://github.com/openapitools/openapi-generator)
 *
 * The version of the OpenAPI document: 1.0.0
 * Contact: support@igeolise.com
 *
 * NOTE: This class is auto generated by OpenAPI-Generator 4.2.3.
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

/*
 * RequestTimeMapArrivalSearch.h
 *
 * 
 */

#ifndef RequestTimeMapArrivalSearch_H_
#define RequestTimeMapArrivalSearch_H_



#include "RequestTimeMapProperty.h"
#include <string>
#include "RequestTransportation.h"
#include "Coords.h"
#include <vector>
#include "RequestRangeNoMaxResults.h"
#include <memory>
#include <boost/property_tree/ptree.hpp>

namespace org {
namespace openapitools {
namespace server {
namespace model {

/// <summary>
/// 
/// </summary>
class  RequestTimeMapArrivalSearch 
{
public:
    RequestTimeMapArrivalSearch();
    virtual ~RequestTimeMapArrivalSearch();
    
    std::string toJsonString(bool prettyJson = false);
    void fromJsonString(std::string const& jsonString);
    boost::property_tree::ptree toPropertyTree();
    void fromPropertyTree(boost::property_tree::ptree const& pt);

    /////////////////////////////////////////////
    /// RequestTimeMapArrivalSearch members

    /// <summary>
    /// 
    /// </summary>
    std::string getId() const;
    void setId(std::string value);

    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<Coords> getCoords() const;
    void setCoords(std::shared_ptr<Coords> value);

    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<RequestTransportation> getTransportation() const;
    void setTransportation(std::shared_ptr<RequestTransportation> value);

    /// <summary>
    /// 
    /// </summary>
    int32_t getTravelTime() const;
    void setTravelTime(int32_t value);

    /// <summary>
    /// 
    /// </summary>
    std::string getArrivalTime() const;
    void setArrivalTime(std::string value);

    /// <summary>
    /// 
    /// </summary>
    std::vector<std::shared_ptr<RequestTimeMapProperty>> getProperties() const;
    void setProperties(std::vector<std::shared_ptr<RequestTimeMapProperty>> value);

    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<RequestRangeNoMaxResults> getRange() const;
    void setRange(std::shared_ptr<RequestRangeNoMaxResults> value);
protected:
    std::string m_Id;
    std::shared_ptr<Coords> m_Coords;
    std::shared_ptr<RequestTransportation> m_Transportation;
    int32_t m_Travel_time;
    std::string m_Arrival_time;
    std::vector<std::shared_ptr<RequestTimeMapProperty>> m_Properties;
    std::shared_ptr<RequestRangeNoMaxResults> m_Range;
};

}
}
}
}

#endif /* RequestTimeMapArrivalSearch_H_ */
