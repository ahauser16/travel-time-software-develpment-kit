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
 * ResponseRoutesProperties.h
 *
 * 
 */

#ifndef ResponseRoutesProperties_H_
#define ResponseRoutesProperties_H_



#include "ResponseRoute.h"
#include "ResponseFares.h"
#include <memory>
#include <boost/property_tree/ptree.hpp>

namespace org {
namespace openapitools {
namespace server {
namespace model {

/// <summary>
/// 
/// </summary>
class  ResponseRoutesProperties 
{
public:
    ResponseRoutesProperties();
    virtual ~ResponseRoutesProperties();
    
    std::string toJsonString(bool prettyJson = false);
    void fromJsonString(std::string const& jsonString);
    boost::property_tree::ptree toPropertyTree();
    void fromPropertyTree(boost::property_tree::ptree const& pt);

    /////////////////////////////////////////////
    /// ResponseRoutesProperties members

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
    std::shared_ptr<ResponseFares> m_Fares;
    std::shared_ptr<ResponseRoute> m_Route;
};

}
}
}
}

#endif /* ResponseRoutesProperties_H_ */
