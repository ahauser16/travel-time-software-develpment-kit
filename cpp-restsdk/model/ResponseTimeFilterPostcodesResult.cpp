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



#include "ResponseTimeFilterPostcodesResult.h"

namespace org {
namespace openapitools {
namespace client {
namespace model {




ResponseTimeFilterPostcodesResult::ResponseTimeFilterPostcodesResult()
{
    m_Search_id = utility::conversions::to_string_t("");
}

ResponseTimeFilterPostcodesResult::~ResponseTimeFilterPostcodesResult()
{
}

void ResponseTimeFilterPostcodesResult::validate()
{
    // TODO: implement validation
}

web::json::value ResponseTimeFilterPostcodesResult::toJson() const
{
    web::json::value val = web::json::value::object();

    val[utility::conversions::to_string_t("search_id")] = ModelBase::toJson(m_Search_id);
    {
        std::vector<web::json::value> jsonArray;
        for( auto& item : m_Postcodes )
        {
            jsonArray.push_back(ModelBase::toJson(item));
        }
        val[utility::conversions::to_string_t("postcodes")] = web::json::value::array(jsonArray);
    }

    return val;
}

void ResponseTimeFilterPostcodesResult::fromJson(const web::json::value& val)
{
    setSearchId(ModelBase::stringFromJson(val.at(utility::conversions::to_string_t("search_id"))));
    {
        m_Postcodes.clear();
        std::vector<web::json::value> jsonArray;
        for( auto& item : val.at(utility::conversions::to_string_t("postcodes")).as_array() )
        {
            if(item.is_null())
            {
                m_Postcodes.push_back( std::shared_ptr<ResponseTimeFilterPostcode>(nullptr) );
            }
            else
            {
                std::shared_ptr<ResponseTimeFilterPostcode> newItem(new ResponseTimeFilterPostcode());
                newItem->fromJson(item);
                m_Postcodes.push_back( newItem );
            }
        }
    }
}

void ResponseTimeFilterPostcodesResult::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }

    multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("search_id"), m_Search_id));
    {
        std::vector<web::json::value> jsonArray;
        for( auto& item : m_Postcodes )
        {
            jsonArray.push_back(ModelBase::toJson(item));
        }
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("postcodes"), web::json::value::array(jsonArray), utility::conversions::to_string_t("application/json")));
            }
}

void ResponseTimeFilterPostcodesResult::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }

    setSearchId(ModelBase::stringFromHttpContent(multipart->getContent(utility::conversions::to_string_t("search_id"))));
    {
        m_Postcodes.clear();

        web::json::value jsonArray = web::json::value::parse(ModelBase::stringFromHttpContent(multipart->getContent(utility::conversions::to_string_t("postcodes"))));
        for( auto& item : jsonArray.as_array() )
        {
            if(item.is_null())
            {
                m_Postcodes.push_back( std::shared_ptr<ResponseTimeFilterPostcode>(nullptr) );
            }
            else
            {
                std::shared_ptr<ResponseTimeFilterPostcode> newItem(new ResponseTimeFilterPostcode());
                newItem->fromJson(item);
                m_Postcodes.push_back( newItem );
            }
        }
    }
}

utility::string_t ResponseTimeFilterPostcodesResult::getSearchId() const
{
    return m_Search_id;
}

void ResponseTimeFilterPostcodesResult::setSearchId(const utility::string_t& value)
{
    m_Search_id = value;
    
}

std::vector<std::shared_ptr<ResponseTimeFilterPostcode>>& ResponseTimeFilterPostcodesResult::getPostcodes()
{
    return m_Postcodes;
}

void ResponseTimeFilterPostcodesResult::setPostcodes(const std::vector<std::shared_ptr<ResponseTimeFilterPostcode>>& value)
{
    m_Postcodes = value;
    
}

}
}
}
}


