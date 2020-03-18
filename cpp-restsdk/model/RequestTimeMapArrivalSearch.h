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
 * RequestTimeMapArrivalSearch.h
 *
 * 
 */

#ifndef ORG_OPENAPITOOLS_CLIENT_MODEL_RequestTimeMapArrivalSearch_H_
#define ORG_OPENAPITOOLS_CLIENT_MODEL_RequestTimeMapArrivalSearch_H_


#include "../ModelBase.h"

#include "RequestTimeMapProperty.h"
#include "RequestTransportation.h"
#include <cpprest/details/basic_types.h>
#include "Coords.h"
#include <vector>
#include "RequestRangeNoMaxResults.h"

namespace org {
namespace openapitools {
namespace client {
namespace model {


/// <summary>
/// 
/// </summary>
class  RequestTimeMapArrivalSearch
    : public ModelBase
{
public:
    RequestTimeMapArrivalSearch();
    virtual ~RequestTimeMapArrivalSearch();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    void fromJson(const web::json::value& json) override;

    void toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) const override;
    void fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) override;

    /////////////////////////////////////////////
    /// RequestTimeMapArrivalSearch members

    /// <summary>
    /// 
    /// </summary>
    utility::string_t getId() const;
    
    void setId(const utility::string_t& value);

    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<Coords> getCoords() const;
    
    void setCoords(const std::shared_ptr<Coords>& value);

    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<RequestTransportation> getTransportation() const;
    
    void setTransportation(const std::shared_ptr<RequestTransportation>& value);

    /// <summary>
    /// 
    /// </summary>
    int32_t getTravelTime() const;
    
    void setTravelTime(int32_t value);

    /// <summary>
    /// 
    /// </summary>
    utility::datetime getArrivalTime() const;
    
    void setArrivalTime(const utility::datetime& value);

    /// <summary>
    /// 
    /// </summary>
    std::vector<std::shared_ptr<RequestTimeMapProperty>>& getProperties();
    bool propertiesIsSet() const;
    void unsetProperties();

    void setProperties(const std::vector<std::shared_ptr<RequestTimeMapProperty>>& value);

    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<RequestRangeNoMaxResults> getRange() const;
    bool rangeIsSet() const;
    void unsetRange();

    void setRange(const std::shared_ptr<RequestRangeNoMaxResults>& value);


protected:
    utility::string_t m_Id;
        std::shared_ptr<Coords> m_Coords;
        std::shared_ptr<RequestTransportation> m_Transportation;
        int32_t m_Travel_time;
        utility::datetime m_Arrival_time;
        std::vector<std::shared_ptr<RequestTimeMapProperty>> m_Properties;
    bool m_PropertiesIsSet;
    std::shared_ptr<RequestRangeNoMaxResults> m_Range;
    bool m_RangeIsSet;
};


}
}
}
}

#endif /* ORG_OPENAPITOOLS_CLIENT_MODEL_RequestTimeMapArrivalSearch_H_ */
