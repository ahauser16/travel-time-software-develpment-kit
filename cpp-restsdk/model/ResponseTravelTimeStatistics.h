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
 * ResponseTravelTimeStatistics.h
 *
 * 
 */

#ifndef ORG_OPENAPITOOLS_CLIENT_MODEL_ResponseTravelTimeStatistics_H_
#define ORG_OPENAPITOOLS_CLIENT_MODEL_ResponseTravelTimeStatistics_H_


#include "../ModelBase.h"


namespace org {
namespace openapitools {
namespace client {
namespace model {


/// <summary>
/// 
/// </summary>
class  ResponseTravelTimeStatistics
    : public ModelBase
{
public:
    ResponseTravelTimeStatistics();
    virtual ~ResponseTravelTimeStatistics();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    void fromJson(const web::json::value& json) override;

    void toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) const override;
    void fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) override;

    /////////////////////////////////////////////
    /// ResponseTravelTimeStatistics members

    /// <summary>
    /// 
    /// </summary>
    int32_t getMin() const;
    
    void setMin(int32_t value);

    /// <summary>
    /// 
    /// </summary>
    int32_t getMax() const;
    
    void setMax(int32_t value);

    /// <summary>
    /// 
    /// </summary>
    int32_t getMean() const;
    
    void setMean(int32_t value);

    /// <summary>
    /// 
    /// </summary>
    int32_t getMedian() const;
    
    void setMedian(int32_t value);


protected:
    int32_t m_Min;
        int32_t m_Max;
        int32_t m_Mean;
        int32_t m_Median;
    };


}
}
}
}

#endif /* ORG_OPENAPITOOLS_CLIENT_MODEL_ResponseTravelTimeStatistics_H_ */
