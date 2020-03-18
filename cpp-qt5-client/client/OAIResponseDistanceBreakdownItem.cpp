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

#include "OAIResponseDistanceBreakdownItem.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "OAIHelpers.h"

namespace OpenAPI {

OAIResponseDistanceBreakdownItem::OAIResponseDistanceBreakdownItem(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

OAIResponseDistanceBreakdownItem::OAIResponseDistanceBreakdownItem() {
    this->initializeModel();
}

OAIResponseDistanceBreakdownItem::~OAIResponseDistanceBreakdownItem() {}

void OAIResponseDistanceBreakdownItem::initializeModel() {

    m_mode_isSet = false;
    m_mode_isValid = false;

    m_distance_isSet = false;
    m_distance_isValid = false;
}

void OAIResponseDistanceBreakdownItem::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void OAIResponseDistanceBreakdownItem::fromJsonObject(QJsonObject json) {

    m_mode_isValid = ::OpenAPI::fromJsonValue(mode, json[QString("mode")]);
    m_mode_isSet = !json[QString("mode")].isNull() && m_mode_isValid;

    m_distance_isValid = ::OpenAPI::fromJsonValue(distance, json[QString("distance")]);
    m_distance_isSet = !json[QString("distance")].isNull() && m_distance_isValid;
}

QString OAIResponseDistanceBreakdownItem::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject OAIResponseDistanceBreakdownItem::asJsonObject() const {
    QJsonObject obj;
    if (mode.isSet()) {
        obj.insert(QString("mode"), ::OpenAPI::toJsonValue(mode));
    }
    if (m_distance_isSet) {
        obj.insert(QString("distance"), ::OpenAPI::toJsonValue(distance));
    }
    return obj;
}

OAIResponseTransportationMode OAIResponseDistanceBreakdownItem::getMode() const {
    return mode;
}
void OAIResponseDistanceBreakdownItem::setMode(const OAIResponseTransportationMode &mode) {
    this->mode = mode;
    this->m_mode_isSet = true;
}

qint32 OAIResponseDistanceBreakdownItem::getDistance() const {
    return distance;
}
void OAIResponseDistanceBreakdownItem::setDistance(const qint32 &distance) {
    this->distance = distance;
    this->m_distance_isSet = true;
}

bool OAIResponseDistanceBreakdownItem::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (mode.isSet()) {
            isObjectUpdated = true;
            break;
        }

        if (m_distance_isSet) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool OAIResponseDistanceBreakdownItem::isValid() const {
    // only required properties are required for the object to be considered valid
    return m_mode_isValid && m_distance_isValid && true;
}

} // namespace OpenAPI
