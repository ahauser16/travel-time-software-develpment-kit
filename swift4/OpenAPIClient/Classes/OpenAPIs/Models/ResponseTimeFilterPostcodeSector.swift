//
// ResponseTimeFilterPostcodeSector.swift
//
// Generated by openapi-generator
// https://openapi-generator.tech
//

import Foundation


public struct ResponseTimeFilterPostcodeSector: Codable { 


    public var code: ModelString
    public var properties: ResponseTimeFilterPostcodeSectorProperties

    public init(code: ModelString, properties: ResponseTimeFilterPostcodeSectorProperties) {
        self.code = code
        self.properties = properties
    }

}
