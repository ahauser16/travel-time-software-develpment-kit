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



#include "ResponseTimeFilterLocation.h"

namespace org {
namespace openapitools {
namespace client {
namespace model {




ResponseTimeFilterLocation::ResponseTimeFilterLocation()
{
    m_Id = utility::conversions::to_string_t("");
}

ResponseTimeFilterLocation::~ResponseTimeFilterLocation()
{
}

void ResponseTimeFilterLocation::validate()
{
    // TODO: implement validation
}

web::json::value ResponseTimeFilterLocation::toJson() const
{
    web::json::value val = web::json::value::object();

    val[utility::conversions::to_string_t("id")] = ModelBase::toJson(m_Id);
    {
        std::vector<web::json::value> jsonArray;
        for( auto& item : m_Properties )
        {
            jsonArray.push_back(ModelBase::toJson(item));
        }
        val[utility::conversions::to_string_t("properties")] = web::json::value::array(jsonArray);
    }

    return val;
}

void ResponseTimeFilterLocation::fromJson(const web::json::value& val)
{
    setId(ModelBase::stringFromJson(val.at(utility::conversions::to_string_t("id"))));
    {
        m_Properties.clear();
        std::vector<web::json::value> jsonArray;
        for( auto& item : val.at(utility::conversions::to_string_t("properties")).as_array() )
        {
            if(item.is_null())
            {
                m_Properties.push_back( std::shared_ptr<ResponseTimeFilterProperties>(nullptr) );
            }
            else
            {
                std::shared_ptr<ResponseTimeFilterProperties> newItem(new ResponseTimeFilterProperties());
                newItem->fromJson(item);
                m_Properties.push_back( newItem );
            }
        }
    }
}

void ResponseTimeFilterLocation::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }

    multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("id"), m_Id));
    {
        std::vector<web::json::value> jsonArray;
        for( auto& item : m_Properties )
        {
            jsonArray.push_back(ModelBase::toJson(item));
        }
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("properties"), web::json::value::array(jsonArray), utility::conversions::to_string_t("application/json")));
            }
}

void ResponseTimeFilterLocation::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }

    setId(ModelBase::stringFromHttpContent(multipart->getContent(utility::conversions::to_string_t("id"))));
    {
        m_Properties.clear();

        web::json::value jsonArray = web::json::value::parse(ModelBase::stringFromHttpContent(multipart->getContent(utility::conversions::to_string_t("properties"))));
        for( auto& item : jsonArray.as_array() )
        {
            if(item.is_null())
            {
                m_Properties.push_back( std::shared_ptr<ResponseTimeFilterProperties>(nullptr) );
            }
            else
            {
                std::shared_ptr<ResponseTimeFilterProperties> newItem(new ResponseTimeFilterProperties());
                newItem->fromJson(item);
                m_Properties.push_back( newItem );
            }
        }
    }
}

utility::string_t ResponseTimeFilterLocation::getId() const
{
    return m_Id;
}

void ResponseTimeFilterLocation::setId(const utility::string_t& value)
{
    m_Id = value;
    
}

std::vector<std::shared_ptr<ResponseTimeFilterProperties>>& ResponseTimeFilterLocation::getProperties()
{
    return m_Properties;
}

void ResponseTimeFilterLocation::setProperties(const std::vector<std::shared_ptr<ResponseTimeFilterProperties>>& value)
{
    m_Properties = value;
    
}

}
}
}
}


