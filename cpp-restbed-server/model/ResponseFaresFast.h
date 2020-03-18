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
 * ResponseFaresFast.h
 *
 * 
 */

#ifndef ResponseFaresFast_H_
#define ResponseFaresFast_H_



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
class  ResponseFaresFast 
{
public:
    ResponseFaresFast();
    virtual ~ResponseFaresFast();
    
    std::string toJsonString(bool prettyJson = false);
    void fromJsonString(std::string const& jsonString);
    boost::property_tree::ptree toPropertyTree();
    void fromPropertyTree(boost::property_tree::ptree const& pt);

    /////////////////////////////////////////////
    /// ResponseFaresFast members

    /// <summary>
    /// 
    /// </summary>
    std::vector<std::shared_ptr<ResponseFareTicket>> getTicketsTotal() const;
    void setTicketsTotal(std::vector<std::shared_ptr<ResponseFareTicket>> value);
protected:
    std::vector<std::shared_ptr<ResponseFareTicket>> m_Tickets_total;
};

}
}
}
}

#endif /* ResponseFaresFast_H_ */
