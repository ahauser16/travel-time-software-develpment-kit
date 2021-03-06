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
pub struct ResponseMapInfo {
    #[serde(rename = "maps")]
    pub maps: Vec<crate::models::ResponseMapInfoMap>,
}

impl ResponseMapInfo {
    pub fn new(maps: Vec<crate::models::ResponseMapInfoMap>) -> ResponseMapInfo {
        ResponseMapInfo {
            maps,
        }
    }
}


