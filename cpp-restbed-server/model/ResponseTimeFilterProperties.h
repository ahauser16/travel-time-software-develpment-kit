/**
 * TravelTime Platform API
 * No description provided (generated by Openapi Generator https://github.com/openapitools/openapi-generator)
 *
 * The version of the OpenAPI document: 1.0.0
 * Contact: support@igeolise.com
 *
 * NOTE: This class is auto generated by OpenAPI-Generator 4.0.0.
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

/*
 * ResponseTimeFilterProperties.h
 *
 * 
 */

#ifndef ResponseTimeFilterProperties_H_
#define ResponseTimeFilterProperties_H_



#include "ResponseRoute.h"
#include "ResponseDistanceBreakdownItem.h"
#include "ResponseFares.h"
#include <vector>
#include <memory>

namespace org {
namespace openapitools {
namespace server {
namespace model {

/// <summary>
/// 
/// </summary>
class  ResponseTimeFilterProperties
{
public:
    ResponseTimeFilterProperties();
    virtual ~ResponseTimeFilterProperties();
    
    std::string toJsonString();
    void fromJsonString(std::string const& jsonString);

    /////////////////////////////////////////////
    /// ResponseTimeFilterProperties members
    
    /// <summary>
    /// 
    /// </summary>
    int32_t getTravelTime() const;
    void setTravelTime(int32_t value);
    /// <summary>
    /// 
    /// </summary>
    int32_t getDistance() const;
    void setDistance(int32_t value);
    /// <summary>
    /// 
    /// </summary>
    std::vector<std::shared_ptr<ResponseDistanceBreakdownItem>> getDistanceBreakdown() const;
    void setDistanceBreakdown(std::vector<std::shared_ptr<ResponseDistanceBreakdownItem>> value);
    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<ResponseFares> getFares() const;
    void setFares(std::shared_ptr<ResponseFares> value);
    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<ResponseRoute> getRoute() const;
    void setRoute(std::shared_ptr<ResponseRoute> value);

protected:
    int32_t m_Travel_time;
    int32_t m_Distance;
    std::vector<std::shared_ptr<ResponseDistanceBreakdownItem>> m_Distance_breakdown;
    std::shared_ptr<ResponseFares> m_Fares;
    std::shared_ptr<ResponseRoute> m_Route;
};

}
}
}
}

#endif /* ResponseTimeFilterProperties_H_ */
