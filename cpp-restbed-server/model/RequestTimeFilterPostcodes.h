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
 * RequestTimeFilterPostcodes.h
 *
 * 
 */

#ifndef RequestTimeFilterPostcodes_H_
#define RequestTimeFilterPostcodes_H_



#include "RequestTimeFilterPostcodesArrivalSearch.h"
#include "RequestTimeFilterPostcodesDepartureSearch.h"
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
class  RequestTimeFilterPostcodes 
{
public:
    RequestTimeFilterPostcodes();
    virtual ~RequestTimeFilterPostcodes();
    
    std::string toJsonString(bool prettyJson = false);
    void fromJsonString(std::string const& jsonString);
    boost::property_tree::ptree toPropertyTree();
    void fromPropertyTree(boost::property_tree::ptree const& pt);

    /////////////////////////////////////////////
    /// RequestTimeFilterPostcodes members

    /// <summary>
    /// 
    /// </summary>
    std::vector<std::shared_ptr<RequestTimeFilterPostcodesDepartureSearch>> getDepartureSearches() const;
    void setDepartureSearches(std::vector<std::shared_ptr<RequestTimeFilterPostcodesDepartureSearch>> value);

    /// <summary>
    /// 
    /// </summary>
    std::vector<std::shared_ptr<RequestTimeFilterPostcodesArrivalSearch>> getArrivalSearches() const;
    void setArrivalSearches(std::vector<std::shared_ptr<RequestTimeFilterPostcodesArrivalSearch>> value);
protected:
    std::vector<std::shared_ptr<RequestTimeFilterPostcodesDepartureSearch>> m_Departure_searches;
    std::vector<std::shared_ptr<RequestTimeFilterPostcodesArrivalSearch>> m_Arrival_searches;
};

}
}
}
}

#endif /* RequestTimeFilterPostcodes_H_ */
