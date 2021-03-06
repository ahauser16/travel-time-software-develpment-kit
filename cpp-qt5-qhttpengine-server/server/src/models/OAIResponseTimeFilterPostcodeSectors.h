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

/*
 * OAIResponseTimeFilterPostcodeSectors.h
 *
 * 
 */

#ifndef OAIResponseTimeFilterPostcodeSectors_H
#define OAIResponseTimeFilterPostcodeSectors_H

#include <QJsonObject>


#include "OAIResponseTimeFilterPostcodeSectorsResult.h"
#include <QList>

#include "OAIObject.h"
#include "OAIEnum.h"


namespace OpenAPI {

class OAIResponseTimeFilterPostcodeSectors: public OAIObject {
public:
    OAIResponseTimeFilterPostcodeSectors();
    OAIResponseTimeFilterPostcodeSectors(QString json);
    ~OAIResponseTimeFilterPostcodeSectors() override;

    QString asJson () const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    
    QList<OAIResponseTimeFilterPostcodeSectorsResult> getResults() const;
    void setResults(const QList<OAIResponseTimeFilterPostcodeSectorsResult> &results);

    

    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void init();
    
    QList<OAIResponseTimeFilterPostcodeSectorsResult> results;
    bool m_results_isSet;
    bool m_results_isValid;
    
    };

}

Q_DECLARE_METATYPE(OpenAPI::OAIResponseTimeFilterPostcodeSectors)

#endif // OAIResponseTimeFilterPostcodeSectors_H
