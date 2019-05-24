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


#include "OAIRequestTimeFilterFastArrivalOneToManySearch.h"

#include "OAIHelpers.h"

#include <QJsonDocument>
#include <QJsonArray>
#include <QObject>
#include <QDebug>

namespace OpenAPI {

OAIRequestTimeFilterFastArrivalOneToManySearch::OAIRequestTimeFilterFastArrivalOneToManySearch(QString json) {
    this->init();
    this->fromJson(json);
}

OAIRequestTimeFilterFastArrivalOneToManySearch::OAIRequestTimeFilterFastArrivalOneToManySearch() {
    this->init();
}

OAIRequestTimeFilterFastArrivalOneToManySearch::~OAIRequestTimeFilterFastArrivalOneToManySearch() {

}

void
OAIRequestTimeFilterFastArrivalOneToManySearch::init() {
    
    m_id_isSet = false;
    m_id_isValid = false;
    
    m_departure_location_id_isSet = false;
    m_departure_location_id_isValid = false;
    
    m_arrival_location_ids_isSet = false;
    m_arrival_location_ids_isValid = false;
    
    m_transportation_isSet = false;
    m_transportation_isValid = false;
    
    m_travel_time_isSet = false;
    m_travel_time_isValid = false;
    
    m_arrival_time_period_isSet = false;
    m_arrival_time_period_isValid = false;
    
    m_properties_isSet = false;
    m_properties_isValid = false;
    }

void
OAIRequestTimeFilterFastArrivalOneToManySearch::fromJson(QString jsonString) {
    QByteArray array (jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void
OAIRequestTimeFilterFastArrivalOneToManySearch::fromJsonObject(QJsonObject json) {
    
    m_id_isValid = ::OpenAPI::fromJsonValue(id, json[QString("id")]);
    
    
    m_departure_location_id_isValid = ::OpenAPI::fromJsonValue(departure_location_id, json[QString("departure_location_id")]);
    
    
    
    m_arrival_location_ids_isValid = ::OpenAPI::fromJsonValue(arrival_location_ids, json[QString("arrival_location_ids")]);
    
    m_transportation_isValid = ::OpenAPI::fromJsonValue(transportation, json[QString("transportation")]);
    
    
    m_travel_time_isValid = ::OpenAPI::fromJsonValue(travel_time, json[QString("travel_time")]);
    
    
    m_arrival_time_period_isValid = ::OpenAPI::fromJsonValue(arrival_time_period, json[QString("arrival_time_period")]);
    
    
    
    m_properties_isValid = ::OpenAPI::fromJsonValue(properties, json[QString("properties")]);
    
}

QString
OAIRequestTimeFilterFastArrivalOneToManySearch::asJson () const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject
OAIRequestTimeFilterFastArrivalOneToManySearch::asJsonObject() const {
    QJsonObject obj;
	if(m_id_isSet){
        obj.insert(QString("id"), ::OpenAPI::toJsonValue(id));
    }
	if(m_departure_location_id_isSet){
        obj.insert(QString("departure_location_id"), ::OpenAPI::toJsonValue(departure_location_id));
    }
	
    if(arrival_location_ids.size() > 0){
        obj.insert(QString("arrival_location_ids"), ::OpenAPI::toJsonValue(arrival_location_ids));
    } 
	if(transportation.isSet()){
        obj.insert(QString("transportation"), ::OpenAPI::toJsonValue(transportation));
    }
	if(m_travel_time_isSet){
        obj.insert(QString("travel_time"), ::OpenAPI::toJsonValue(travel_time));
    }
	if(arrival_time_period.isSet()){
        obj.insert(QString("arrival_time_period"), ::OpenAPI::toJsonValue(arrival_time_period));
    }
	
    if(properties.size() > 0){
        obj.insert(QString("properties"), ::OpenAPI::toJsonValue(properties));
    } 
    return obj;
}


QString
OAIRequestTimeFilterFastArrivalOneToManySearch::getId() const {
    return id;
}
void
OAIRequestTimeFilterFastArrivalOneToManySearch::setId(const QString &id) {
    this->id = id;
    this->m_id_isSet = true;
}


QString
OAIRequestTimeFilterFastArrivalOneToManySearch::getDepartureLocationId() const {
    return departure_location_id;
}
void
OAIRequestTimeFilterFastArrivalOneToManySearch::setDepartureLocationId(const QString &departure_location_id) {
    this->departure_location_id = departure_location_id;
    this->m_departure_location_id_isSet = true;
}


QList<QString>
OAIRequestTimeFilterFastArrivalOneToManySearch::getArrivalLocationIds() const {
    return arrival_location_ids;
}
void
OAIRequestTimeFilterFastArrivalOneToManySearch::setArrivalLocationIds(const QList<QString> &arrival_location_ids) {
    this->arrival_location_ids = arrival_location_ids;
    this->m_arrival_location_ids_isSet = true;
}


OAIRequestTransportationFast
OAIRequestTimeFilterFastArrivalOneToManySearch::getTransportation() const {
    return transportation;
}
void
OAIRequestTimeFilterFastArrivalOneToManySearch::setTransportation(const OAIRequestTransportationFast &transportation) {
    this->transportation = transportation;
    this->m_transportation_isSet = true;
}


qint32
OAIRequestTimeFilterFastArrivalOneToManySearch::getTravelTime() const {
    return travel_time;
}
void
OAIRequestTimeFilterFastArrivalOneToManySearch::setTravelTime(const qint32 &travel_time) {
    this->travel_time = travel_time;
    this->m_travel_time_isSet = true;
}


OAIRequestArrivalTimePeriod
OAIRequestTimeFilterFastArrivalOneToManySearch::getArrivalTimePeriod() const {
    return arrival_time_period;
}
void
OAIRequestTimeFilterFastArrivalOneToManySearch::setArrivalTimePeriod(const OAIRequestArrivalTimePeriod &arrival_time_period) {
    this->arrival_time_period = arrival_time_period;
    this->m_arrival_time_period_isSet = true;
}


QList<OAIRequestTimeFilterFastProperty>
OAIRequestTimeFilterFastArrivalOneToManySearch::getProperties() const {
    return properties;
}
void
OAIRequestTimeFilterFastArrivalOneToManySearch::setProperties(const QList<OAIRequestTimeFilterFastProperty> &properties) {
    this->properties = properties;
    this->m_properties_isSet = true;
}

bool
OAIRequestTimeFilterFastArrivalOneToManySearch::isSet() const {
    bool isObjectUpdated = false;
    do{ 
        if(m_id_isSet){ isObjectUpdated = true; break;}
    
        if(m_departure_location_id_isSet){ isObjectUpdated = true; break;}
    
        if(arrival_location_ids.size() > 0){ isObjectUpdated = true; break;}
    
        if(transportation.isSet()){ isObjectUpdated = true; break;}
    
        if(m_travel_time_isSet){ isObjectUpdated = true; break;}
    
        if(arrival_time_period.isSet()){ isObjectUpdated = true; break;}
    
        if(properties.size() > 0){ isObjectUpdated = true; break;}
    }while(false);
    return isObjectUpdated;
}

bool
OAIRequestTimeFilterFastArrivalOneToManySearch::isValid() const {
    // only required properties are required for the object to be considered valid
    return m_id_isValid && m_departure_location_id_isValid && m_arrival_location_ids_isValid && m_transportation_isValid && m_travel_time_isValid && m_arrival_time_period_isValid && m_properties_isValid && true;
}

}

