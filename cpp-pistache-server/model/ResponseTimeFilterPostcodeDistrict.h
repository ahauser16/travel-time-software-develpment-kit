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
 * ResponseTimeFilterPostcodeDistrict.h
 *
 * 
 */

#ifndef ResponseTimeFilterPostcodeDistrict_H_
#define ResponseTimeFilterPostcodeDistrict_H_


#include "ResponseTimeFilterPostcodeDistrictProperties.h"
#include <nlohmann/json.hpp>

namespace org {
namespace openapitools {
namespace server {
namespace model {

/// <summary>
/// 
/// </summary>
class  ResponseTimeFilterPostcodeDistrict
{
public:
    ResponseTimeFilterPostcodeDistrict();
    virtual ~ResponseTimeFilterPostcodeDistrict();

    void validate();

    /////////////////////////////////////////////
    /// ResponseTimeFilterPostcodeDistrict members

    /// <summary>
    /// 
    /// </summary>
    String getCode() const;
    void setCode(String const& value);
    /// <summary>
    /// 
    /// </summary>
    ResponseTimeFilterPostcodeDistrictProperties getProperties() const;
    void setProperties(ResponseTimeFilterPostcodeDistrictProperties const& value);

    friend void to_json(nlohmann::json& j, const ResponseTimeFilterPostcodeDistrict& o);
    friend void from_json(const nlohmann::json& j, ResponseTimeFilterPostcodeDistrict& o);
protected:
    String m_Code;

    ResponseTimeFilterPostcodeDistrictProperties m_Properties;

};

}
}
}
}

#endif /* ResponseTimeFilterPostcodeDistrict_H_ */
