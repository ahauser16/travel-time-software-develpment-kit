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

type ResponseGeocodingGeoJsonFeature struct {

	Type string `json:"type"`

	Geometry ResponseGeocodingGeometry `json:"geometry"`

	Properties ResponseGeocodingProperties `json:"properties"`
}
