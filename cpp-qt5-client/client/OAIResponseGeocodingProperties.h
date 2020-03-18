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
 * OAIResponseGeocodingProperties.h
 *
 * 
 */

#ifndef OAIResponseGeocodingProperties_H
#define OAIResponseGeocodingProperties_H

#include <QJsonObject>

#include "OAIResponseMapInfoFeatures.h"
#include <QString>

#include "OAIEnum.h"
#include "OAIObject.h"

namespace OpenAPI {

class OAIResponseGeocodingProperties : public OAIObject {
public:
    OAIResponseGeocodingProperties();
    OAIResponseGeocodingProperties(QString json);
    ~OAIResponseGeocodingProperties() override;

    QString asJson() const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    QString getName() const;
    void setName(const QString &name);

    QString getLabel() const;
    void setLabel(const QString &label);

    double getScore() const;
    void setScore(const double &score);

    QString getHouseNumber() const;
    void setHouseNumber(const QString &house_number);

    QString getStreet() const;
    void setStreet(const QString &street);

    QString getRegion() const;
    void setRegion(const QString &region);

    QString getRegionCode() const;
    void setRegionCode(const QString &region_code);

    QString getNeighbourhood() const;
    void setNeighbourhood(const QString &neighbourhood);

    QString getCounty() const;
    void setCounty(const QString &county);

    QString getMacroregion() const;
    void setMacroregion(const QString &macroregion);

    QString getCity() const;
    void setCity(const QString &city);

    QString getCountry() const;
    void setCountry(const QString &country);

    QString getCountryCode() const;
    void setCountryCode(const QString &country_code);

    QString getContinent() const;
    void setContinent(const QString &continent);

    QString getPostcode() const;
    void setPostcode(const QString &postcode);

    OAIResponseMapInfoFeatures getFeatures() const;
    void setFeatures(const OAIResponseMapInfoFeatures &features);

    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();

    QString name;
    bool m_name_isSet;
    bool m_name_isValid;

    QString label;
    bool m_label_isSet;
    bool m_label_isValid;

    double score;
    bool m_score_isSet;
    bool m_score_isValid;

    QString house_number;
    bool m_house_number_isSet;
    bool m_house_number_isValid;

    QString street;
    bool m_street_isSet;
    bool m_street_isValid;

    QString region;
    bool m_region_isSet;
    bool m_region_isValid;

    QString region_code;
    bool m_region_code_isSet;
    bool m_region_code_isValid;

    QString neighbourhood;
    bool m_neighbourhood_isSet;
    bool m_neighbourhood_isValid;

    QString county;
    bool m_county_isSet;
    bool m_county_isValid;

    QString macroregion;
    bool m_macroregion_isSet;
    bool m_macroregion_isValid;

    QString city;
    bool m_city_isSet;
    bool m_city_isValid;

    QString country;
    bool m_country_isSet;
    bool m_country_isValid;

    QString country_code;
    bool m_country_code_isSet;
    bool m_country_code_isValid;

    QString continent;
    bool m_continent_isSet;
    bool m_continent_isValid;

    QString postcode;
    bool m_postcode_isSet;
    bool m_postcode_isValid;

    OAIResponseMapInfoFeatures features;
    bool m_features_isSet;
    bool m_features_isValid;
};

} // namespace OpenAPI

Q_DECLARE_METATYPE(OpenAPI::OAIResponseGeocodingProperties)

#endif // OAIResponseGeocodingProperties_H
