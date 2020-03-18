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
 * ResponseGeocodingGeoJsonFeature.h
 *
 * 
 */

#ifndef ResponseGeocodingGeoJsonFeature_H_
#define ResponseGeocodingGeoJsonFeature_H_



#include "ResponseGeocodingGeometry.h"
#include <string>
#include "ResponseGeocodingProperties.h"
#include <memory>
#include <boost/property_tree/ptree.hpp>

namespace org {
namespace openapitools {
namespace server {
namespace model {

/// <summary>
/// 
/// </summary>
class  ResponseGeocodingGeoJsonFeature 
{
public:
    ResponseGeocodingGeoJsonFeature();
    virtual ~ResponseGeocodingGeoJsonFeature();
    
    std::string toJsonString(bool prettyJson = false);
    void fromJsonString(std::string const& jsonString);
    boost::property_tree::ptree toPropertyTree();
    void fromPropertyTree(boost::property_tree::ptree const& pt);

    /////////////////////////////////////////////
    /// ResponseGeocodingGeoJsonFeature members

    /// <summary>
    /// 
    /// </summary>
    std::string getType() const;
    void setType(std::string value);

    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<ResponseGeocodingGeometry> getGeometry() const;
    void setGeometry(std::shared_ptr<ResponseGeocodingGeometry> value);

    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<ResponseGeocodingProperties> getProperties() const;
    void setProperties(std::shared_ptr<ResponseGeocodingProperties> value);
protected:
    std::string m_Type;
    std::shared_ptr<ResponseGeocodingGeometry> m_Geometry;
    std::shared_ptr<ResponseGeocodingProperties> m_Properties;
};

}
}
}
}

#endif /* ResponseGeocodingGeoJsonFeature_H_ */
