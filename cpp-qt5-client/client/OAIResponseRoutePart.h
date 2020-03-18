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
 * OAIResponseRoutePart.h
 *
 * 
 */

#ifndef OAIResponseRoutePart_H
#define OAIResponseRoutePart_H

#include <QJsonObject>

#include "OAICoords.h"
#include "OAIResponseTransportationMode.h"
#include <QList>
#include <QString>

#include "OAIEnum.h"
#include "OAIObject.h"

namespace OpenAPI {

class OAIResponseRoutePart : public OAIObject {
public:
    OAIResponseRoutePart();
    OAIResponseRoutePart(QString json);
    ~OAIResponseRoutePart() override;

    QString asJson() const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    QString getId() const;
    void setId(const QString &id);

    QString getType() const;
    void setType(const QString &type);

    OAIResponseTransportationMode getMode() const;
    void setMode(const OAIResponseTransportationMode &mode);

    QString getDirections() const;
    void setDirections(const QString &directions);

    qint32 getDistance() const;
    void setDistance(const qint32 &distance);

    qint32 getTravelTime() const;
    void setTravelTime(const qint32 &travel_time);

    QList<OAICoords> getCoords() const;
    void setCoords(const QList<OAICoords> &coords);

    QString getDirection() const;
    void setDirection(const QString &direction);

    QString getRoad() const;
    void setRoad(const QString &road);

    QString getTurn() const;
    void setTurn(const QString &turn);

    QString getLine() const;
    void setLine(const QString &line);

    QString getDepartureStation() const;
    void setDepartureStation(const QString &departure_station);

    QString getArrivalStation() const;
    void setArrivalStation(const QString &arrival_station);

    QString getDepartsAt() const;
    void setDepartsAt(const QString &departs_at);

    QString getArrivesAt() const;
    void setArrivesAt(const QString &arrives_at);

    qint32 getNumStops() const;
    void setNumStops(const qint32 &num_stops);

    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();

    QString id;
    bool m_id_isSet;
    bool m_id_isValid;

    QString type;
    bool m_type_isSet;
    bool m_type_isValid;

    OAIResponseTransportationMode mode;
    bool m_mode_isSet;
    bool m_mode_isValid;

    QString directions;
    bool m_directions_isSet;
    bool m_directions_isValid;

    qint32 distance;
    bool m_distance_isSet;
    bool m_distance_isValid;

    qint32 travel_time;
    bool m_travel_time_isSet;
    bool m_travel_time_isValid;

    QList<OAICoords> coords;
    bool m_coords_isSet;
    bool m_coords_isValid;

    QString direction;
    bool m_direction_isSet;
    bool m_direction_isValid;

    QString road;
    bool m_road_isSet;
    bool m_road_isValid;

    QString turn;
    bool m_turn_isSet;
    bool m_turn_isValid;

    QString line;
    bool m_line_isSet;
    bool m_line_isValid;

    QString departure_station;
    bool m_departure_station_isSet;
    bool m_departure_station_isValid;

    QString arrival_station;
    bool m_arrival_station_isSet;
    bool m_arrival_station_isValid;

    QString departs_at;
    bool m_departs_at_isSet;
    bool m_departs_at_isValid;

    QString arrives_at;
    bool m_arrives_at_isSet;
    bool m_arrives_at_isValid;

    qint32 num_stops;
    bool m_num_stops_isSet;
    bool m_num_stops_isValid;
};

} // namespace OpenAPI

Q_DECLARE_METATYPE(OpenAPI::OAIResponseRoutePart)

#endif // OAIResponseRoutePart_H
