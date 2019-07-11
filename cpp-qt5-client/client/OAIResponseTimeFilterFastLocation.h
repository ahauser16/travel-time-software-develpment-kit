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
 * OAIResponseTimeFilterFastLocation.h
 *
 * 
 */

#ifndef OAIResponseTimeFilterFastLocation_H
#define OAIResponseTimeFilterFastLocation_H

#include <QJsonObject>


#include "OAIResponseTimeFilterFastProperties.h"
#include <QList>
#include <QString>

#include "OAIObject.h"
#include "OAIEnum.h"

namespace OpenAPI {

class OAIResponseTimeFilterFastLocation: public OAIObject {
public:
    OAIResponseTimeFilterFastLocation();
    OAIResponseTimeFilterFastLocation(QString json);
    ~OAIResponseTimeFilterFastLocation() override;

    QString asJson () const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    
    QString getId() const;
    void setId(const QString &id);

    
    QList<OAIResponseTimeFilterFastProperties> getProperties() const;
    void setProperties(const QList<OAIResponseTimeFilterFastProperties> &properties);

    
    
    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void init();
    
    QString id;
    bool m_id_isSet;
    bool m_id_isValid;
    
    QList<OAIResponseTimeFilterFastProperties> properties;
    bool m_properties_isSet;
    bool m_properties_isValid;
    
    };

}

#endif // OAIResponseTimeFilterFastLocation_H