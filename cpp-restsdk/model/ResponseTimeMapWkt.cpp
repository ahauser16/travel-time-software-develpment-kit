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



#include "ResponseTimeMapWkt.h"

namespace org {
namespace openapitools {
namespace client {
namespace model {




ResponseTimeMapWkt::ResponseTimeMapWkt()
{
}

ResponseTimeMapWkt::~ResponseTimeMapWkt()
{
}

void ResponseTimeMapWkt::validate()
{
    // TODO: implement validation
}

web::json::value ResponseTimeMapWkt::toJson() const
{
    web::json::value val = web::json::value::object();

    {
        std::vector<web::json::value> jsonArray;
        for( auto& item : m_Results )
        {
            jsonArray.push_back(ModelBase::toJson(item));
        }
        val[utility::conversions::to_string_t("results")] = web::json::value::array(jsonArray);
    }

    return val;
}

void ResponseTimeMapWkt::fromJson(const web::json::value& val)
{
    {
        m_Results.clear();
        std::vector<web::json::value> jsonArray;
        for( auto& item : val.at(utility::conversions::to_string_t("results")).as_array() )
        {
            if(item.is_null())
            {
                m_Results.push_back( std::shared_ptr<ResponseTimeMapWktResult>(nullptr) );
            }
            else
            {
                std::shared_ptr<ResponseTimeMapWktResult> newItem(new ResponseTimeMapWktResult());
                newItem->fromJson(item);
                m_Results.push_back( newItem );
            }
        }
    }
}

void ResponseTimeMapWkt::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }

    {
        std::vector<web::json::value> jsonArray;
        for( auto& item : m_Results )
        {
            jsonArray.push_back(ModelBase::toJson(item));
        }
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("results"), web::json::value::array(jsonArray), utility::conversions::to_string_t("application/json")));
            }
}

void ResponseTimeMapWkt::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }

    {
        m_Results.clear();

        web::json::value jsonArray = web::json::value::parse(ModelBase::stringFromHttpContent(multipart->getContent(utility::conversions::to_string_t("results"))));
        for( auto& item : jsonArray.as_array() )
        {
            if(item.is_null())
            {
                m_Results.push_back( std::shared_ptr<ResponseTimeMapWktResult>(nullptr) );
            }
            else
            {
                std::shared_ptr<ResponseTimeMapWktResult> newItem(new ResponseTimeMapWktResult());
                newItem->fromJson(item);
                m_Results.push_back( newItem );
            }
        }
    }
}

std::vector<std::shared_ptr<ResponseTimeMapWktResult>>& ResponseTimeMapWkt::getResults()
{
    return m_Results;
}

void ResponseTimeMapWkt::setResults(const std::vector<std::shared_ptr<ResponseTimeMapWktResult>>& value)
{
    m_Results = value;
    
}

}
}
}
}


