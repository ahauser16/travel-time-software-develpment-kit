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
 * OAIRequestTimeFilterPostcodeDistricts.h
 *
 * 
 */

#ifndef OAIRequestTimeFilterPostcodeDistricts_H
#define OAIRequestTimeFilterPostcodeDistricts_H

#include <QJsonObject>


#include "OAIRequestTimeFilterPostcodeDistrictsArrivalSearch.h"
#include "OAIRequestTimeFilterPostcodeDistrictsDepartureSearch.h"
#include <QList>

#include "OAIObject.h"
#include "OAIEnum.h"


namespace OpenAPI {

class OAIRequestTimeFilterPostcodeDistricts: public OAIObject {
public:
    OAIRequestTimeFilterPostcodeDistricts();
    OAIRequestTimeFilterPostcodeDistricts(QString json);
    ~OAIRequestTimeFilterPostcodeDistricts() override;

    QString asJson () const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    
    QList<OAIRequestTimeFilterPostcodeDistrictsDepartureSearch> getDepartureSearches() const;
    void setDepartureSearches(const QList<OAIRequestTimeFilterPostcodeDistrictsDepartureSearch> &departure_searches);

    
    QList<OAIRequestTimeFilterPostcodeDistrictsArrivalSearch> getArrivalSearches() const;
    void setArrivalSearches(const QList<OAIRequestTimeFilterPostcodeDistrictsArrivalSearch> &arrival_searches);

    

    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void init();
    
    QList<OAIRequestTimeFilterPostcodeDistrictsDepartureSearch> departure_searches;
    bool m_departure_searches_isSet;
    bool m_departure_searches_isValid;
    
    QList<OAIRequestTimeFilterPostcodeDistrictsArrivalSearch> arrival_searches;
    bool m_arrival_searches_isSet;
    bool m_arrival_searches_isValid;
    
    };

}

Q_DECLARE_METATYPE(OpenAPI::OAIRequestTimeFilterPostcodeDistricts)

#endif // OAIRequestTimeFilterPostcodeDistricts_H
