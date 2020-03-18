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

#include "OAIResponseFares.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "OAIHelpers.h"

namespace OpenAPI {

OAIResponseFares::OAIResponseFares(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

OAIResponseFares::OAIResponseFares() {
    this->initializeModel();
}

OAIResponseFares::~OAIResponseFares() {}

void OAIResponseFares::initializeModel() {

    m_breakdown_isSet = false;
    m_breakdown_isValid = false;

    m_tickets_total_isSet = false;
    m_tickets_total_isValid = false;
}

void OAIResponseFares::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void OAIResponseFares::fromJsonObject(QJsonObject json) {

    m_breakdown_isValid = ::OpenAPI::fromJsonValue(breakdown, json[QString("breakdown")]);
    m_breakdown_isSet = !json[QString("breakdown")].isNull() && m_breakdown_isValid;

    m_tickets_total_isValid = ::OpenAPI::fromJsonValue(tickets_total, json[QString("tickets_total")]);
    m_tickets_total_isSet = !json[QString("tickets_total")].isNull() && m_tickets_total_isValid;
}

QString OAIResponseFares::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject OAIResponseFares::asJsonObject() const {
    QJsonObject obj;
    if (breakdown.size() > 0) {
        obj.insert(QString("breakdown"), ::OpenAPI::toJsonValue(breakdown));
    }
    if (tickets_total.size() > 0) {
        obj.insert(QString("tickets_total"), ::OpenAPI::toJsonValue(tickets_total));
    }
    return obj;
}

QList<OAIResponseFaresBreakdownItem> OAIResponseFares::getBreakdown() const {
    return breakdown;
}
void OAIResponseFares::setBreakdown(const QList<OAIResponseFaresBreakdownItem> &breakdown) {
    this->breakdown = breakdown;
    this->m_breakdown_isSet = true;
}

QList<OAIResponseFareTicket> OAIResponseFares::getTicketsTotal() const {
    return tickets_total;
}
void OAIResponseFares::setTicketsTotal(const QList<OAIResponseFareTicket> &tickets_total) {
    this->tickets_total = tickets_total;
    this->m_tickets_total_isSet = true;
}

bool OAIResponseFares::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (breakdown.size() > 0) {
            isObjectUpdated = true;
            break;
        }

        if (tickets_total.size() > 0) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool OAIResponseFares::isValid() const {
    // only required properties are required for the object to be considered valid
    return m_breakdown_isValid && m_tickets_total_isValid && true;
}

} // namespace OpenAPI
