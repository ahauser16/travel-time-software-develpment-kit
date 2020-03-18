//
// RequestRangeFull.swift
//
// Generated by openapi-generator
// https://openapi-generator.tech
//

import Foundation


public struct RequestRangeFull: Codable { 


    public var enabled: Bool
    public var maxResults: Int
    public var width: Int

    public init(enabled: Bool, maxResults: Int, width: Int) {
        self.enabled = enabled
        self.maxResults = maxResults
        self.width = width
    }

    public enum CodingKeys: String, CodingKey { 
        case enabled
        case maxResults = "max_results"
        case width
    }

}
