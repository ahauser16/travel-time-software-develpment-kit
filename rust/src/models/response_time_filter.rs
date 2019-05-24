/*
 * TravelTime Platform API
 *
 * No description provided (generated by Openapi Generator https://github.com/openapitools/openapi-generator)
 *
 * The version of the OpenAPI document: 1.0.0
 * Contact: support@igeolise.com
 * Generated by: https://openapi-generator.tech
 */


#[allow(unused_imports)]
use serde_json::Value;

#[derive(Debug, Serialize, Deserialize)]
pub struct ResponseTimeFilter {
    #[serde(rename = "results")]
    pub results: Vec<::models::ResponseTimeFilterResult>,
}

impl ResponseTimeFilter {
    pub fn new(results: Vec<::models::ResponseTimeFilterResult>) -> ResponseTimeFilter {
        ResponseTimeFilter {
            results: results,
        }
    }
}
