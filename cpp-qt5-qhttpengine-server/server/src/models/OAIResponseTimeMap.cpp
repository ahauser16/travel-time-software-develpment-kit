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


#include "OAIResponseTimeMap.h"

#include <QJsonDocument>
#include <QJsonArray>
#include <QObject>
#include <QDebug>

#include "OAIHelpers.h"

namespace OpenAPI {

OAIResponseTimeMap::OAIResponseTimeMap(QString json) {
    this->init();
    this->fromJson(json);
}

OAIResponseTimeMap::OAIResponseTimeMap() {
    this->init();
}

OAIResponseTimeMap::~OAIResponseTimeMap() {

}

void
OAIResponseTimeMap::init() {
    
    m_results_isSet = false;
    m_results_isValid = false;
    }

void
OAIResponseTimeMap::fromJson(QString jsonString) {
    QByteArray array (jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void
OAIResponseTimeMap::fromJsonObject(QJsonObject json) {
    
    
    m_results_isValid = ::OpenAPI::fromJsonValue(results, json[QString("results")]);
    
}

QString
OAIResponseTimeMap::asJson () const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject
OAIResponseTimeMap::asJsonObject() const {
    QJsonObject obj;
    
    if(results.size() > 0){
        obj.insert(QString("results"), ::OpenAPI::toJsonValue(results));
    } 
    return obj;
}


QList<OAIResponseTimeMapResult>
OAIResponseTimeMap::getResults() const {
    return results;
}
void
OAIResponseTimeMap::setResults(const QList<OAIResponseTimeMapResult> &results) {
    this->results = results;
    this->m_results_isSet = true;
}

bool
OAIResponseTimeMap::isSet() const {
    bool isObjectUpdated = false;
    do{ 
        if(results.size() > 0){ isObjectUpdated = true; break;}
    }while(false);
    return isObjectUpdated;
}

bool
OAIResponseTimeMap::isValid() const {
    // only required properties are required for the object to be considered valid
    return m_results_isValid && true;
}

}

