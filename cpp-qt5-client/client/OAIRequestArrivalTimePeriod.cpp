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


#include "OAIRequestArrivalTimePeriod.h"

#include "OAIHelpers.h"

#include <QJsonDocument>
#include <QJsonArray>
#include <QObject>
#include <QDebug>

namespace OpenAPI {

OAIRequestArrivalTimePeriod::OAIRequestArrivalTimePeriod(QString json) {
    this->init();
    this->fromJson(json);
}

OAIRequestArrivalTimePeriod::OAIRequestArrivalTimePeriod() {
    this->init();
}

OAIRequestArrivalTimePeriod::~OAIRequestArrivalTimePeriod() {

}

void
OAIRequestArrivalTimePeriod::init() {
    
    m_value_isSet = false;
    m_value_isValid = false;
    m_value = eOAIRequestArrivalTimePeriod::INVALID_VALUE_OPENAPI_GENERATED;
}

void
OAIRequestArrivalTimePeriod::fromJson(QString jsonString) {
     
    if ( jsonString.compare("weekday_morning", Qt::CaseInsensitive) == 0) {
        m_value = eOAIRequestArrivalTimePeriod::WEEKDAY_MORNING;
        m_value_isValid = true;
    }
}

void
OAIRequestArrivalTimePeriod::fromJsonValue(QJsonValue json) {
    
    fromJson(json.toString());
}

QString
OAIRequestArrivalTimePeriod::asJson () const {
    
    QString val;
    switch (m_value){
        case eOAIRequestArrivalTimePeriod::WEEKDAY_MORNING:
            val = "weekday_morning";
            break; 
        default:
            break;
    }
    return val;
}

QJsonValue
OAIRequestArrivalTimePeriod::asJsonValue() const {
    
    return QJsonValue(asJson());
}


OAIRequestArrivalTimePeriod::eOAIRequestArrivalTimePeriod OAIRequestArrivalTimePeriod::getValue() const {
    return m_value;
}

void OAIRequestArrivalTimePeriod::setValue(const OAIRequestArrivalTimePeriod::eOAIRequestArrivalTimePeriod& value){
    m_value = value;
    m_value_isSet = true;
}
bool
OAIRequestArrivalTimePeriod::isSet() const {
    
    return m_value_isSet;
}

bool
OAIRequestArrivalTimePeriod::isValid() const {
    // only required properties are required for the object to be considered valid
    return m_value_isValid;
}

}
