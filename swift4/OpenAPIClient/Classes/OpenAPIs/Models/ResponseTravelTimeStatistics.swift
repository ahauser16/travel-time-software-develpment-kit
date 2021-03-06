//
// ResponseTravelTimeStatistics.swift
//
// Generated by openapi-generator
// https://openapi-generator.tech
//

import Foundation


public struct ResponseTravelTimeStatistics: Codable { 


    public var min: Int
    public var max: Int
    public var mean: Int
    public var median: Int

    public init(min: Int, max: Int, mean: Int, median: Int) {
        self.min = min
        self.max = max
        self.mean = mean
        self.median = median
    }

}
