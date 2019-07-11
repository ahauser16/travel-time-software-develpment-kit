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
 * OAIRequestTransportation.h
 *
 * 
 */

#ifndef OAIRequestTransportation_H
#define OAIRequestTransportation_H

#include <QJsonObject>


#include <QString>

#include "OAIObject.h"
#include "OAIEnum.h"

namespace OpenAPI {

class OAIRequestTransportation: public OAIObject {
public:
    OAIRequestTransportation();
    OAIRequestTransportation(QString json);
    ~OAIRequestTransportation() override;

    QString asJson () const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    
    QString getType() const;
    void setType(const QString &type);

    
    qint32 getPtChangeDelay() const;
    void setPtChangeDelay(const qint32 &pt_change_delay);

    
    qint32 getWalkingTime() const;
    void setWalkingTime(const qint32 &walking_time);

    
    qint32 getDrivingTimeToStation() const;
    void setDrivingTimeToStation(const qint32 &driving_time_to_station);

    
    qint32 getParkingTime() const;
    void setParkingTime(const qint32 &parking_time);

    
    qint32 getBoardingTime() const;
    void setBoardingTime(const qint32 &boarding_time);

    
    
    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void init();
    
    QString type;
    bool m_type_isSet;
    bool m_type_isValid;
    
    qint32 pt_change_delay;
    bool m_pt_change_delay_isSet;
    bool m_pt_change_delay_isValid;
    
    qint32 walking_time;
    bool m_walking_time_isSet;
    bool m_walking_time_isValid;
    
    qint32 driving_time_to_station;
    bool m_driving_time_to_station_isSet;
    bool m_driving_time_to_station_isValid;
    
    qint32 parking_time;
    bool m_parking_time_isSet;
    bool m_parking_time_isValid;
    
    qint32 boarding_time;
    bool m_boarding_time_isSet;
    bool m_boarding_time_isValid;
    
    };

}

#endif // OAIRequestTransportation_H