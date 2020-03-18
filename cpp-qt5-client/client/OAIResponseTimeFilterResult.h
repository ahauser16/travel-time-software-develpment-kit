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
 * OAIResponseTimeFilterResult.h
 *
 * 
 */

#ifndef OAIResponseTimeFilterResult_H
#define OAIResponseTimeFilterResult_H

#include <QJsonObject>

#include "OAIResponseTimeFilterLocation.h"
#include <QList>
#include <QString>

#include "OAIEnum.h"
#include "OAIObject.h"

namespace OpenAPI {

class OAIResponseTimeFilterResult : public OAIObject {
public:
    OAIResponseTimeFilterResult();
    OAIResponseTimeFilterResult(QString json);
    ~OAIResponseTimeFilterResult() override;

    QString asJson() const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    QString getSearchId() const;
    void setSearchId(const QString &search_id);

    QList<OAIResponseTimeFilterLocation> getLocations() const;
    void setLocations(const QList<OAIResponseTimeFilterLocation> &locations);

    QList<QString> getUnreachable() const;
    void setUnreachable(const QList<QString> &unreachable);

    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();

    QString search_id;
    bool m_search_id_isSet;
    bool m_search_id_isValid;

    QList<OAIResponseTimeFilterLocation> locations;
    bool m_locations_isSet;
    bool m_locations_isValid;

    QList<QString> unreachable;
    bool m_unreachable_isSet;
    bool m_unreachable_isValid;
};

} // namespace OpenAPI

Q_DECLARE_METATYPE(OpenAPI::OAIResponseTimeFilterResult)

#endif // OAIResponseTimeFilterResult_H
