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


#include "OAIResponseTimeFilterPostcodeSectorsResult.h"

#include <QJsonDocument>
#include <QJsonArray>
#include <QObject>
#include <QDebug>

#include "OAIHelpers.h"

namespace OpenAPI {

OAIResponseTimeFilterPostcodeSectorsResult::OAIResponseTimeFilterPostcodeSectorsResult(QString json) {
    this->init();
    this->fromJson(json);
}

OAIResponseTimeFilterPostcodeSectorsResult::OAIResponseTimeFilterPostcodeSectorsResult() {
    this->init();
}

OAIResponseTimeFilterPostcodeSectorsResult::~OAIResponseTimeFilterPostcodeSectorsResult() {

}

void
OAIResponseTimeFilterPostcodeSectorsResult::init() {
    
    m_search_id_isSet = false;
    m_search_id_isValid = false;
    
    m_sectors_isSet = false;
    m_sectors_isValid = false;
    }

void
OAIResponseTimeFilterPostcodeSectorsResult::fromJson(QString jsonString) {
    QByteArray array (jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void
OAIResponseTimeFilterPostcodeSectorsResult::fromJsonObject(QJsonObject json) {
    
    m_search_id_isValid = ::OpenAPI::fromJsonValue(search_id, json[QString("search_id")]);
    
    
    
    m_sectors_isValid = ::OpenAPI::fromJsonValue(sectors, json[QString("sectors")]);
    
}

QString
OAIResponseTimeFilterPostcodeSectorsResult::asJson () const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject
OAIResponseTimeFilterPostcodeSectorsResult::asJsonObject() const {
    QJsonObject obj;
    if(m_search_id_isSet){
        obj.insert(QString("search_id"), ::OpenAPI::toJsonValue(search_id));
    }
    
    if(sectors.size() > 0){
        obj.insert(QString("sectors"), ::OpenAPI::toJsonValue(sectors));
    } 
    return obj;
}


QString
OAIResponseTimeFilterPostcodeSectorsResult::getSearchId() const {
    return search_id;
}
void
OAIResponseTimeFilterPostcodeSectorsResult::setSearchId(const QString &search_id) {
    this->search_id = search_id;
    this->m_search_id_isSet = true;
}


QList<OAIResponseTimeFilterPostcodeSector>
OAIResponseTimeFilterPostcodeSectorsResult::getSectors() const {
    return sectors;
}
void
OAIResponseTimeFilterPostcodeSectorsResult::setSectors(const QList<OAIResponseTimeFilterPostcodeSector> &sectors) {
    this->sectors = sectors;
    this->m_sectors_isSet = true;
}

bool
OAIResponseTimeFilterPostcodeSectorsResult::isSet() const {
    bool isObjectUpdated = false;
    do{ 
        if(m_search_id_isSet){ isObjectUpdated = true; break;}
    
        if(sectors.size() > 0){ isObjectUpdated = true; break;}
    }while(false);
    return isObjectUpdated;
}

bool
OAIResponseTimeFilterPostcodeSectorsResult::isValid() const {
    // only required properties are required for the object to be considered valid
    return m_search_id_isValid && m_sectors_isValid && true;
}

}

