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

#include "OAIResponseTimeMapProperties.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "OAIHelpers.h"

namespace OpenAPI {

OAIResponseTimeMapProperties::OAIResponseTimeMapProperties(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

OAIResponseTimeMapProperties::OAIResponseTimeMapProperties() {
    this->initializeModel();
}

OAIResponseTimeMapProperties::~OAIResponseTimeMapProperties() {}

void OAIResponseTimeMapProperties::initializeModel() {

    m_is_only_walking_isSet = false;
    m_is_only_walking_isValid = false;
}

void OAIResponseTimeMapProperties::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void OAIResponseTimeMapProperties::fromJsonObject(QJsonObject json) {

    m_is_only_walking_isValid = ::OpenAPI::fromJsonValue(is_only_walking, json[QString("is_only_walking")]);
    m_is_only_walking_isSet = !json[QString("is_only_walking")].isNull() && m_is_only_walking_isValid;
}

QString OAIResponseTimeMapProperties::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject OAIResponseTimeMapProperties::asJsonObject() const {
    QJsonObject obj;
    if (m_is_only_walking_isSet) {
        obj.insert(QString("is_only_walking"), ::OpenAPI::toJsonValue(is_only_walking));
    }
    return obj;
}

bool OAIResponseTimeMapProperties::isIsOnlyWalking() const {
    return is_only_walking;
}
void OAIResponseTimeMapProperties::setIsOnlyWalking(const bool &is_only_walking) {
    this->is_only_walking = is_only_walking;
    this->m_is_only_walking_isSet = true;
}

bool OAIResponseTimeMapProperties::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (m_is_only_walking_isSet) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool OAIResponseTimeMapProperties::isValid() const {
    // only required properties are required for the object to be considered valid
    return true;
}

} // namespace OpenAPI
