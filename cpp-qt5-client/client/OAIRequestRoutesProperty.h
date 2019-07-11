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
 * OAIRequestRoutesProperty.h
 *
 * 
 */

#ifndef OAIRequestRoutesProperty_H
#define OAIRequestRoutesProperty_H

#include <QJsonObject>



#include "OAIObject.h"
#include "OAIEnum.h"

namespace OpenAPI {

class OAIRequestRoutesProperty: public OAIEnum {
public:
    OAIRequestRoutesProperty();
    OAIRequestRoutesProperty(QString json);
    ~OAIRequestRoutesProperty() override;

    QString asJson () const override;
    QJsonValue asJsonValue() const override;
    void fromJsonValue(QJsonValue json) override;
    void fromJson(QString jsonString) override;

    
    enum class eOAIRequestRoutesProperty {
        INVALID_VALUE_OPENAPI_GENERATED = 0,
        TRAVEL_TIME, 
        DISTANCE, 
        FARES, 
        ROUTE
    };

    OAIRequestRoutesProperty::eOAIRequestRoutesProperty getValue() const;
    void setValue(const OAIRequestRoutesProperty::eOAIRequestRoutesProperty& value);
    
    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void init();
    
    eOAIRequestRoutesProperty m_value;
    bool m_value_isSet;
    bool m_value_isValid;
};

}

#endif // OAIRequestRoutesProperty_H