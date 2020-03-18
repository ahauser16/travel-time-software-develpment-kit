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



#include "RequestTimeFilter.h"

namespace org {
namespace openapitools {
namespace client {
namespace model {




RequestTimeFilter::RequestTimeFilter()
{
    m_Departure_searchesIsSet = false;
    m_Arrival_searchesIsSet = false;
}

RequestTimeFilter::~RequestTimeFilter()
{
}

void RequestTimeFilter::validate()
{
    // TODO: implement validation
}

web::json::value RequestTimeFilter::toJson() const
{
    web::json::value val = web::json::value::object();

    {
        std::vector<web::json::value> jsonArray;
        for( auto& item : m_Locations )
        {
            jsonArray.push_back(ModelBase::toJson(item));
        }
        val[utility::conversions::to_string_t("locations")] = web::json::value::array(jsonArray);
    }
    {
        std::vector<web::json::value> jsonArray;
        for( auto& item : m_Departure_searches )
        {
            jsonArray.push_back(ModelBase::toJson(item));
        }
        if(jsonArray.size() > 0)
        {
            val[utility::conversions::to_string_t("departure_searches")] = web::json::value::array(jsonArray);
        }
    }
    {
        std::vector<web::json::value> jsonArray;
        for( auto& item : m_Arrival_searches )
        {
            jsonArray.push_back(ModelBase::toJson(item));
        }
        if(jsonArray.size() > 0)
        {
            val[utility::conversions::to_string_t("arrival_searches")] = web::json::value::array(jsonArray);
        }
    }

    return val;
}

void RequestTimeFilter::fromJson(const web::json::value& val)
{
    {
        m_Locations.clear();
        std::vector<web::json::value> jsonArray;
        for( auto& item : val.at(utility::conversions::to_string_t("locations")).as_array() )
        {
            if(item.is_null())
            {
                m_Locations.push_back( std::shared_ptr<RequestLocation>(nullptr) );
            }
            else
            {
                std::shared_ptr<RequestLocation> newItem(new RequestLocation());
                newItem->fromJson(item);
                m_Locations.push_back( newItem );
            }
        }
    }
    {
        m_Departure_searches.clear();
        std::vector<web::json::value> jsonArray;
        if(val.has_field(utility::conversions::to_string_t("departure_searches")))
        {
        for( auto& item : val.at(utility::conversions::to_string_t("departure_searches")).as_array() )
        {
            if(item.is_null())
            {
                m_Departure_searches.push_back( std::shared_ptr<RequestTimeFilterDepartureSearch>(nullptr) );
            }
            else
            {
                std::shared_ptr<RequestTimeFilterDepartureSearch> newItem(new RequestTimeFilterDepartureSearch());
                newItem->fromJson(item);
                m_Departure_searches.push_back( newItem );
            }
        }
        }
    }
    {
        m_Arrival_searches.clear();
        std::vector<web::json::value> jsonArray;
        if(val.has_field(utility::conversions::to_string_t("arrival_searches")))
        {
        for( auto& item : val.at(utility::conversions::to_string_t("arrival_searches")).as_array() )
        {
            if(item.is_null())
            {
                m_Arrival_searches.push_back( std::shared_ptr<RequestTimeFilterArrivalSearch>(nullptr) );
            }
            else
            {
                std::shared_ptr<RequestTimeFilterArrivalSearch> newItem(new RequestTimeFilterArrivalSearch());
                newItem->fromJson(item);
                m_Arrival_searches.push_back( newItem );
            }
        }
        }
    }
}

void RequestTimeFilter::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }

    {
        std::vector<web::json::value> jsonArray;
        for( auto& item : m_Locations )
        {
            jsonArray.push_back(ModelBase::toJson(item));
        }
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("locations"), web::json::value::array(jsonArray), utility::conversions::to_string_t("application/json")));
            }
    {
        std::vector<web::json::value> jsonArray;
        for( auto& item : m_Departure_searches )
        {
            jsonArray.push_back(ModelBase::toJson(item));
        }
        
        if(jsonArray.size() > 0)
        {
            multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("departure_searches"), web::json::value::array(jsonArray), utility::conversions::to_string_t("application/json")));
        }
    }
    {
        std::vector<web::json::value> jsonArray;
        for( auto& item : m_Arrival_searches )
        {
            jsonArray.push_back(ModelBase::toJson(item));
        }
        
        if(jsonArray.size() > 0)
        {
            multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("arrival_searches"), web::json::value::array(jsonArray), utility::conversions::to_string_t("application/json")));
        }
    }
}

