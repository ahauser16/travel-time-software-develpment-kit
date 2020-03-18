/*
 * TravelTime Platform API
 *
 * No description provided (generated by Openapi Generator https://github.com/openapitools/openapi-generator)
 *
 * The version of the OpenAPI document: 1.0.0
 * Contact: support@igeolise.com
 * Generated by: https://openapi-generator.tech
 */




#[derive(Clone, Debug, PartialEq, Serialize, Deserialize)]
pub struct ResponseTimeFilterPostcodeDistrict {
    #[serde(rename = "code")]
    pub code: String,
    #[serde(rename = "properties")]
    pub properties: crate::models::ResponseTimeFilterPostcodeDistrictProperties,
}

impl ResponseTimeFilterPostcodeDistrict {
    pub fn new(code: String, properties: crate::models::ResponseTimeFilterPostcodeDistrictProperties) -> ResponseTimeFilterPostcodeDistrict {
        ResponseTimeFilterPostcodeDistrict {
            code,
            properties,
        }
    }
}


