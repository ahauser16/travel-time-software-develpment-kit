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
// RequestTimeFilterFastArrivalSearches struct for RequestTimeFilterFastArrivalSearches
type RequestTimeFilterFastArrivalSearches struct {
	ManyToOne []RequestTimeFilterFastArrivalManyToOneSearch `json:"many_to_one,omitempty"`
	OneToMany []RequestTimeFilterFastArrivalOneToManySearch `json:"one_to_many,omitempty"`
}
