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
 * ResponseGeocoding.h
 *
 * 
 */

#ifndef ResponseGeocoding_H_
#define ResponseGeocoding_H_


#include <string>
#include "ResponseGeocodingGeoJsonFeature.h"
#include <vector>
#include <nlohmann/json.hpp>

namespace org {
namespace openapitools {
namespace server {
namespace model {

/// <summary>
/// 
/// </summary>
class  ResponseGeocoding
{
public:
    ResponseGeocoding();
    virtual ~ResponseGeocoding();

    void validate();

    /////////////////////////////////////////////
    /// ResponseGeocoding members

    /// <summary>
    /// 
    /// </summary>
    std::string getType() const;
    void setType(std::string const& value);
    /// <summary>
    /// 
    /// </summary>
    std::vector<ResponseGeocodingGeoJsonFeature>& getFeatures();
    void setFeatures(std::vector<ResponseGeocodingGeoJsonFeature> const& value);

    friend void to_json(nlohmann::json& j, const ResponseGeocoding& o);
    friend void from_json(const nlohmann::json& j, ResponseGeocoding& o);
protected:
    std::string m_Type;

    std::vector<ResponseGeocodingGeoJsonFeature> m_Features;

};

}
}
}
}

#endif /* ResponseGeocoding_H_ */
