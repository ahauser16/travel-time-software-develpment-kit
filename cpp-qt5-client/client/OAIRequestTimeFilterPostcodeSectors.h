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
 * OAIRequestTimeFilterPostcodeSectors.h
 *
 * 
 */

#ifndef OAIRequestTimeFilterPostcodeSectors_H
#define OAIRequestTimeFilterPostcodeSectors_H

#include <QJsonObject>

#include "OAIRequestTimeFilterPostcodeSectorsArrivalSearch.h"
#include "OAIRequestTimeFilterPostcodeSectorsDepartureSearch.h"
#include <QList>

#include "OAIEnum.h"
#include "OAIObject.h"

namespace OpenAPI {

class OAIRequestTimeFilterPostcodeSectors : public OAIObject {
public:
    OAIRequestTimeFilterPostcodeSectors();
    OAIRequestTimeFilterPostcodeSectors(QString json);
    ~OAIRequestTimeFilterPostcodeSectors() override;

    QString asJson() const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    QList<OAIRequestTimeFilterPostcodeSectorsDepartureSearch> getDepartureSearches() const;
    void setDepartureSearches(const QList<OAIRequestTimeFilterPostcodeSectorsDepartureSearch> &departure_searches);

    QList<OAIRequestTimeFilterPostcodeSectorsArrivalSearch> getArrivalSearches() const;
    void setArrivalSearches(const QList<OAIRequestTimeFilterPostcodeSectorsArrivalSearch> &arrival_searches);

    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();

    QList<OAIRequestTimeFilterPostcodeSectorsDepartureSearch> departure_searches;
    bool m_departure_searches_isSet;
    bool m_departure_searches_isValid;

    QList<OAIRequestTimeFilterPostcodeSectorsArrivalSearch> arrival_searches;
    bool m_arrival_searches_isSet;
    bool m_arrival_searches_isValid;
};

} // namespace OpenAPI

Q_DECLARE_METATYPE(OpenAPI::OAIRequestTimeFilterPostcodeSectors)

#endif // OAIRequestTimeFilterPostcodeSectors_H
