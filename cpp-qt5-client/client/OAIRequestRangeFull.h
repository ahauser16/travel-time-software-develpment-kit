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
 * OAIRequestRangeFull.h
 *
 * 
 */

#ifndef OAIRequestRangeFull_H
#define OAIRequestRangeFull_H

#include <QJsonObject>


#include "OAIEnum.h"
#include "OAIObject.h"

namespace OpenAPI {

class OAIRequestRangeFull : public OAIObject {
public:
    OAIRequestRangeFull();
    OAIRequestRangeFull(QString json);
    ~OAIRequestRangeFull() override;

    QString asJson() const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    bool isEnabled() const;
    void setEnabled(const bool &enabled);

    qint32 getMaxResults() const;
    void setMaxResults(const qint32 &max_results);

    qint32 getWidth() const;
    void setWidth(const qint32 &width);

    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();

    bool enabled;
    bool m_enabled_isSet;
    bool m_enabled_isValid;

    qint32 max_results;
    bool m_max_results_isSet;
    bool m_max_results_isValid;

    qint32 width;
    bool m_width_isSet;
    bool m_width_isValid;
};

} // namespace OpenAPI

Q_DECLARE_METATYPE(OpenAPI::OAIRequestRangeFull)

#endif // OAIRequestRangeFull_H
