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
 * RequestRangeNoMaxResults.h
 *
 * 
 */

#ifndef ORG_OPENAPITOOLS_CLIENT_MODEL_RequestRangeNoMaxResults_H_
#define ORG_OPENAPITOOLS_CLIENT_MODEL_RequestRangeNoMaxResults_H_


#include "../ModelBase.h"


namespace org {
namespace openapitools {
namespace client {
namespace model {


/// <summary>
/// 
/// </summary>
class  RequestRangeNoMaxResults
    : public ModelBase
{
public:
    RequestRangeNoMaxResults();
    virtual ~RequestRangeNoMaxResults();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    void toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) const override;
    bool fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) override;

    /////////////////////////////////////////////
    /// RequestRangeNoMaxResults members

    /// <summary>
    /// 
    /// </summary>
    bool isEnabled() const;
    bool enabledIsSet() const;
    void unsetEnabled();

    void setEnabled(bool value);

    /// <summary>
    /// 
    /// </summary>
    int32_t getWidth() const;
    bool widthIsSet() const;
    void unsetWidth();

    void setWidth(int32_t value);


protected:
    bool m_Enabled;
    bool m_EnabledIsSet;
    int32_t m_Width;
    bool m_WidthIsSet;
};


}
}
}
}

#endif /* ORG_OPENAPITOOLS_CLIENT_MODEL_RequestRangeNoMaxResults_H_ */
