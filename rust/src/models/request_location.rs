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
pub struct RequestLocation {
    #[serde(rename = "id")]
    pub id: String,
    #[serde(rename = "coords")]
    pub coords: crate::models::Coords,
}

impl RequestLocation {
    pub fn new(id: String, coords: crate::models::Coords) -> RequestLocation {
        RequestLocation {
            id,
            coords,
        }
    }
}


