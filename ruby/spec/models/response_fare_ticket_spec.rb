=begin
#TravelTime Platform API

#No description provided (generated by Openapi Generator https://github.com/openapitools/openapi-generator)

The version of the OpenAPI document: 1.0.0
Contact: support@igeolise.com
Generated by: https://openapi-generator.tech
OpenAPI Generator version: 4.0.0

=end

require 'spec_helper'
require 'json'
require 'date'

# Unit tests for OpenapiClient::ResponseFareTicket
# Automatically generated by openapi-generator (https://openapi-generator.tech)
# Please update as you see appropriate
describe 'ResponseFareTicket' do
  before do
    # run before each test
    @instance = OpenapiClient::ResponseFareTicket.new
  end

  after do
    # run after each test
  end

  describe 'test an instance of ResponseFareTicket' do
    it 'should create an instance of ResponseFareTicket' do
      expect(@instance).to be_instance_of(OpenapiClient::ResponseFareTicket)
    end
  end
  describe 'test attribute "type"' do
    it 'should work' do
      # assertion here. ref: https://www.relishapp.com/rspec/rspec-expectations/docs/built-in-matchers
      # validator = Petstore::EnumTest::EnumAttributeValidator.new('String', ["single", "week", "month", "year"])
      # validator.allowable_values.each do |value|
      #   expect { @instance.type = value }.not_to raise_error
      # end
    end
  end

  describe 'test attribute "price"' do
    it 'should work' do
      # assertion here. ref: https://www.relishapp.com/rspec/rspec-expectations/docs/built-in-matchers
    end
  end

  describe 'test attribute "currency"' do
    it 'should work' do
      # assertion here. ref: https://www.relishapp.com/rspec/rspec-expectations/docs/built-in-matchers
    end
  end

end
