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
 * OAIRequestTimeFilterDepartureSearch.h
 *
 * 
 */

#ifndef OAIRequestTimeFilterDepartureSearch_H
#define OAIRequestTimeFilterDepartureSearch_H

#include <QJsonObject>


#include "OAIRequestRangeFull.h"
#include "OAIRequestTimeFilterProperty.h"
#include "OAIRequestTransportation.h"
#include <QDateTime>
#include <QList>
#include <QString>

#include "OAIObject.h"
#include "OAIEnum.h"

namespace OpenAPI {

class OAIRequestTimeFilterDepartureSearch: public OAIObject {
public:
    OAIRequestTimeFilterDepartureSearch();
    OAIRequestTimeFilterDepartureSearch(QString json);
    ~OAIRequestTimeFilterDepartureSearch() override;

    QString asJson () const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    
    QString getId() const;
    void setId(const QString &id);

    
    QString getDepartureLocationId() const;
    void setDepartureLocationId(const QString &departure_location_id);

    
    QList<QString> getArrivalLocationIds() const;
    void setArrivalLocationIds(const QList<QString> &arrival_location_ids);

    
    OAIRequestTransportation getTransportation() const;
    void setTransportation(const OAIRequestTransportation &transportation);

    
    qint32 getTravelTime() const;
    void setTravelTime(const qint32 &travel_time);

    
    QDateTime getDepartureTime() const;
    void setDepartureTime(const QDateTime &departure_time);

    
    QList<OAIRequestTimeFilterProperty> getProperties() const;
    void setProperties(const QList<OAIRequestTimeFilterProperty> &properties);

    
    OAIRequestRangeFull getRange() const;
    void setRange(const OAIRequestRangeFull &range);

    
    
    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void init();
    
    QString id;
    bool m_id_isSet;
    bool m_id_isValid;
    
    QString departure_location_id;
    bool m_departure_location_id_isSet;
    bool m_departure_location_id_isValid;
    
    QList<QString> arrival_location_ids;
    bool m_arrival_location_ids_isSet;
    bool m_arrival_location_ids_isValid;
    
    OAIRequestTransportation transportation;
    bool m_transportation_isSet;
    bool m_transportation_isValid;
    
    qint32 travel_time;
    bool m_travel_time_isSet;
    bool m_travel_time_isValid;
    
    QDateTime departure_time;
    bool m_departure_time_isSet;
    bool m_departure_time_isValid;
    
    QList<OAIRequestTimeFilterProperty> properties;
    bool m_properties_isSet;
    bool m_properties_isValid;
    
    OAIRequestRangeFull range;
    bool m_range_isSet;
    bool m_range_isValid;
    
    };

}

#endif // OAIRequestTimeFilterDepartureSearch_H
