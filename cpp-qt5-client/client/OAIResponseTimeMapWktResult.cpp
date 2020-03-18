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

#include "OAIResponseTimeMapWktResult.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "OAIHelpers.h"

namespace OpenAPI {

OAIResponseTimeMapWktResult::OAIResponseTimeMapWktResult(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

OAIResponseTimeMapWktResult::OAIResponseTimeMapWktResult() {
    this->initializeModel();
}

OAIResponseTimeMapWktResult::~OAIResponseTimeMapWktResult() {}

void OAIResponseTimeMapWktResult::initializeModel() {

    m_search_id_isSet = false;
    m_search_id_isValid = false;

    m_shape_isSet = false;
    m_shape_isValid = false;

    m_properties_isSet = false;
    m_properties_isValid = false;
}

void OAIResponseTimeMapWktResult::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void OAIResponseTimeMapWktResult::fromJsonObject(QJsonObject json) {

    m_search_id_isValid = ::OpenAPI::fromJsonValue(search_id, json[QString("search_id")]);
    m_search_id_isSet = !json[QString("search_id")].isNull() && m_search_id_isValid;

    m_shape_isValid = ::OpenAPI::fromJsonValue(shape, json[QString("shape")]);
    m_shape_isSet = !json[QString("shape")].isNull() && m_shape_isValid;

    m_properties_isValid = ::OpenAPI::fromJsonValue(properties, json[QString("properties")]);
    m_properties_isSet = !json[QString("properties")].isNull() && m_properties_isValid;
}

QString OAIResponseTimeMapWktResult::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject OAIResponseTimeMapWktResult::asJsonObject() const {
    QJsonObject obj;
    if (m_search_id_isSet) {
        obj.insert(QString("search_id"), ::OpenAPI::toJsonValue(search_id));
    }
    if (m_shape_isSet) {
        obj.insert(QString("shape"), ::OpenAPI::toJsonValue(shape));
    }
    if (properties.isSet()) {
        obj.insert(QString("properties"), ::OpenAPI::toJsonValue(properties));
    }
    return obj;
}

QString OAIResponseTimeMapWktResult::getSearchId() const {
    return search_id;
}
void OAIResponseTimeMapWktResult::setSearchId(const QString &search_id) {
    this->search_id = search_id;
    this->m_search_id_isSet = true;
}

QString OAIResponseTimeMapWktResult::getShape() const {
    return shape;
}
void OAIResponseTimeMapWktResult::setShape(const QString &shape) {
    this->shape = shape;
    this->m_shape_isSet = true;
}

OAIResponseTimeMapProperties OAIResponseTimeMapWktResult::getProperties() const {
    return properties;
}
void OAIResponseTimeMapWktResult::setProperties(const OAIResponseTimeMapProperties &properties) {
    this->properties = properties;
    this->m_properties_isSet = true;
}

bool OAIResponseTimeMapWktResult::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (m_search_id_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_shape_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (properties.isSet()) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool OAIResponseTimeMapWktResult::isValid() const {
    // only required properties are required for the object to be considered valid
    return m_search_id_isValid && m_shape_isValid && m_properties_isValid && true;
}

} // namespace OpenAPI
