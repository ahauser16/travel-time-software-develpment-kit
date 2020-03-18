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
pub struct Coords {
    #[serde(rename = "lat")]
    pub lat: f64,
    #[serde(rename = "lng")]
    pub lng: f64,
}

impl Coords {
    pub fn new(lat: f64, lng: f64) -> Coords {
        Coords {
            lat,
            lng,
        }
    }
}


