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

#include "OAIResponseTimeMapBoundingBoxesResult.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "OAIHelpers.h"

namespace OpenAPI {

OAIResponseTimeMapBoundingBoxesResult::OAIResponseTimeMapBoundingBoxesResult(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

OAIResponseTimeMapBoundingBoxesResult::OAIResponseTimeMapBoundingBoxesResult() {
    this->initializeModel();
}

OAIResponseTimeMapBoundingBoxesResult::~OAIResponseTimeMapBoundingBoxesResult() {}

void OAIResponseTimeMapBoundingBoxesResult::initializeModel() {

    m_search_id_isSet = false;
    m_search_id_isValid = false;

    m_bounding_boxes_isSet = false;
    m_bounding_boxes_isValid = false;

    m_properties_isSet = false;
    m_properties_isValid = false;
}

void OAIResponseTimeMapBoundingBoxesResult::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void OAIResponseTimeMapBoundingBoxesResult::fromJsonObject(QJsonObject json) {

    m_search_id_isValid = ::OpenAPI::fromJsonValue(search_id, json[QString("search_id")]);
    m_search_id_isSet = !json[QString("search_id")].isNull() && m_search_id_isValid;

    m_bounding_boxes_isValid = ::OpenAPI::fromJsonValue(bounding_boxes, json[QString("bounding_boxes")]);
    m_bounding_boxes_isSet = !json[QString("bounding_boxes")].isNull() && m_bounding_boxes_isValid;

    m_properties_isValid = ::OpenAPI::fromJsonValue(properties, json[QString("properties")]);
    m_properties_isSet = !json[QString("properties")].isNull() && m_properties_isValid;
}

QString OAIResponseTimeMapBoundingBoxesResult::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject OAIResponseTimeMapBoundingBoxesResult::asJsonObject() const {
    QJsonObject obj;
    if (m_search_id_isSet) {
        obj.insert(QString("search_id"), ::OpenAPI::toJsonValue(search_id));
    }
    if (bounding_boxes.size() > 0) {
        obj.insert(QString("bounding_boxes"), ::OpenAPI::toJsonValue(bounding_boxes));
    }
    if (properties.isSet()) {
        obj.insert(QString("properties"), ::OpenAPI::toJsonValue(properties));
    }
    return obj;
}

QString OAIResponseTimeMapBoundingBoxesResult::getSearchId() const {
    return search_id;
}
void OAIResponseTimeMapBoundingBoxesResult::setSearchId(const QString &search_id) {
    this->search_id = search_id;
    this->m_search_id_isSet = true;
}

QList<OAIResponseBoundingBox> OAIResponseTimeMapBoundingBoxesResult::getBoundingBoxes() const {
    return bounding_boxes;
}
void OAIResponseTimeMapBoundingBoxesResult::setBoundingBoxes(const QList<OAIResponseBoundingBox> &bounding_boxes) {
    this->bounding_boxes = bounding_boxes;
    this->m_bounding_boxes_isSet = true;
}

OAIResponseTimeMapProperties OAIResponseTimeMapBoundingBoxesResult::getProperties() const {
    return properties;
}
void OAIResponseTimeMapBoundingBoxesResult::setProperties(const OAIResponseTimeMapProperties &properties) {
    this->properties = properties;
    this->m_properties_isSet = true;
}

bool OAIResponseTimeMapBoundingBoxesResult::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (m_search_id_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (bounding_boxes.size() > 0) {
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

bool OAIResponseTimeMapBoundingBoxesResult::isValid() const {
    // only required properties are required for the object to be considered valid
    return m_search_id_isValid && m_bounding_boxes_isValid && m_properties_isValid && true;
}

} // namespace OpenAPI
