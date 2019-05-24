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



#include "ResponseGeocodingGeoJsonFeature.h"

namespace org {
namespace openapitools {
namespace client {
namespace model {




ResponseGeocodingGeoJsonFeature::ResponseGeocodingGeoJsonFeature()
{
    m_Type = utility::conversions::to_string_t("");
}

ResponseGeocodingGeoJsonFeature::~ResponseGeocodingGeoJsonFeature()
{
}

void ResponseGeocodingGeoJsonFeature::validate()
{
    // TODO: implement validation
}

web::json::value ResponseGeocodingGeoJsonFeature::toJson() const
{
    web::json::value val = web::json::value::object();

    val[utility::conversions::to_string_t("type")] = ModelBase::toJson(m_Type);
    val[utility::conversions::to_string_t("geometry")] = ModelBase::toJson(m_Geometry);
    val[utility::conversions::to_string_t("properties")] = ModelBase::toJson(m_Properties);

    return val;
}

void ResponseGeocodingGeoJsonFeature::fromJson(const web::json::value& val)
{
    setType(ModelBase::stringFromJson(val.at(utility::conversions::to_string_t("type"))));
    std::shared_ptr<ResponseGeocodingGeometry> newGeometry(new ResponseGeocodingGeometry());
    newGeometry->fromJson(val.at(utility::conversions::to_string_t("geometry")));
    setGeometry( newGeometry );
    std::shared_ptr<ResponseGeocodingProperties> newProperties(new ResponseGeocodingProperties());
    newProperties->fromJson(val.at(utility::conversions::to_string_t("properties")));
    setProperties( newProperties );
}

void ResponseGeocodingGeoJsonFeature::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }

    multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("type"), m_Type));
    m_Geometry->toMultipart(multipart, utility::conversions::to_string_t("geometry."));
    m_Properties->toMultipart(multipart, utility::conversions::to_string_t("properties."));
}

void ResponseGeocodingGeoJsonFeature::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }

    setType(ModelBase::stringFromHttpContent(multipart->getContent(utility::conversions::to_string_t("type"))));
    std::shared_ptr<ResponseGeocodingGeometry> newGeometry(new ResponseGeocodingGeometry());
    newGeometry->fromMultiPart(multipart, utility::conversions::to_string_t("geometry."));
    setGeometry( newGeometry );
    std::shared_ptr<ResponseGeocodingProperties> newProperties(new ResponseGeocodingProperties());
    newProperties->fromMultiPart(multipart, utility::conversions::to_string_t("properties."));
    setProperties( newProperties );
}

utility::string_t ResponseGeocodingGeoJsonFeature::getType() const
{
    return m_Type;
}

void ResponseGeocodingGeoJsonFeature::setType(const utility::string_t& value)
{
    m_Type = value;
    
}

std::shared_ptr<ResponseGeocodingGeometry> ResponseGeocodingGeoJsonFeature::getGeometry() const
{
    return m_Geometry;
}

void ResponseGeocodingGeoJsonFeature::setGeometry(const std::shared_ptr<ResponseGeocodingGeometry>& value)
{
    m_Geometry = value;
    
}

std::shared_ptr<ResponseGeocodingProperties> ResponseGeocodingGeoJsonFeature::getProperties() const
{
    return m_Properties;
}

void ResponseGeocodingGeoJsonFeature::setProperties(const std::shared_ptr<ResponseGeocodingProperties>& value)
{
    m_Properties = value;
    
}

}
}
}
}


