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

#include "OAIResponseTransportationMode.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "OAIHelpers.h"

namespace OpenAPI {

OAIResponseTransportationMode::OAIResponseTransportationMode(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

OAIResponseTransportationMode::OAIResponseTransportationMode() {
    this->initializeModel();
}

OAIResponseTransportationMode::~OAIResponseTransportationMode() {}

void OAIResponseTransportationMode::initializeModel() {

    m_value_isSet = false;
    m_value_isValid = false;
    m_value = eOAIResponseTransportationMode::INVALID_VALUE_OPENAPI_GENERATED;
}

void OAIResponseTransportationMode::fromJson(QString jsonString) {
    
    if ( jsonString.compare("car", Qt::CaseInsensitive) == 0) {
        m_value = eOAIResponseTransportationMode::CAR;
        m_value_isSet = m_value_isValid = true;
    }
    else if ( jsonString.compare("parking", Qt::CaseInsensitive) == 0) {
        m_value = eOAIResponseTransportationMode::PARKING;
        m_value_isSet = m_value_isValid = true;
    }
    else if ( jsonString.compare("boarding", Qt::CaseInsensitive) == 0) {
        m_value = eOAIResponseTransportationMode::BOARDING;
        m_value_isSet = m_value_isValid = true;
    }
    else if ( jsonString.compare("walk", Qt::CaseInsensitive) == 0) {
        m_value = eOAIResponseTransportationMode::WALK;
        m_value_isSet = m_value_isValid = true;
    }
    else if ( jsonString.compare("bike", Qt::CaseInsensitive) == 0) {
        m_value = eOAIResponseTransportationMode::BIKE;
        m_value_isSet = m_value_isValid = true;
    }
    else if ( jsonString.compare("train", Qt::CaseInsensitive) == 0) {
        m_value = eOAIResponseTransportationMode::TRAIN;
        m_value_isSet = m_value_isValid = true;
    }
    else if ( jsonString.compare("rail_national", Qt::CaseInsensitive) == 0) {
        m_value = eOAIResponseTransportationMode::RAIL_NATIONAL;
        m_value_isSet = m_value_isValid = true;
    }
    else if ( jsonString.compare("rail_overground", Qt::CaseInsensitive) == 0) {
        m_value = eOAIResponseTransportationMode::RAIL_OVERGROUND;
        m_value_isSet = m_value_isValid = true;
    }
    else if ( jsonString.compare("rail_underground", Qt::CaseInsensitive) == 0) {
        m_value = eOAIResponseTransportationMode::RAIL_UNDERGROUND;
        m_value_isSet = m_value_isValid = true;
    }
    else if ( jsonString.compare("rail_dlr", Qt::CaseInsensitive) == 0) {
        m_value = eOAIResponseTransportationMode::RAIL_DLR;
        m_value_isSet = m_value_isValid = true;
    }
    else if ( jsonString.compare("bus", Qt::CaseInsensitive) == 0) {
        m_value = eOAIResponseTransportationMode::BUS;
        m_value_isSet = m_value_isValid = true;
    }
    else if ( jsonString.compare("cable_car", Qt::CaseInsensitive) == 0) {
        m_value = eOAIResponseTransportationMode::CABLE_CAR;
        m_value_isSet = m_value_isValid = true;
    }
    else if ( jsonString.compare("plane", Qt::CaseInsensitive) == 0) {
        m_value = eOAIResponseTransportationMode::PLANE;
        m_value_isSet = m_value_isValid = true;
    }
    else if ( jsonString.compare("ferry", Qt::CaseInsensitive) == 0) {
        m_value = eOAIResponseTransportationMode::FERRY;
        m_value_isSet = m_value_isValid = true;
    }
    else if ( jsonString.compare("coach", Qt::CaseInsensitive) == 0) {
        m_value = eOAIResponseTransportationMode::COACH;
        m_value_isSet = m_value_isValid = true;
    }
}

void OAIResponseTransportationMode::fromJsonValue(QJsonValue json) {
fromJson(json.toString());
}

QString OAIResponseTransportationMode::asJson() const {
    
    QString val;
    switch (m_value){
        case eOAIResponseTransportationMode::CAR:
            val = "car";
            break;
        case eOAIResponseTransportationMode::PARKING:
            val = "parking";
            break;
        case eOAIResponseTransportationMode::BOARDING:
            val = "boarding";
            break;
        case eOAIResponseTransportationMode::WALK:
            val = "walk";
            break;
        case eOAIResponseTransportationMode::BIKE:
            val = "bike";
            break;
        case eOAIResponseTransportationMode::TRAIN:
            val = "train";
            break;
        case eOAIResponseTransportationMode::RAIL_NATIONAL:
            val = "rail_national";
            break;
        case eOAIResponseTransportationMode::RAIL_OVERGROUND:
            val = "rail_overground";
            break;
        case eOAIResponseTransportationMode::RAIL_UNDERGROUND:
            val = "rail_underground";
            break;
        case eOAIResponseTransportationMode::RAIL_DLR:
            val = "rail_dlr";
            break;
        case eOAIResponseTransportationMode::BUS:
            val = "bus";
            break;
        case eOAIResponseTransportationMode::CABLE_CAR:
            val = "cable_car";
            break;
        case eOAIResponseTransportationMode::PLANE:
            val = "plane";
            break;
        case eOAIResponseTransportationMode::FERRY:
            val = "ferry";
            break;
        case eOAIResponseTransportationMode::COACH:
            val = "coach";
            break;
        default:
            break;
    }
    return val;
}

QJsonValue OAIResponseTransportationMode::asJsonValue() const {
    
    return QJsonValue(asJson());
}


OAIResponseTransportationMode::eOAIResponseTransportationMode OAIResponseTransportationMode::getValue() const {
    return m_value;
}

void OAIResponseTransportationMode::setValue(const OAIResponseTransportationMode::eOAIResponseTransportationMode& value){
    m_value = value;
    m_value_isSet = true;
}
bool OAIResponseTransportationMode::isSet() const {
    
    return m_value_isSet;
}

bool OAIResponseTransportationMode::isValid() const {
    // only required properties are required for the object to be considered valid
    return m_value_isValid;
}

} // namespace OpenAPI
