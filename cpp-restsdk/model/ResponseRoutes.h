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
 * ResponseRoutes.h
 *
 * 
 */

#ifndef ORG_OPENAPITOOLS_CLIENT_MODEL_ResponseRoutes_H_
#define ORG_OPENAPITOOLS_CLIENT_MODEL_ResponseRoutes_H_


#include "../ModelBase.h"

#include <vector>
#include "ResponseRoutesResult.h"

namespace org {
namespace openapitools {
namespace client {
namespace model {


/// <summary>
/// 
/// </summary>
class  ResponseRoutes
    : public ModelBase
{
public:
    ResponseRoutes();
    virtual ~ResponseRoutes();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    void fromJson(const web::json::value& json) override;

    void toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) const override;
    void fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) override;

    /////////////////////////////////////////////
    /// ResponseRoutes members

    /// <summary>
    /// 
    /// </summary>
    std::vector<std::shared_ptr<ResponseRoutesResult>>& getResults();
    
    void setResults(const std::vector<std::shared_ptr<ResponseRoutesResult>>& value);


protected:
    std::vector<std::shared_ptr<ResponseRoutesResult>> m_Results;
    };


}
}
}
}

#endif /* ORG_OPENAPITOOLS_CLIENT_MODEL_ResponseRoutes_H_ */
