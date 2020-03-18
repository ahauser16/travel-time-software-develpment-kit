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
 * RequestRoutes.h
 *
 * 
 */

#ifndef RequestRoutes_H_
#define RequestRoutes_H_



#include "RequestRoutesArrivalSearch.h"
#include "RequestRoutesDepartureSearch.h"
#include "RequestLocation.h"
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
class  RequestRoutes 
{
public:
    RequestRoutes();
    virtual ~RequestRoutes();
    
    std::string toJsonString(bool prettyJson = false);
    void fromJsonString(std::string const& jsonString);
    boost::property_tree::ptree toPropertyTree();
    void fromPropertyTree(boost::property_tree::ptree const& pt);

    /////////////////////////////////////////////
    /// RequestRoutes members

    /// <summary>
    /// 
    /// </summary>
    std::vector<std::shared_ptr<RequestLocation>> getLocations() const;
    void setLocations(std::vector<std::shared_ptr<RequestLocation>> value);

    /// <summary>
    /// 
    /// </summary>
    std::vector<std::shared_ptr<RequestRoutesDepartureSearch>> getDepartureSearches() const;
    void setDepartureSearches(std::vector<std::shared_ptr<RequestRoutesDepartureSearch>> value);

    /// <summary>
    /// 
    /// </summary>
    std::vector<std::shared_ptr<RequestRoutesArrivalSearch>> getArrivalSearches() const;
    void setArrivalSearches(std::vector<std::shared_ptr<RequestRoutesArrivalSearch>> value);
protected:
    std::vector<std::shared_ptr<RequestLocation>> m_Locations;
    std::vector<std::shared_ptr<RequestRoutesDepartureSearch>> m_Departure_searches;
    std::vector<std::shared_ptr<RequestRoutesArrivalSearch>> m_Arrival_searches;
};

}
}
}
}

#endif /* RequestRoutes_H_ */
