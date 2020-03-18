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
import (
	"time"
)
// RequestTimeFilterPostcodesDepartureSearch struct for RequestTimeFilterPostcodesDepartureSearch
type RequestTimeFilterPostcodesDepartureSearch struct {
	Id string `json:"id"`
	Transportation RequestTransportation `json:"transportation"`
	TravelTime int32 `json:"travel_time"`
	DepartureTime time.Time `json:"departure_time"`
	Properties []RequestTimeFilterPostcodesProperty `json:"properties"`
	Range RequestRangeFull `json:"range,omitempty"`
}
