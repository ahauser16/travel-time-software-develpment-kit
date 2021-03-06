//
// RequestRoutes.swift
//
// Generated by openapi-generator
// https://openapi-generator.tech
//

import Foundation


public struct RequestRoutes: Codable { 


    public var locations: [RequestLocation]
    public var departureSearches: [RequestRoutesDepartureSearch]?
    public var arrivalSearches: [RequestRoutesArrivalSearch]?

    public init(locations: [RequestLocation], departureSearches: [RequestRoutesDepartureSearch]?, arrivalSearches: [RequestRoutesArrivalSearch]?) {
        self.locations = locations
        self.departureSearches = departureSearches
        self.arrivalSearches = arrivalSearches
    }

    public enum CodingKeys: String, CodingKey { 
        case locations
        case departureSearches = "departure_searches"
        case arrivalSearches = "arrival_searches"
    }

}
