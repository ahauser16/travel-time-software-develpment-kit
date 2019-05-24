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
pub struct RequestTimeFilterPostcodes {
    #[serde(rename = "departure_searches")]
    pub departure_searches: Option<Vec<::models::RequestTimeFilterPostcodesDepartureSearch>>,
    #[serde(rename = "arrival_searches")]
    pub arrival_searches: Option<Vec<::models::RequestTimeFilterPostcodesArrivalSearch>>,
}

impl RequestTimeFilterPostcodes {
    pub fn new() -> RequestTimeFilterPostcodes {
        RequestTimeFilterPostcodes {
            departure_searches: None,
            arrival_searches: None,
        }
    }
}
