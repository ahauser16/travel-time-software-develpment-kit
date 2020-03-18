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
 * ResponseTimeFilterPostcodeSectorsResult.h
 *
 * 
 */

#ifndef ResponseTimeFilterPostcodeSectorsResult_H_
#define ResponseTimeFilterPostcodeSectorsResult_H_



#include "ResponseTimeFilterPostcodeSector.h"
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
class  ResponseTimeFilterPostcodeSectorsResult 
{
public:
    ResponseTimeFilterPostcodeSectorsResult();
    virtual ~ResponseTimeFilterPostcodeSectorsResult();
    
    std::string toJsonString(bool prettyJson = false);
    void fromJsonString(std::string const& jsonString);
    boost::property_tree::ptree toPropertyTree();
    void fromPropertyTree(boost::property_tree::ptree const& pt);

    /////////////////////////////////////////////
    /// ResponseTimeFilterPostcodeSectorsResult members

    /// <summary>
    /// 
    /// </summary>
    std::string getSearchId() const;
    void setSearchId(std::string value);

    /// <summary>
    /// 
    /// </summary>
    std::vector<std::shared_ptr<ResponseTimeFilterPostcodeSector>> getSectors() const;
    void setSectors(std::vector<std::shared_ptr<ResponseTimeFilterPostcodeSector>> value);
protected:
    std::string m_Search_id;
    std::vector<std::shared_ptr<ResponseTimeFilterPostcodeSector>> m_Sectors;
};

}
}
}
}

#endif /* ResponseTimeFilterPostcodeSectorsResult_H_ */
