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

#include "OAIResponseTimeFilterFastProperties.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "OAIHelpers.h"

namespace OpenAPI {

OAIResponseTimeFilterFastProperties::OAIResponseTimeFilterFastProperties(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

OAIResponseTimeFilterFastProperties::OAIResponseTimeFilterFastProperties() {
    this->initializeModel();
}

OAIResponseTimeFilterFastProperties::~OAIResponseTimeFilterFastProperties() {}

void OAIResponseTimeFilterFastProperties::initializeModel() {

    m_travel_time_isSet = false;
    m_travel_time_isValid = false;

    m_fares_isSet = false;
    m_fares_isValid = false;
}

void OAIResponseTimeFilterFastProperties::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void OAIResponseTimeFilterFastProperties::fromJsonObject(QJsonObject json) {

    m_travel_time_isValid = ::OpenAPI::fromJsonValue(travel_time, json[QString("travel_time")]);
    m_travel_time_isSet = !json[QString("travel_time")].isNull() && m_travel_time_isValid;

    m_fares_isValid = ::OpenAPI::fromJsonValue(fares, json[QString("fares")]);
    m_fares_isSet = !json[QString("fares")].isNull() && m_fares_isValid;
}

QString OAIResponseTimeFilterFastProperties::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject OAIResponseTimeFilterFastProperties::asJsonObject() const {
    QJsonObject obj;
    if (m_travel_time_isSet) {
        obj.insert(QString("travel_time"), ::OpenAPI::toJsonValue(travel_time));
    }
    if (fares.isSet()) {
        obj.insert(QString("fares"), ::OpenAPI::toJsonValue(fares));
    }
    return obj;
}

qint32 OAIResponseTimeFilterFastProperties::getTravelTime() const {
    return travel_time;
}
void OAIResponseTimeFilterFastProperties::setTravelTime(const qint32 &travel_time) {
    this->travel_time = travel_time;
    this->m_travel_time_isSet = true;
}

OAIResponseFaresFast OAIResponseTimeFilterFastProperties::getFares() const {
    return fares;
}
void OAIResponseTimeFilterFastProperties::setFares(const OAIResponseFaresFast &fares) {
    this->fares = fares;
    this->m_fares_isSet = true;
}

bool OAIResponseTimeFilterFastProperties::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (m_travel_time_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (fares.isSet()) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool OAIResponseTimeFilterFastProperties::isValid() const {
    // only required properties are required for the object to be considered valid
    return true;
}

} // namespace OpenAPI
