//
// ResponseSupportedLocation.swift
//
// Generated by openapi-generator
// https://openapi-generator.tech
//

import Foundation



public struct ResponseSupportedLocation: Codable {

    public var id: String
    public var mapName: String

    public init(id: String, mapName: String) {
        self.id = id
        self.mapName = mapName
    }

    public enum CodingKeys: String, CodingKey { 
        case id
        case mapName = "map_name"
    }


}

