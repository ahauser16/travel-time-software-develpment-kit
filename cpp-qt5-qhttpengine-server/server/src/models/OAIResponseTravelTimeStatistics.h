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
 * OAIResponseTravelTimeStatistics.h
 *
 * 
 */

#ifndef OAIResponseTravelTimeStatistics_H
#define OAIResponseTravelTimeStatistics_H

#include <QJsonObject>



#include "OAIObject.h"
#include "OAIEnum.h"


namespace OpenAPI {

class OAIResponseTravelTimeStatistics: public OAIObject {
public:
    OAIResponseTravelTimeStatistics();
    OAIResponseTravelTimeStatistics(QString json);
    ~OAIResponseTravelTimeStatistics() override;

    QString asJson () const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    
    qint32 getMin() const;
    void setMin(const qint32 &min);

    
    qint32 getMax() const;
    void setMax(const qint32 &max);

    
    qint32 getMean() const;
    void setMean(const qint32 &mean);

    
    qint32 getMedian() const;
    void setMedian(const qint32 &median);

    

    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void init();
    
    qint32 min;
    bool m_min_isSet;
    bool m_min_isValid;
    
    qint32 max;
    bool m_max_isSet;
    bool m_max_isValid;
    
    qint32 mean;
    bool m_mean_isSet;
    bool m_mean_isValid;
    
    qint32 median;
    bool m_median_isSet;
    bool m_median_isValid;
    
    };

}

Q_DECLARE_METATYPE(OpenAPI::OAIResponseTravelTimeStatistics)

#endif // OAIResponseTravelTimeStatistics_H
