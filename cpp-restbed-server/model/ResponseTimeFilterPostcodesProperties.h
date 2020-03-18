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
 * ResponseTimeFilterPostcodesProperties.h
 *
 * 
 */

#ifndef ResponseTimeFilterPostcodesProperties_H_
#define ResponseTimeFilterPostcodesProperties_H_



#include <memory>
#include <boost/property_tree/ptree.hpp>

namespace org {
namespace openapitools {
namespace server {
namespace model {

/// <summary>
/// 
/// </summary>
class  ResponseTimeFilterPostcodesProperties 
{
public:
    ResponseTimeFilterPostcodesProperties();
    virtual ~ResponseTimeFilterPostcodesProperties();
    
    std::string toJsonString(bool prettyJson = false);
    void fromJsonString(std::string const& jsonString);
    boost::property_tree::ptree toPropertyTree();
    void fromPropertyTree(boost::property_tree::ptree const& pt);

    /////////////////////////////////////////////
    /// ResponseTimeFilterPostcodesProperties members

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
protected:
    int32_t m_Travel_time;
    int32_t m_Distance;
};

}
}
}
}

#endif /* ResponseTimeFilterPostcodesProperties_H_ */
