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
 * OAIResponseTimeMapBoundingBoxes.h
 *
 * 
 */

#ifndef OAIResponseTimeMapBoundingBoxes_H
#define OAIResponseTimeMapBoundingBoxes_H

#include <QJsonObject>

#include "OAIResponseTimeMapBoundingBoxesResult.h"
#include <QList>

#include "OAIEnum.h"
#include "OAIObject.h"

namespace OpenAPI {

class OAIResponseTimeMapBoundingBoxes : public OAIObject {
public:
    OAIResponseTimeMapBoundingBoxes();
    OAIResponseTimeMapBoundingBoxes(QString json);
    ~OAIResponseTimeMapBoundingBoxes() override;

    QString asJson() const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    QList<OAIResponseTimeMapBoundingBoxesResult> getResults() const;
    void setResults(const QList<OAIResponseTimeMapBoundingBoxesResult> &results);

    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();

    QList<OAIResponseTimeMapBoundingBoxesResult> results;
    bool m_results_isSet;
    bool m_results_isValid;
};

} // namespace OpenAPI

Q_DECLARE_METATYPE(OpenAPI::OAIResponseTimeMapBoundingBoxes)

#endif // OAIResponseTimeMapBoundingBoxes_H
