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
 * OAICoords.h
 *
 * 
 */

#ifndef OAICoords_H
#define OAICoords_H

#include <QJsonObject>


#include "OAIEnum.h"
#include "OAIObject.h"

namespace OpenAPI {

class OAICoords : public OAIObject {
public:
    OAICoords();
    OAICoords(QString json);
    ~OAICoords() override;

    QString asJson() const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    double getLat() const;
    void setLat(const double &lat);

    double getLng() const;
    void setLng(const double &lng);

    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();

    double lat;
    bool m_lat_isSet;
    bool m_lat_isValid;

    double lng;
    bool m_lng_isSet;
    bool m_lng_isValid;
};

} // namespace OpenAPI

Q_DECLARE_METATYPE(OpenAPI::OAICoords)

#endif // OAICoords_H
