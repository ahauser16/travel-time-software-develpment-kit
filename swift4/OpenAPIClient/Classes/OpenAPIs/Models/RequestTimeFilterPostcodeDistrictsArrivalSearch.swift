//
// RequestTimeFilterPostcodeDistrictsArrivalSearch.swift
//
// Generated by openapi-generator
// https://openapi-generator.tech
//

import Foundation



public struct RequestTimeFilterPostcodeDistrictsArrivalSearch: Codable {

    public var id: String
    public var transportation: RequestTransportation
    public var travelTime: Int
    public var arrivalTime: Date
    public var reachablePostcodesThreshold: Double
    public var properties: [RequestTimeFilterPostcodeDistrictsProperty]
    public var range: RequestRangeFull?

    public init(id: String, transportation: RequestTransportation, travelTime: Int, arrivalTime: Date, reachablePostcodesThreshold: Double, properties: [RequestTimeFilterPostcodeDistrictsProperty], range: RequestRangeFull?) {
        self.id = id
        self.transportation = transportation
        self.travelTime = travelTime
        self.arrivalTime = arrivalTime
        self.reachablePostcodesThreshold = reachablePostcodesThreshold
        self.properties = properties
        self.range = range
    }

    public enum CodingKeys: String, CodingKey { 
        case id
        case transportation
        case travelTime = "travel_time"
        case arrivalTime = "arrival_time"
        case reachablePostcodesThreshold = "reachable_postcodes_threshold"
        case properties
        case range
    }


}

