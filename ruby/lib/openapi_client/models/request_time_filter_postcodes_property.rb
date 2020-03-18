=begin
#TravelTime Platform API

#No description provided (generated by Openapi Generator https://github.com/openapitools/openapi-generator)

The version of the OpenAPI document: 1.0.0
Contact: support@igeolise.com
Generated by: https://openapi-generator.tech
OpenAPI Generator version: 4.2.3

=end

require 'date'

module OpenapiClient
  class RequestTimeFilterPostcodesProperty
    TRAVEL_TIME = "travel_time".freeze
    DISTANCE = "distance".freeze

    # Builds the enum from string
    # @param [String] The enum value in the form of the string
    # @return [String] The enum value
    def self.build_from_hash(value)
      new.build_from_hash(value)
    end

    # Builds the enum from string
    # @param [String] The enum value in the form of the string
    # @return [String] The enum value
    def build_from_hash(value)
      constantValues = RequestTimeFilterPostcodesProperty.constants.select { |c| RequestTimeFilterPostcodesProperty::const_get(c) == value }
      raise "Invalid ENUM value #{value} for class #RequestTimeFilterPostcodesProperty" if constantValues.empty?
      value
    end
  end
end
