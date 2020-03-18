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
 * ResponseTimeFilterFast.h
 *
 * 
 */

#ifndef ResponseTimeFilterFast_H_
#define ResponseTimeFilterFast_H_



#include "ResponseTimeFilterFastResult.h"
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
class  ResponseTimeFilterFast 
{
public:
    ResponseTimeFilterFast();
    virtual ~ResponseTimeFilterFast();
    
    std::string toJsonString(bool prettyJson = false);
    void fromJsonString(std::string const& jsonString);
    boost::property_tree::ptree toPropertyTree();
    void fromPropertyTree(boost::property_tree::ptree const& pt);

    /////////////////////////////////////////////
    /// ResponseTimeFilterFast members

    /// <summary>
    /// 
    /// </summary>
    std::vector<std::shared_ptr<ResponseTimeFilterFastResult>> getResults() const;
    void setResults(std::vector<std::shared_ptr<ResponseTimeFilterFastResult>> value);
protected:
    std::vector<std::shared_ptr<ResponseTimeFilterFastResult>> m_Results;
};

}
}
}
}

#endif /* ResponseTimeFilterFast_H_ */
