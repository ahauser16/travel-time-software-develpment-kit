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



#include "ResponseTimeFilterFastResult.h"

namespace org {
namespace openapitools {
namespace client {
namespace model {




ResponseTimeFilterFastResult::ResponseTimeFilterFastResult()
{
    m_Search_id = utility::conversions::to_string_t("");
    m_Search_idIsSet = false;
    m_LocationsIsSet = false;
    m_UnreachableIsSet = false;
}

ResponseTimeFilterFastResult::~ResponseTimeFilterFastResult()
{
}

void ResponseTimeFilterFastResult::validate()
{
    // TODO: implement validation
}

web::json::value ResponseTimeFilterFastResult::toJson() const
{

    web::json::value val = web::json::value::object();
    
    if(m_Search_idIsSet)
    {
        val[utility::conversions::to_string_t("search_id")] = ModelBase::toJson(m_Search_id);
    }
    if(m_LocationsIsSet)
    {
        val[utility::conversions::to_string_t("locations")] = ModelBase::toJson(m_Locations);
    }
    if(m_UnreachableIsSet)
    {
        val[utility::conversions::to_string_t("unreachable")] = ModelBase::toJson(m_Unreachable);
    }

    return val;
}

bool ResponseTimeFilterFastResult::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("locations")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("locations"));
        if(!fieldValue.is_null())
        {
            std::vector<std::shared_ptr<ResponseTimeFilterFastLocation>> refVal_locations;
            ok &= ModelBase::fromJson(fieldValue, refVal_locations);
            setLocations(refVal_locations);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("unreachable")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("unreachable"));
        if(!fieldValue.is_null())
        {
            std::vector<utility::string_t> refVal_unreachable;
            ok &= ModelBase::fromJson(fieldValue, refVal_unreachable);
            setUnreachable(refVal_unreachable);
        }
    }
    return ok;
}

void ResponseTimeFilterFastResult::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
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
    if(m_LocationsIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("locations"), m_Locations));
    }
    if(m_UnreachableIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("unreachable"), m_Unreachable));
    }
}

bool ResponseTimeFilterFastResult::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
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
    if(multipart->hasContent(utility::conversions::to_string_t("locations")))
    {
        std::vector<std::shared_ptr<ResponseTimeFilterFastLocation>> refVal_locations;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("locations")), refVal_locations );
        setLocations(refVal_locations);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("unreachable")))
    {
        std::vector<utility::string_t> refVal_unreachable;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("unreachable")), refVal_unreachable );
        setUnreachable(refVal_unreachable);
    }
    return ok;
}

utility::string_t ResponseTimeFilterFastResult::getSearchId() const
{
    return m_Search_id;
}

void ResponseTimeFilterFastResult::setSearchId(const utility::string_t& value)
{
    m_Search_id = value;
    m_Search_idIsSet = true;
}

bool ResponseTimeFilterFastResult::searchIdIsSet() const
{
    return m_Search_idIsSet;
}

void ResponseTimeFilterFastResult::unsetSearch_id()
{
    m_Search_idIsSet = false;
}
std::vector<std::shared_ptr<ResponseTimeFilterFastLocation>>& ResponseTimeFilterFastResult::getLocations()
{
    return m_Locations;
}

void ResponseTimeFilterFastResult::setLocations(const std::vector<std::shared_ptr<ResponseTimeFilterFastLocation>>& value)
{
    m_Locations = value;
    m_LocationsIsSet = true;
}

bool ResponseTimeFilterFastResult::locationsIsSet() const
{
    return m_LocationsIsSet;
}

void ResponseTimeFilterFastResult::unsetLocations()
{
    m_LocationsIsSet = false;
}
std::vector<utility::string_t>& ResponseTimeFilterFastResult::getUnreachable()
{
    return m_Unreachable;
}

void ResponseTimeFilterFastResult::setUnreachable(const std::vector<utility::string_t>& value)
{
    m_Unreachable = value;
    m_UnreachableIsSet = true;
}

bool ResponseTimeFilterFastResult::unreachableIsSet() const
{
    return m_UnreachableIsSet;
}

void ResponseTimeFilterFastResult::unsetUnreachable()
{
    m_UnreachableIsSet = false;
}
}
}
}
}


