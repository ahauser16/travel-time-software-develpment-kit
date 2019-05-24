/**
 * TravelTime Platform API
 * No description provided (generated by Openapi Generator https://github.com/openapitools/openapi-generator)
 *
 * The version of the OpenAPI document: 1.0.0
 * Contact: support@igeolise.com
 *
 * NOTE: This class is auto generated by OpenAPI-Generator 4.0.0.
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

/*
 * ResponseTimeFilterPostcode.h
 *
 * 
 */

#ifndef ORG_OPENAPITOOLS_CLIENT_MODEL_ResponseTimeFilterPostcode_H_
#define ORG_OPENAPITOOLS_CLIENT_MODEL_ResponseTimeFilterPostcode_H_


#include "../ModelBase.h"

#include "ResponseTimeFilterPostcodesProperties.h"
#include <vector>

namespace org {
namespace openapitools {
namespace client {
namespace model {


/// <summary>
/// 
/// </summary>
class  ResponseTimeFilterPostcode
    : public ModelBase
{
public:
    ResponseTimeFilterPostcode();
    virtual ~ResponseTimeFilterPostcode();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    void fromJson(const web::json::value& json) override;

    void toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) const override;
    void fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) override;

    /////////////////////////////////////////////
    /// ResponseTimeFilterPostcode members

    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<String> getCode() const;
    
    void setCode(const std::shared_ptr<String>& value);

    /// <summary>
    /// 
    /// </summary>
    std::vector<std::shared_ptr<ResponseTimeFilterPostcodesProperties>>& getProperties();
    
    void setProperties(const std::vector<std::shared_ptr<ResponseTimeFilterPostcodesProperties>>& value);


protected:
    std::shared_ptr<String> m_Code;
        std::vector<std::shared_ptr<ResponseTimeFilterPostcodesProperties>> m_Properties;
    };


}
}
}
}

#endif /* ORG_OPENAPITOOLS_CLIENT_MODEL_ResponseTimeFilterPostcode_H_ */
