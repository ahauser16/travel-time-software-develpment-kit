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
 * OAIRequestTimeFilterFast.h
 *
 * 
 */

#ifndef OAIRequestTimeFilterFast_H
#define OAIRequestTimeFilterFast_H

#include <QJsonObject>

#include "OAIRequestLocation.h"
#include "OAIRequestTimeFilterFastArrivalSearches.h"
#include <QList>

#include "OAIEnum.h"
#include "OAIObject.h"

namespace OpenAPI {

class OAIRequestTimeFilterFast : public OAIObject {
public:
    OAIRequestTimeFilterFast();
    OAIRequestTimeFilterFast(QString json);
    ~OAIRequestTimeFilterFast() override;

    QString asJson() const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    QList<OAIRequestLocation> getLocations() const;
    void setLocations(const QList<OAIRequestLocation> &locations);

    OAIRequestTimeFilterFastArrivalSearches getArrivalSearches() const;
    void setArrivalSearches(const OAIRequestTimeFilterFastArrivalSearches &arrival_searches);

    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();

    QList<OAIRequestLocation> locations;
    bool m_locations_isSet;
    bool m_locations_isValid;

    OAIRequestTimeFilterFastArrivalSearches arrival_searches;
    bool m_arrival_searches_isSet;
    bool m_arrival_searches_isValid;
};

} // namespace OpenAPI

Q_DECLARE_METATYPE(OpenAPI::OAIRequestTimeFilterFast)

#endif // OAIRequestTimeFilterFast_H
