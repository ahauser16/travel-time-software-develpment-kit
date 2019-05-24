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
 * ResponseShape.h
 *
 * 
 */

#ifndef ResponseShape_H_
#define ResponseShape_H_



#include "Coords.h"
#include <vector>
#include <memory>

namespace org {
namespace openapitools {
namespace server {
namespace model {

/// <summary>
/// 
/// </summary>
class  ResponseShape
{
public:
    ResponseShape();
    virtual ~ResponseShape();
    
    std::string toJsonString();
    void fromJsonString(std::string const& jsonString);

    /////////////////////////////////////////////
    /// ResponseShape members
    
    /// <summary>
    /// 
    /// </summary>
    std::vector<std::shared_ptr<Coords>> getShell() const;
    void setShell(std::vector<std::shared_ptr<Coords>> value);
    /// <summary>
    /// 
    /// </summary>
    std::vector<std::vector<std::shared_ptr<Coords>>> getHoles() const;
    void setHoles(std::vector<std::vector<std::shared_ptr<Coords>>> value);

protected:
    std::vector<std::shared_ptr<Coords>> m_Shell;
    std::vector<std::vector<std::shared_ptr<Coords>>> m_Holes;
};

}
}
}
}

#endif /* ResponseShape_H_ */
