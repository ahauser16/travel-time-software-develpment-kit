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
pub struct ResponseRoutes {
    #[serde(rename = "results")]
    pub results: Vec<crate::models::ResponseRoutesResult>,
}

impl ResponseRoutes {
    pub fn new(results: Vec<crate::models::ResponseRoutesResult>) -> ResponseRoutes {
        ResponseRoutes {
            results,
        }
    }
}


