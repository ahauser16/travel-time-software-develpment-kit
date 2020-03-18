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
 * ResponseTimeMap.h
 *
 * 
 */

#ifndef ORG_OPENAPITOOLS_CLIENT_MODEL_ResponseTimeMap_H_
#define ORG_OPENAPITOOLS_CLIENT_MODEL_ResponseTimeMap_H_


#include "../ModelBase.h"

#include "ResponseTimeMapResult.h"
#include <vector>

namespace org {
namespace openapitools {
namespace client {
namespace model {


/// <summary>
/// 
/// </summary>
class  ResponseTimeMap
    : public ModelBase
{
public:
    ResponseTimeMap();
    virtual ~ResponseTimeMap();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    void toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) const override;
    bool fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) override;

    /////////////////////////////////////////////
    /// ResponseTimeMap members

    /// <summary>
    /// 
    /// </summary>
    std::vector<std::shared_ptr<ResponseTimeMapResult>>& getResults();
    bool resultsIsSet() const;
    void unsetResults();

    void setResults(const std::vector<std::shared_ptr<ResponseTimeMapResult>>& value);


protected:
    std::vector<std::shared_ptr<ResponseTimeMapResult>> m_Results;
    bool m_ResultsIsSet;
};


}
}
}
}

#endif /* ORG_OPENAPITOOLS_CLIENT_MODEL_ResponseTimeMap_H_ */
