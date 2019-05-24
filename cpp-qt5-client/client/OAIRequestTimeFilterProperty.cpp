/**
 * TravelTime Platform API
 * No description provided (generated by Openapi Generator https://github.com/openapitools/openapi-generator)
 *
 * The version of the OpenAPI document: 1.0.0
 * Contact: support@igeolise.com
 *
 * NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */


#include "OAIRequestTimeFilterProperty.h"

#include "OAIHelpers.h"

#include <QJsonDocument>
#include <QJsonArray>
#include <QObject>
#include <QDebug>

namespace OpenAPI {

OAIRequestTimeFilterProperty::OAIRequestTimeFilterProperty(QString json) {
    this->init();
    this->fromJson(json);
}

OAIRequestTimeFilterProperty::OAIRequestTimeFilterProperty() {
    this->init();
}

OAIRequestTimeFilterProperty::~OAIRequestTimeFilterProperty() {

}

void
OAIRequestTimeFilterProperty::init() {
    
    m_value_isSet = false;
    m_value_isValid = false;
    m_value = eOAIRequestTimeFilterProperty::INVALID_VALUE_OPENAPI_GENERATED;
}

void
OAIRequestTimeFilterProperty::fromJson(QString jsonString) {
     
    if ( jsonString.compare("travel_time", Qt::CaseInsensitive) == 0) {
        m_value = eOAIRequestTimeFilterProperty::TRAVEL_TIME;
        m_value_isValid = true;
    } 
    else if ( jsonString.compare("distance", Qt::CaseInsensitive) == 0) {
        m_value = eOAIRequestTimeFilterProperty::DISTANCE;
        m_value_isValid = true;
    } 
    else if ( jsonString.compare("distance_breakdown", Qt::CaseInsensitive) == 0) {
        m_value = eOAIRequestTimeFilterProperty::DISTANCE_BREAKDOWN;
        m_value_isValid = true;
    } 
    else if ( jsonString.compare("fares", Qt::CaseInsensitive) == 0) {
        m_value = eOAIRequestTimeFilterProperty::FARES;
        m_value_isValid = true;
    } 
    else if ( jsonString.compare("route", Qt::CaseInsensitive) == 0) {
        m_value = eOAIRequestTimeFilterProperty::ROUTE;
        m_value_isValid = true;
    }
}

void
OAIRequestTimeFilterProperty::fromJsonValue(QJsonValue json) {
    
    fromJson(json.toString());
}

QString
OAIRequestTimeFilterProperty::asJson () const {
    
    QString val;
    switch (m_value){
        case eOAIRequestTimeFilterProperty::TRAVEL_TIME:
            val = "travel_time";
            break;
        case eOAIRequestTimeFilterProperty::DISTANCE:
            val = "distance";
            break;
        case eOAIRequestTimeFilterProperty::DISTANCE_BREAKDOWN:
            val = "distance_breakdown";
            break;
        case eOAIRequestTimeFilterProperty::FARES:
            val = "fares";
            break;
        case eOAIRequestTimeFilterProperty::ROUTE:
            val = "route";
            break; 
        default:
            break;
    }
    return val;
}

QJsonValue
OAIRequestTimeFilterProperty::asJsonValue() const {
    
    return QJsonValue(asJson());
}


OAIRequestTimeFilterProperty::eOAIRequestTimeFilterProperty OAIRequestTimeFilterProperty::getValue() const {
    return m_value;
}

void OAIRequestTimeFilterProperty::setValue(const OAIRequestTimeFilterProperty::eOAIRequestTimeFilterProperty& value){
    m_value = value;
    m_value_isSet = true;
}
bool
OAIRequestTimeFilterProperty::isSet() const {
    
    return m_value_isSet;
}

bool
OAIRequestTimeFilterProperty::isValid() const {
    // only required properties are required for the object to be considered valid
    return m_value_isValid;
}

}