void RequestTimeFilter::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }

    {
        m_Locations.clear();

        web::json::value jsonArray = web::json::value::parse(ModelBase::stringFromHttpContent(multipart->getContent(utility::conversions::to_string_t("locations"))));
        for( auto& item : jsonArray.as_array() )
        {
            if(item.is_null())
            {
                m_Locations.push_back( std::shared_ptr<RequestLocation>(nullptr) );
            }
            else
            {
                std::shared_ptr<RequestLocation> newItem(new RequestLocation());
                newItem->fromJson(item);
                m_Locations.push_back( newItem );
            }
        }
    }
    {
        m_Departure_searches.clear();
        if(multipart->hasContent(utility::conversions::to_string_t("departure_searches")))
        {

        web::json::value jsonArray = web::json::value::parse(ModelBase::stringFromHttpContent(multipart->getContent(utility::conversions::to_string_t("departure_searches"))));
        for( auto& item : jsonArray.as_array() )
        {
            if(item.is_null())
            {
                m_Departure_searches.push_back( std::shared_ptr<RequestTimeFilterDepartureSearch>(nullptr) );
            }
            else
            {
                std::shared_ptr<RequestTimeFilterDepartureSearch> newItem(new RequestTimeFilterDepartureSearch());
                newItem->fromJson(item);
                m_Departure_searches.push_back( newItem );
            }
        }
        }
    }
    {
        m_Arrival_searches.clear();
        if(multipart->hasContent(utility::conversions::to_string_t("arrival_searches")))
        {

        web::json::value jsonArray = web::json::value::parse(ModelBase::stringFromHttpContent(multipart->getContent(utility::conversions::to_string_t("arrival_searches"))));
        for( auto& item : jsonArray.as_array() )
        {
            if(item.is_null())
            {
                m_Arrival_searches.push_back( std::shared_ptr<RequestTimeFilterArrivalSearch>(nullptr) );
            }
            else
            {
                std::shared_ptr<RequestTimeFilterArrivalSearch> newItem(new RequestTimeFilterArrivalSearch());
                newItem->fromJson(item);
                m_Arrival_searches.push_back( newItem );
            }
        }
        }
    }
}

std::vector<std::shared_ptr<RequestLocation>>& RequestTimeFilter::getLocations()
{
    return m_Locations;
}

void RequestTimeFilter::setLocations(const std::vector<std::shared_ptr<RequestLocation>>& value)
{
    m_Locations = value;
    
}

std::vector<std::shared_ptr<RequestTimeFilterDepartureSearch>>& RequestTimeFilter::getDepartureSearches()
{
    return m_Departure_searches;
}

void RequestTimeFilter::setDepartureSearches(const std::vector<std::shared_ptr<RequestTimeFilterDepartureSearch>>& value)
{
    m_Departure_searches = value;
    m_Departure_searchesIsSet = true;
}

bool RequestTimeFilter::departureSearchesIsSet() const
{
    return m_Departure_searchesIsSet;
}

void RequestTimeFilter::unsetDeparture_searches()
{
    m_Departure_searchesIsSet = false;
}

std::vector<std::shared_ptr<RequestTimeFilterArrivalSearch>>& RequestTimeFilter::getArrivalSearches()
{
    return m_Arrival_searches;
}

void RequestTimeFilter::setArrivalSearches(const std::vector<std::shared_ptr<RequestTimeFilterArrivalSearch>>& value)
{
    m_Arrival_searches = value;
    m_Arrival_searchesIsSet = true;
}

bool RequestTimeFilter::arrivalSearchesIsSet() const
{
    return m_Arrival_searchesIsSet;
}

void RequestTimeFilter::unsetArrival_searches()
{
    m_Arrival_searchesIsSet = false;
}

}
}
}
}


