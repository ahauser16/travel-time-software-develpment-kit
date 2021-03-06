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
 * OAIResponseTimeFilterPostcodesProperties.h
 *
 * 
 */

#ifndef OAIResponseTimeFilterPostcodesProperties_H
#define OAIResponseTimeFilterPostcodesProperties_H

#include <QJsonObject>



#include "OAIObject.h"
#include "OAIEnum.h"


namespace OpenAPI {

class OAIResponseTimeFilterPostcodesProperties: public OAIObject {
public:
    OAIResponseTimeFilterPostcodesProperties();
    OAIResponseTimeFilterPostcodesProperties(QString json);
    ~OAIResponseTimeFilterPostcodesProperties() override;

    QString asJson () const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    
    qint32 getTravelTime() const;
    void setTravelTime(const qint32 &travel_time);

    
    qint32 getDistance() const;
    void setDistance(const qint32 &distance);

    

    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void init();
    
    qint32 travel_time;
    bool m_travel_time_isSet;
    bool m_travel_time_isValid;
    
    qint32 distance;
    bool m_distance_isSet;
    bool m_distance_isValid;
    
    };

}

Q_DECLARE_METATYPE(OpenAPI::OAIResponseTimeFilterPostcodesProperties)

#endif // OAIResponseTimeFilterPostcodesProperties_H
