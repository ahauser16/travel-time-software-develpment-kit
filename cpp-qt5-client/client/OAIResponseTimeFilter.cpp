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


#include "OAIResponseTimeFilter.h"

#include "OAIHelpers.h"

#include <QJsonDocument>
#include <QJsonArray>
#include <QObject>
#include <QDebug>

namespace OpenAPI {

OAIResponseTimeFilter::OAIResponseTimeFilter(QString json) {
    this->init();
    this->fromJson(json);
}

OAIResponseTimeFilter::OAIResponseTimeFilter() {
    this->init();
}

OAIResponseTimeFilter::~OAIResponseTimeFilter() {

}

void
OAIResponseTimeFilter::init() {
    
    m_results_isSet = false;
    m_results_isValid = false;
    }

void
OAIResponseTimeFilter::fromJson(QString jsonString) {
    QByteArray array (jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void
OAIResponseTimeFilter::fromJsonObject(QJsonObject json) {
    
    
    m_results_isValid = ::OpenAPI::fromJsonValue(results, json[QString("results")]);
    
}

QString
OAIResponseTimeFilter::asJson () const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject
OAIResponseTimeFilter::asJsonObject() const {
    QJsonObject obj;
	
    if(results.size() > 0){
        obj.insert(QString("results"), ::OpenAPI::toJsonValue(results));
    } 
    return obj;
}


QList<OAIResponseTimeFilterResult>
OAIResponseTimeFilter::getResults() const {
    return results;
}
void
OAIResponseTimeFilter::setResults(const QList<OAIResponseTimeFilterResult> &results) {
    this->results = results;
    this->m_results_isSet = true;
}

bool
OAIResponseTimeFilter::isSet() const {
    bool isObjectUpdated = false;
    do{ 
        if(results.size() > 0){ isObjectUpdated = true; break;}
    }while(false);
    return isObjectUpdated;
}

bool
OAIResponseTimeFilter::isValid() const {
    // only required properties are required for the object to be considered valid
    return m_results_isValid && true;
}

}
