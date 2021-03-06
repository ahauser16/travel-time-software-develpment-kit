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


#include "OAIRequestTimeMap.h"

#include <QJsonDocument>
#include <QJsonArray>
#include <QObject>
#include <QDebug>

#include "OAIHelpers.h"

namespace OpenAPI {

OAIRequestTimeMap::OAIRequestTimeMap(QString json) {
    this->init();
    this->fromJson(json);
}

OAIRequestTimeMap::OAIRequestTimeMap() {
    this->init();
}

OAIRequestTimeMap::~OAIRequestTimeMap() {

}

void
OAIRequestTimeMap::init() {
    
    m_departure_searches_isSet = false;
    m_departure_searches_isValid = false;
    
    m_arrival_searches_isSet = false;
    m_arrival_searches_isValid = false;
    
    m_unions_isSet = false;
    m_unions_isValid = false;
    
    m_intersections_isSet = false;
    m_intersections_isValid = false;
    }

void
OAIRequestTimeMap::fromJson(QString jsonString) {
    QByteArray array (jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void
OAIRequestTimeMap::fromJsonObject(QJsonObject json) {
    
    
    m_departure_searches_isValid = ::OpenAPI::fromJsonValue(departure_searches, json[QString("departure_searches")]);
    
    
    m_arrival_searches_isValid = ::OpenAPI::fromJsonValue(arrival_searches, json[QString("arrival_searches")]);
    
    
    m_unions_isValid = ::OpenAPI::fromJsonValue(unions, json[QString("unions")]);
    
    
    m_intersections_isValid = ::OpenAPI::fromJsonValue(intersections, json[QString("intersections")]);
    
}

QString
OAIRequestTimeMap::asJson () const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject
OAIRequestTimeMap::asJsonObject() const {
    QJsonObject obj;
    
    if(departure_searches.size() > 0){
        obj.insert(QString("departure_searches"), ::OpenAPI::toJsonValue(departure_searches));
    } 
    
    if(arrival_searches.size() > 0){
        obj.insert(QString("arrival_searches"), ::OpenAPI::toJsonValue(arrival_searches));
    } 
    
    if(unions.size() > 0){
        obj.insert(QString("unions"), ::OpenAPI::toJsonValue(unions));
    } 
    
    if(intersections.size() > 0){
        obj.insert(QString("intersections"), ::OpenAPI::toJsonValue(intersections));
    } 
    return obj;
}


QList<OAIRequestTimeMapDepartureSearch>
OAIRequestTimeMap::getDepartureSearches() const {
    return departure_searches;
}
void
OAIRequestTimeMap::setDepartureSearches(const QList<OAIRequestTimeMapDepartureSearch> &departure_searches) {
    this->departure_searches = departure_searches;
    this->m_departure_searches_isSet = true;
}


QList<OAIRequestTimeMapArrivalSearch>
OAIRequestTimeMap::getArrivalSearches() const {
    return arrival_searches;
}
void
OAIRequestTimeMap::setArrivalSearches(const QList<OAIRequestTimeMapArrivalSearch> &arrival_searches) {
    this->arrival_searches = arrival_searches;
    this->m_arrival_searches_isSet = true;
}


QList<OAIRequestUnionOnIntersection>
OAIRequestTimeMap::getUnions() const {
    return unions;
}
void
OAIRequestTimeMap::setUnions(const QList<OAIRequestUnionOnIntersection> &unions) {
    this->unions = unions;
    this->m_unions_isSet = true;
}


QList<OAIRequestUnionOnIntersection>
OAIRequestTimeMap::getIntersections() const {
    return intersections;
}
void
OAIRequestTimeMap::setIntersections(const QList<OAIRequestUnionOnIntersection> &intersections) {
    this->intersections = intersections;
    this->m_intersections_isSet = true;
}

bool
OAIRequestTimeMap::isSet() const {
    bool isObjectUpdated = false;
    do{ 
        if(departure_searches.size() > 0){ isObjectUpdated = true; break;}
    
        if(arrival_searches.size() > 0){ isObjectUpdated = true; break;}
    
        if(unions.size() > 0){ isObjectUpdated = true; break;}
    
        if(intersections.size() > 0){ isObjectUpdated = true; break;}
    }while(false);
    return isObjectUpdated;
}

bool
OAIRequestTimeMap::isValid() const {
    // only required properties are required for the object to be considered valid
    return true;
}

}

