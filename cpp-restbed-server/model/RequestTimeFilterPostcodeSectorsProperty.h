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
 * RequestTimeFilterPostcodeSectorsProperty.h
 *
 * 
 */

#ifndef RequestTimeFilterPostcodeSectorsProperty_H_
#define RequestTimeFilterPostcodeSectorsProperty_H_



#include <memory>
#include <boost/property_tree/ptree.hpp>

namespace org {
namespace openapitools {
namespace server {
namespace model {

/// <summary>
/// 
/// </summary>
class  RequestTimeFilterPostcodeSectorsProperty 
{
public:
    RequestTimeFilterPostcodeSectorsProperty();
    virtual ~RequestTimeFilterPostcodeSectorsProperty();
    
    std::string toJsonString(bool prettyJson = false);
    void fromJsonString(std::string const& jsonString);
    boost::property_tree::ptree toPropertyTree();
    void fromPropertyTree(boost::property_tree::ptree const& pt);

    /////////////////////////////////////////////
    /// RequestTimeFilterPostcodeSectorsProperty members
protected:
};

}
}
}
}

#endif /* RequestTimeFilterPostcodeSectorsProperty_H_ */
