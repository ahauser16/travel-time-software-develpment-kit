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
 * RequestTimeFilterPostcodeSectors.h
 *
 * 
 */

#ifndef RequestTimeFilterPostcodeSectors_H_
#define RequestTimeFilterPostcodeSectors_H_



#include "RequestTimeFilterPostcodeSectorsArrivalSearch.h"
#include "RequestTimeFilterPostcodeSectorsDepartureSearch.h"
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
class  RequestTimeFilterPostcodeSectors 
{
public:
    RequestTimeFilterPostcodeSectors();
    virtual ~RequestTimeFilterPostcodeSectors();
    
    std::string toJsonString(bool prettyJson = false);
    void fromJsonString(std::string const& jsonString);
    boost::property_tree::ptree toPropertyTree();
    void fromPropertyTree(boost::property_tree::ptree const& pt);

    /////////////////////////////////////////////
    /// RequestTimeFilterPostcodeSectors members

    /// <summary>
    /// 
    /// </summary>
    std::vector<std::shared_ptr<RequestTimeFilterPostcodeSectorsDepartureSearch>> getDepartureSearches() const;
    void setDepartureSearches(std::vector<std::shared_ptr<RequestTimeFilterPostcodeSectorsDepartureSearch>> value);

    /// <summary>
    /// 
    /// </summary>
    std::vector<std::shared_ptr<RequestTimeFilterPostcodeSectorsArrivalSearch>> getArrivalSearches() const;
    void setArrivalSearches(std::vector<std::shared_ptr<RequestTimeFilterPostcodeSectorsArrivalSearch>> value);
protected:
    std::vector<std::shared_ptr<RequestTimeFilterPostcodeSectorsDepartureSearch>> m_Departure_searches;
    std::vector<std::shared_ptr<RequestTimeFilterPostcodeSectorsArrivalSearch>> m_Arrival_searches;
};

}
}
}
}

#endif /* RequestTimeFilterPostcodeSectors_H_ */
