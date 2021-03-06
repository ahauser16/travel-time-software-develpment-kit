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
 * RequestArrivalTimePeriod.h
 *
 * 
 */

#ifndef ORG_OPENAPITOOLS_CLIENT_MODEL_RequestArrivalTimePeriod_H_
#define ORG_OPENAPITOOLS_CLIENT_MODEL_RequestArrivalTimePeriod_H_


#include "../ModelBase.h"


namespace org {
namespace openapitools {
namespace client {
namespace model {

class  RequestArrivalTimePeriod
    : public ModelBase
{
public:
    RequestArrivalTimePeriod();
    virtual ~RequestArrivalTimePeriod();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    void toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) const override;
    bool fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) override;

    enum class eRequestArrivalTimePeriod
    {
        RequestArrivalTimePeriod_WEEKDAY_MORNING,
    };

    eRequestArrivalTimePeriod getValue() const;
    void setValue(eRequestArrivalTimePeriod const value);

    protected:
        eRequestArrivalTimePeriod m_value;
};

}
}
}
}

#endif /* ORG_OPENAPITOOLS_CLIENT_MODEL_RequestArrivalTimePeriod_H_ */
