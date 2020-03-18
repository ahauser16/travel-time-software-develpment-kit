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


#include "OAIResponseTimeFilterPostcodeDistricts.h"

#include <QJsonDocument>
#include <QJsonArray>
#include <QObject>
#include <QDebug>

#include "OAIHelpers.h"

namespace OpenAPI {

OAIResponseTimeFilterPostcodeDistricts::OAIResponseTimeFilterPostcodeDistricts(QString json) {
    this->init();
    this->fromJson(json);
}

OAIResponseTimeFilterPostcodeDistricts::OAIResponseTimeFilterPostcodeDistricts() {
    this->init();
}

OAIResponseTimeFilterPostcodeDistricts::~OAIResponseTimeFilterPostcodeDistricts() {

}

void
OAIResponseTimeFilterPostcodeDistricts::init() {
    
    m_results_isSet = false;
    m_results_isValid = false;
    }

void
OAIResponseTimeFilterPostcodeDistricts::fromJson(QString jsonString) {
    QByteArray array (jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void
OAIResponseTimeFilterPostcodeDistricts::fromJsonObject(QJsonObject json) {
    
    
    m_results_isValid = ::OpenAPI::fromJsonValue(results, json[QString("results")]);
    
}

QString
OAIResponseTimeFilterPostcodeDistricts::asJson () const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject
OAIResponseTimeFilterPostcodeDistricts::asJsonObject() const {
    QJsonObject obj;
    
    if(results.size() > 0){
        obj.insert(QString("results"), ::OpenAPI::toJsonValue(results));
    } 
    return obj;
}


QList<OAIResponseTimeFilterPostcodeDistrictsResult>
OAIResponseTimeFilterPostcodeDistricts::getResults() const {
    return results;
}
void
OAIResponseTimeFilterPostcodeDistricts::setResults(const QList<OAIResponseTimeFilterPostcodeDistrictsResult> &results) {
    this->results = results;
    this->m_results_isSet = true;
}

bool
OAIResponseTimeFilterPostcodeDistricts::isSet() const {
    bool isObjectUpdated = false;
    do{ 
        if(results.size() > 0){ isObjectUpdated = true; break;}
    }while(false);
    return isObjectUpdated;
}

bool
OAIResponseTimeFilterPostcodeDistricts::isValid() const {
    // only required properties are required for the object to be considered valid
    return m_results_isValid && true;
}

}

