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
 * OAIRequestTimeFilterPostcodeSectorsProperty.h
 *
 * 
 */

#ifndef OAIRequestTimeFilterPostcodeSectorsProperty_H
#define OAIRequestTimeFilterPostcodeSectorsProperty_H

#include <QJsonObject>



#include "OAIObject.h"
#include "OAIEnum.h"

namespace OpenAPI {

class OAIRequestTimeFilterPostcodeSectorsProperty: public OAIEnum {
public:
    OAIRequestTimeFilterPostcodeSectorsProperty();
    OAIRequestTimeFilterPostcodeSectorsProperty(QString json);
    ~OAIRequestTimeFilterPostcodeSectorsProperty() override;

    QString asJson () const override;
    QJsonValue asJsonValue() const override;
    void fromJsonValue(QJsonValue json) override;
    void fromJson(QString jsonString) override;

    
    enum class eOAIRequestTimeFilterPostcodeSectorsProperty {
        INVALID_VALUE_OPENAPI_GENERATED = 0,
        TRAVEL_TIME_REACHABLE, 
        TRAVEL_TIME_ALL, 
        COVERAGE
    };

    OAIRequestTimeFilterPostcodeSectorsProperty::eOAIRequestTimeFilterPostcodeSectorsProperty getValue() const;
    void setValue(const OAIRequestTimeFilterPostcodeSectorsProperty::eOAIRequestTimeFilterPostcodeSectorsProperty& value);
    
    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void init();
    
    eOAIRequestTimeFilterPostcodeSectorsProperty m_value;
    bool m_value_isSet;
    bool m_value_isValid;
};

}

#endif // OAIRequestTimeFilterPostcodeSectorsProperty_H
