/*
 * TravelTime Platform API
 *
 * No description provided (generated by Openapi Generator https://github.com/openapitools/openapi-generator)
 *
 * API version: 1.0.0
 * Contact: support@igeolise.com
 * Generated by: OpenAPI Generator (https://openapi-generator.tech)
 */

package openapi
// ResponseGeocoding struct for ResponseGeocoding
type ResponseGeocoding struct {
	Type string `json:"type"`
	Features []ResponseGeocodingGeoJsonFeature `json:"features"`
}
