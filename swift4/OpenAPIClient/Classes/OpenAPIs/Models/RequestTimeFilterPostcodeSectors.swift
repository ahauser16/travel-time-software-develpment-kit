//
// RequestTimeFilterPostcodeSectors.swift
//
// Generated by openapi-generator
// https://openapi-generator.tech
//

import Foundation


public struct RequestTimeFilterPostcodeSectors: Codable { 


    public var departureSearches: [RequestTimeFilterPostcodeSectorsDepartureSearch]?
    public var arrivalSearches: [RequestTimeFilterPostcodeSectorsArrivalSearch]?

    public init(departureSearches: [RequestTimeFilterPostcodeSectorsDepartureSearch]?, arrivalSearches: [RequestTimeFilterPostcodeSectorsArrivalSearch]?) {
        self.departureSearches = departureSearches
        self.arrivalSearches = arrivalSearches
    }

    public enum CodingKeys: String, CodingKey { 
        case departureSearches = "departure_searches"
        case arrivalSearches = "arrival_searches"
    }

}
