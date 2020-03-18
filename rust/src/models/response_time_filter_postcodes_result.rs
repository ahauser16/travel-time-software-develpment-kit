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
pub struct ResponseTimeFilterPostcodesResult {
    #[serde(rename = "search_id")]
    pub search_id: String,
    #[serde(rename = "postcodes")]
    pub postcodes: Vec<crate::models::ResponseTimeFilterPostcode>,
}

impl ResponseTimeFilterPostcodesResult {
    pub fn new(search_id: String, postcodes: Vec<crate::models::ResponseTimeFilterPostcode>) -> ResponseTimeFilterPostcodesResult {
        ResponseTimeFilterPostcodesResult {
            search_id,
            postcodes,
        }
    }
}


