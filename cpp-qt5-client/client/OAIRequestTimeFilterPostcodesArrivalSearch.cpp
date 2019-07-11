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


#include "OAIRequestTimeFilterPostcodesArrivalSearch.h"

#include "OAIHelpers.h"

#include <QJsonDocument>
#include <QJsonArray>
#include <QObject>
#include <QDebug>

namespace OpenAPI {

OAIRequestTimeFilterPostcodesArrivalSearch::OAIRequestTimeFilterPostcodesArrivalSearch(QString json) {
    this->init();
    this->fromJson(json);
}

OAIRequestTimeFilterPostcodesArrivalSearch::OAIRequestTimeFilterPostcodesArrivalSearch() {
    this->init();
}

OAIRequestTimeFilterPostcodesArrivalSearch::~OAIRequestTimeFilterPostcodesArrivalSearch() {

}

void
OAIRequestTimeFilterPostcodesArrivalSearch::init() {
    
    m_id_isSet = false;
    m_id_isValid = false;
    
    m_transportation_isSet = false;
    m_transportation_isValid = false;
    
    m_travel_time_isSet = false;
    m_travel_time_isValid = false;
    
    m_arrival_time_isSet = false;
    m_arrival_time_isValid = false;
    
    m_properties_isSet = false;
    m_properties_isValid = false;
    
    m_range_isSet = false;
    m_range_isValid = false;
    }

void
OAIRequestTimeFilterPostcodesArrivalSearch::fromJson(QString jsonString) {
    QByteArray array (jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void
OAIRequestTimeFilterPostcodesArrivalSearch::fromJsonObject(QJsonObject json) {
    
    m_id_isValid = ::OpenAPI::fromJsonValue(id, json[QString("id")]);
    
    
    m_transportation_isValid = ::OpenAPI::fromJsonValue(transportation, json[QString("transportation")]);
    
    
    m_travel_time_isValid = ::OpenAPI::fromJsonValue(travel_time, json[QString("travel_time")]);
    
    
    m_arrival_time_isValid = ::OpenAPI::fromJsonValue(arrival_time, json[QString("arrival_time")]);
    
    
    
    m_properties_isValid = ::OpenAPI::fromJsonValue(properties, json[QString("properties")]);
    
    m_range_isValid = ::OpenAPI::fromJsonValue(range, json[QString("range")]);
    
    
}

QString
OAIRequestTimeFilterPostcodesArrivalSearch::asJson () const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject
OAIRequestTimeFilterPostcodesArrivalSearch::asJsonObject() const {
    QJsonObject obj;
	if(m_id_isSet){
        obj.insert(QString("id"), ::OpenAPI::toJsonValue(id));
    }
	if(transportation.isSet()){
        obj.insert(QString("transportation"), ::OpenAPI::toJsonValue(transportation));
    }
	if(m_travel_time_isSet){
        obj.insert(QString("travel_time"), ::OpenAPI::toJsonValue(travel_time));
    }
	if(m_arrival_time_isSet){
        obj.insert(QString("arrival_time"), ::OpenAPI::toJsonValue(arrival_time));
    }
	
    if(properties.size() > 0){
        obj.insert(QString("properties"), ::OpenAPI::toJsonValue(properties));
    } 
	if(range.isSet()){
        obj.insert(QString("range"), ::OpenAPI::toJsonValue(range));
    }
    return obj;
}


QString
OAIRequestTimeFilterPostcodesArrivalSearch::getId() const {
    return id;
}
void
OAIRequestTimeFilterPostcodesArrivalSearch::setId(const QString &id) {
    this->id = id;
    this->m_id_isSet = true;
}


OAIRequestTransportation
OAIRequestTimeFilterPostcodesArrivalSearch::getTransportation() const {
    return transportation;
}
void
OAIRequestTimeFilterPostcodesArrivalSearch::setTransportation(const OAIRequestTransportation &transportation) {
    this->transportation = transportation;
    this->m_transportation_isSet = true;
}


qint32
OAIRequestTimeFilterPostcodesArrivalSearch::getTravelTime() const {
    return travel_time;
}
void
OAIRequestTimeFilterPostcodesArrivalSearch::setTravelTime(const qint32 &travel_time) {
    this->travel_time = travel_time;
    this->m_travel_time_isSet = true;
}


QDateTime
OAIRequestTimeFilterPostcodesArrivalSearch::getArrivalTime() const {
    return arrival_time;
}
void
OAIRequestTimeFilterPostcodesArrivalSearch::setArrivalTime(const QDateTime &arrival_time) {
    this->arrival_time = arrival_time;
    this->m_arrival_time_isSet = true;
}


QList<OAIRequestTimeFilterPostcodesProperty>
OAIRequestTimeFilterPostcodesArrivalSearch::getProperties() const {
    return properties;
}
void
OAIRequestTimeFilterPostcodesArrivalSearch::setProperties(const QList<OAIRequestTimeFilterPostcodesProperty> &properties) {
    this->properties = properties;
    this->m_properties_isSet = true;
}


OAIRequestRangeFull
OAIRequestTimeFilterPostcodesArrivalSearch::getRange() const {
    return range;
}
void
OAIRequestTimeFilterPostcodesArrivalSearch::setRange(const OAIRequestRangeFull &range) {
    this->range = range;
    this->m_range_isSet = true;
}

bool
OAIRequestTimeFilterPostcodesArrivalSearch::isSet() const {
    bool isObjectUpdated = false;
    do{ 
        if(m_id_isSet){ isObjectUpdated = true; break;}
    
        if(transportation.isSet()){ isObjectUpdated = true; break;}
    
        if(m_travel_time_isSet){ isObjectUpdated = true; break;}
    
        if(m_arrival_time_isSet){ isObjectUpdated = true; break;}
    
        if(properties.size() > 0){ isObjectUpdated = true; break;}
    
        if(range.isSet()){ isObjectUpdated = true; break;}
    }while(false);
    return isObjectUpdated;
}

bool
OAIRequestTimeFilterPostcodesArrivalSearch::isValid() const {
    // only required properties are required for the object to be considered valid
    return m_id_isValid && m_transportation_isValid && m_travel_time_isValid && m_arrival_time_isValid && m_properties_isValid && true;
}

}
