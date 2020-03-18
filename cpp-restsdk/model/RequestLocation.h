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
 * RequestLocation.h
 *
 * 
 */

#ifndef ORG_OPENAPITOOLS_CLIENT_MODEL_RequestLocation_H_
#define ORG_OPENAPITOOLS_CLIENT_MODEL_RequestLocation_H_


#include "../ModelBase.h"

#include <cpprest/details/basic_types.h>
#include "Coords.h"

namespace org {
namespace openapitools {
namespace client {
namespace model {


/// <summary>
/// 
/// </summary>
class  RequestLocation
    : public ModelBase
{
public:
    RequestLocation();
    virtual ~RequestLocation();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    void fromJson(const web::json::value& json) override;

    void toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) const override;
    void fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) override;

    /////////////////////////////////////////////
    /// RequestLocation members

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


protected:
    utility::string_t m_Id;
        std::shared_ptr<Coords> m_Coords;
    };


}
}
}
}

#endif /* ORG_OPENAPITOOLS_CLIENT_MODEL_RequestLocation_H_ */
