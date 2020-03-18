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

#include "OAIRequestTimeFilterFast.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "OAIHelpers.h"

namespace OpenAPI {

OAIRequestTimeFilterFast::OAIRequestTimeFilterFast(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

OAIRequestTimeFilterFast::OAIRequestTimeFilterFast() {
    this->initializeModel();
}

OAIRequestTimeFilterFast::~OAIRequestTimeFilterFast() {}

void OAIRequestTimeFilterFast::initializeModel() {

    m_locations_isSet = false;
    m_locations_isValid = false;

    m_arrival_searches_isSet = false;
    m_arrival_searches_isValid = false;
}

void OAIRequestTimeFilterFast::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void OAIRequestTimeFilterFast::fromJsonObject(QJsonObject json) {

    m_locations_isValid = ::OpenAPI::fromJsonValue(locations, json[QString("locations")]);
    m_locations_isSet = !json[QString("locations")].isNull() && m_locations_isValid;

    m_arrival_searches_isValid = ::OpenAPI::fromJsonValue(arrival_searches, json[QString("arrival_searches")]);
    m_arrival_searches_isSet = !json[QString("arrival_searches")].isNull() && m_arrival_searches_isValid;
}

QString OAIRequestTimeFilterFast::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject OAIRequestTimeFilterFast::asJsonObject() const {
    QJsonObject obj;
    if (locations.size() > 0) {
        obj.insert(QString("locations"), ::OpenAPI::toJsonValue(locations));
    }
    if (arrival_searches.isSet()) {
        obj.insert(QString("arrival_searches"), ::OpenAPI::toJsonValue(arrival_searches));
    }
    return obj;
}

QList<OAIRequestLocation> OAIRequestTimeFilterFast::getLocations() const {
    return locations;
}
void OAIRequestTimeFilterFast::setLocations(const QList<OAIRequestLocation> &locations) {
    this->locations = locations;
    this->m_locations_isSet = true;
}

OAIRequestTimeFilterFastArrivalSearches OAIRequestTimeFilterFast::getArrivalSearches() const {
    return arrival_searches;
}
void OAIRequestTimeFilterFast::setArrivalSearches(const OAIRequestTimeFilterFastArrivalSearches &arrival_searches) {
    this->arrival_searches = arrival_searches;
    this->m_arrival_searches_isSet = true;
}

bool OAIRequestTimeFilterFast::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (locations.size() > 0) {
            isObjectUpdated = true;
            break;
        }

        if (arrival_searches.isSet()) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool OAIRequestTimeFilterFast::isValid() const {
    // only required properties are required for the object to be considered valid
    return m_locations_isValid && m_arrival_searches_isValid && true;
}

} // namespace OpenAPI
