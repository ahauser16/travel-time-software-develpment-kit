//
// ResponseFaresFast.swift
//
// Generated by openapi-generator
// https://openapi-generator.tech
//

import Foundation


public struct ResponseFaresFast: Codable { 


    public var ticketsTotal: [ResponseFareTicket]

    public init(ticketsTotal: [ResponseFareTicket]) {
        self.ticketsTotal = ticketsTotal
    }

    public enum CodingKeys: String, CodingKey { 
        case ticketsTotal = "tickets_total"
    }

}
