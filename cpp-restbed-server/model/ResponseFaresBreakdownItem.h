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
 * ResponseFaresBreakdownItem.h
 *
 * 
 */

#ifndef ResponseFaresBreakdownItem_H_
#define ResponseFaresBreakdownItem_H_



#include "ResponseTransportationMode.h"
#include "ResponseFareTicket.h"
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
class  ResponseFaresBreakdownItem 
{
public:
    ResponseFaresBreakdownItem();
    virtual ~ResponseFaresBreakdownItem();
    
    std::string toJsonString(bool prettyJson = false);
    void fromJsonString(std::string const& jsonString);
    boost::property_tree::ptree toPropertyTree();
    void fromPropertyTree(boost::property_tree::ptree const& pt);

    /////////////////////////////////////////////
    /// ResponseFaresBreakdownItem members

    /// <summary>
    /// 
    /// </summary>
    std::vector<std::shared_ptr<ResponseTransportationMode>> getModes() const;
    void setModes(std::vector<std::shared_ptr<ResponseTransportationMode>> value);

    /// <summary>
    /// 
    /// </summary>
    std::vector<int32_t> getRoutePartIds() const;
    void setRoutePartIds(std::vector<int32_t> value);

    /// <summary>
    /// 
    /// </summary>
    std::vector<std::shared_ptr<ResponseFareTicket>> getTickets() const;
    void setTickets(std::vector<std::shared_ptr<ResponseFareTicket>> value);
protected:
    std::vector<std::shared_ptr<ResponseTransportationMode>> m_Modes;
    std::vector<int32_t> m_Route_part_ids;
    std::vector<std::shared_ptr<ResponseFareTicket>> m_Tickets;
};

}
}
}
}

#endif /* ResponseFaresBreakdownItem_H_ */
