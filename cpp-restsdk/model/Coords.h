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
 * Coords.h
 *
 * 
 */

#ifndef ORG_OPENAPITOOLS_CLIENT_MODEL_Coords_H_
#define ORG_OPENAPITOOLS_CLIENT_MODEL_Coords_H_


#include "../ModelBase.h"


namespace org {
namespace openapitools {
namespace client {
namespace model {


/// <summary>
/// 
/// </summary>
class  Coords
    : public ModelBase
{
public:
    Coords();
    virtual ~Coords();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    void fromJson(const web::json::value& json) override;

    void toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) const override;
    void fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) override;

    /////////////////////////////////////////////
    /// Coords members

    /// <summary>
    /// 
    /// </summary>
    double getLat() const;
    
    void setLat(double value);

    /// <summary>
    /// 
    /// </summary>
    double getLng() const;
    
    void setLng(double value);


protected:
    double m_Lat;
        double m_Lng;
    };


}
}
}
}

#endif /* ORG_OPENAPITOOLS_CLIENT_MODEL_Coords_H_ */
