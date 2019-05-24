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


#include "OAIRequestTimeMapProperty.h"

#include "OAIHelpers.h"

#include <QJsonDocument>
#include <QJsonArray>
#include <QObject>
#include <QDebug>

namespace OpenAPI {

OAIRequestTimeMapProperty::OAIRequestTimeMapProperty(QString json) {
    this->init();
    this->fromJson(json);
}

OAIRequestTimeMapProperty::OAIRequestTimeMapProperty() {
    this->init();
}

OAIRequestTimeMapProperty::~OAIRequestTimeMapProperty() {

}

void
OAIRequestTimeMapProperty::init() {
    
    m_value_isSet = false;
    m_value_isValid = false;
    m_value = eOAIRequestTimeMapProperty::INVALID_VALUE_OPENAPI_GENERATED;
}

void
OAIRequestTimeMapProperty::fromJson(QString jsonString) {
     
    if ( jsonString.compare("is_only_walking", Qt::CaseInsensitive) == 0) {
        m_value = eOAIRequestTimeMapProperty::IS_ONLY_WALKING;
        m_value_isValid = true;
    }
}

void
OAIRequestTimeMapProperty::fromJsonValue(QJsonValue json) {
    
    fromJson(json.toString());
}

QString
OAIRequestTimeMapProperty::asJson () const {
    
    QString val;
    switch (m_value){
        case eOAIRequestTimeMapProperty::IS_ONLY_WALKING:
            val = "is_only_walking";
            break; 
        default:
            break;
    }
    return val;
}

QJsonValue
OAIRequestTimeMapProperty::asJsonValue() const {
    
    return QJsonValue(asJson());
}


OAIRequestTimeMapProperty::eOAIRequestTimeMapProperty OAIRequestTimeMapProperty::getValue() const {
    return m_value;
}

void OAIRequestTimeMapProperty::setValue(const OAIRequestTimeMapProperty::eOAIRequestTimeMapProperty& value){
    m_value = value;
    m_value_isSet = true;
}
bool
OAIRequestTimeMapProperty::isSet() const {
    
    return m_value_isSet;
}

bool
OAIRequestTimeMapProperty::isValid() const {
    // only required properties are required for the object to be considered valid
    return m_value_isValid;
}

}

