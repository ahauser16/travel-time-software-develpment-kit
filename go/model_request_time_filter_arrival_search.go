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
// RequestTimeFilterArrivalSearch struct for RequestTimeFilterArrivalSearch
type RequestTimeFilterArrivalSearch struct {
	Id string `json:"id"`
	DepartureLocationIds []string `json:"departure_location_ids"`
	ArrivalLocationId string `json:"arrival_location_id"`
	Transportation RequestTransportation `json:"transportation"`
	TravelTime int32 `json:"travel_time"`
	ArrivalTime time.Time `json:"arrival_time"`
	Properties []RequestTimeFilterProperty `json:"properties"`
	Range RequestRangeFull `json:"range,omitempty"`
}
