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
 * RequestTimeFilterProperty.h
 *
 * 
 */

#ifndef ORG_OPENAPITOOLS_CLIENT_MODEL_RequestTimeFilterProperty_H_
#define ORG_OPENAPITOOLS_CLIENT_MODEL_RequestTimeFilterProperty_H_


#include "../ModelBase.h"


namespace org {
namespace openapitools {
namespace client {
namespace model {

class  RequestTimeFilterProperty
    : public ModelBase
{
public:
    RequestTimeFilterProperty();
    virtual ~RequestTimeFilterProperty();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    void toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) const override;
    bool fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) override;

    enum class eRequestTimeFilterProperty
    {
        RequestTimeFilterProperty_TRAVEL_TIME,
        RequestTimeFilterProperty_DISTANCE,
        RequestTimeFilterProperty_DISTANCE_BREAKDOWN,
        RequestTimeFilterProperty_FARES,
        RequestTimeFilterProperty_ROUTE,
    };

    eRequestTimeFilterProperty getValue() const;
    void setValue(eRequestTimeFilterProperty const value);

    protected:
        eRequestTimeFilterProperty m_value;
};

}
}
}
}

#endif /* ORG_OPENAPITOOLS_CLIENT_MODEL_RequestTimeFilterProperty_H_ */
