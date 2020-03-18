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



#include "ResponseTimeMapResult.h"

namespace org {
namespace openapitools {
namespace client {
namespace model {




ResponseTimeMapResult::ResponseTimeMapResult()
{
    m_Search_id = utility::conversions::to_string_t("");
    m_Search_idIsSet = false;
    m_ShapesIsSet = false;
    m_PropertiesIsSet = false;
}

ResponseTimeMapResult::~ResponseTimeMapResult()
{
}

void ResponseTimeMapResult::validate()
{
    // TODO: implement validation
}

web::json::value ResponseTimeMapResult::toJson() const
{

    web::json::value val = web::json::value::object();
    
    if(m_Search_idIsSet)
    {
        val[utility::conversions::to_string_t("search_id")] = ModelBase::toJson(m_Search_id);
    }
    if(m_ShapesIsSet)
    {
        val[utility::conversions::to_string_t("shapes")] = ModelBase::toJson(m_Shapes);
    }
    if(m_PropertiesIsSet)
    {
        val[utility::conversions::to_string_t("properties")] = ModelBase::toJson(m_Properties);
    }

    return val;
}

bool ResponseTimeMapResult::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("search_id")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("search_id"));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_search_id;
            ok &= ModelBase::fromJson(fieldValue, refVal_search_id);
            setSearchId(refVal_search_id);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("shapes")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("shapes"));
        if(!fieldValue.is_null())
        {
            std::vector<std::shared_ptr<ResponseShape>> refVal_shapes;
            ok &= ModelBase::fromJson(fieldValue, refVal_shapes);
            setShapes(refVal_shapes);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("properties")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("properties"));
        if(!fieldValue.is_null())
        {
            std::shared_ptr<ResponseTimeMapProperties> refVal_properties;
            ok &= ModelBase::fromJson(fieldValue, refVal_properties);
            setProperties(refVal_properties);
        }
    }
    return ok;
}

void ResponseTimeMapResult::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }
    if(m_Search_idIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("search_id"), m_Search_id));
    }
    if(m_ShapesIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("shapes"), m_Shapes));
    }
    if(m_PropertiesIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("properties"), m_Properties));
    }
}

bool ResponseTimeMapResult::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
{
    bool ok = true;
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }

    if(multipart->hasContent(utility::conversions::to_string_t("search_id")))
    {
        utility::string_t refVal_search_id;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("search_id")), refVal_search_id );
        setSearchId(refVal_search_id);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("shapes")))
    {
        std::vector<std::shared_ptr<ResponseShape>> refVal_shapes;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("shapes")), refVal_shapes );
        setShapes(refVal_shapes);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("properties")))
    {
        std::shared_ptr<ResponseTimeMapProperties> refVal_properties;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("properties")), refVal_properties );
        setProperties(refVal_properties);
    }
    return ok;
}

utility::string_t ResponseTimeMapResult::getSearchId() const
{
    return m_Search_id;
}

void ResponseTimeMapResult::setSearchId(const utility::string_t& value)
{
    m_Search_id = value;
    m_Search_idIsSet = true;
}

bool ResponseTimeMapResult::searchIdIsSet() const
{
    return m_Search_idIsSet;
}

void ResponseTimeMapResult::unsetSearch_id()
{
    m_Search_idIsSet = false;
}
std::vector<std::shared_ptr<ResponseShape>>& ResponseTimeMapResult::getShapes()
{
    return m_Shapes;
}

void ResponseTimeMapResult::setShapes(const std::vector<std::shared_ptr<ResponseShape>>& value)
{
    m_Shapes = value;
    m_ShapesIsSet = true;
}

bool ResponseTimeMapResult::shapesIsSet() const
{
    return m_ShapesIsSet;
}

void ResponseTimeMapResult::unsetShapes()
{
    m_ShapesIsSet = false;
}
std::shared_ptr<ResponseTimeMapProperties> ResponseTimeMapResult::getProperties() const
{
    return m_Properties;
}

void ResponseTimeMapResult::setProperties(const std::shared_ptr<ResponseTimeMapProperties>& value)
{
    m_Properties = value;
    m_PropertiesIsSet = true;
}

bool ResponseTimeMapResult::propertiesIsSet() const
{
    return m_PropertiesIsSet;
}

void ResponseTimeMapResult::unsetProperties()
{
    m_PropertiesIsSet = false;
}
}
}
}
}


