=begin
TravelTime Platform API

No description provided (generated by Openapi Generator https://github.com/openapitools/openapi-generator)

The version of the OpenAPI document: 1.0.0
Contact: support@igeolise.com
Generated by: https://github.com/openapitools/openapi-generator.git

=end


class ResponseShape < ApplicationRecord
  validates_presence_of :shell
  validates_presence_of :holes

  serialize :shell, Array
  serialize :holes, Array
end
