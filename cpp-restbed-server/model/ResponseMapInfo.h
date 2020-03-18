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
 * ResponseMapInfo.h
 *
 * 
 */

#ifndef ResponseMapInfo_H_
#define ResponseMapInfo_H_



#include "ResponseMapInfoMap.h"
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
class  ResponseMapInfo 
{
public:
    ResponseMapInfo();
    virtual ~ResponseMapInfo();
    
    std::string toJsonString(bool prettyJson = false);
    void fromJsonString(std::string const& jsonString);
    boost::property_tree::ptree toPropertyTree();
    void fromPropertyTree(boost::property_tree::ptree const& pt);

    /////////////////////////////////////////////
    /// ResponseMapInfo members

    /// <summary>
    /// 
    /// </summary>
    std::vector<std::shared_ptr<ResponseMapInfoMap>> getMaps() const;
    void setMaps(std::vector<std::shared_ptr<ResponseMapInfoMap>> value);
protected:
    std::vector<std::shared_ptr<ResponseMapInfoMap>> m_Maps;
};

}
}
}
}

#endif /* ResponseMapInfo_H_ */
