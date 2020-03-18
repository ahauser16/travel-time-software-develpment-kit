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
 * ResponseGeocodingGeometry.h
 *
 * 
 */

#ifndef ResponseGeocodingGeometry_H_
#define ResponseGeocodingGeometry_H_



#include <string>
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
class  ResponseGeocodingGeometry 
{
public:
    ResponseGeocodingGeometry();
    virtual ~ResponseGeocodingGeometry();
    
    std::string toJsonString(bool prettyJson = false);
    void fromJsonString(std::string const& jsonString);
    boost::property_tree::ptree toPropertyTree();
    void fromPropertyTree(boost::property_tree::ptree const& pt);

    /////////////////////////////////////////////
    /// ResponseGeocodingGeometry members

    /// <summary>
    /// 
    /// </summary>
    std::string getType() const;
    void setType(std::string value);

    /// <summary>
    /// 
    /// </summary>
    std::vector<double> getCoordinates() const;
    void setCoordinates(std::vector<double> value);
protected:
    std::string m_Type;
    std::vector<double> m_Coordinates;
};

}
}
}
}

#endif /* ResponseGeocodingGeometry_H_ */
