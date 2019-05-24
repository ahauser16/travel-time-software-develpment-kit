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
 * RequestLocation.h
 *
 * 
 */

#ifndef RequestLocation_H_
#define RequestLocation_H_



#include <string>
#include "Coords.h"
#include <memory>

namespace org {
namespace openapitools {
namespace server {
namespace model {

/// <summary>
/// 
/// </summary>
class  RequestLocation
{
public:
    RequestLocation();
    virtual ~RequestLocation();
    
    std::string toJsonString();
    void fromJsonString(std::string const& jsonString);

    /////////////////////////////////////////////
    /// RequestLocation members
    
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

protected:
    std::string m_Id;
    std::shared_ptr<Coords> m_Coords;
};

}
}
}
}

#endif /* RequestLocation_H_ */
