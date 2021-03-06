# NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
# https://openapi-generator.tech
# Do not edit the class manually.

defmodule TravelTimePlatformAPI.Model.RequestTimeFilterFastArrivalManyToOneSearch do
  @moduledoc """
  
  """

  @derive [Poison.Encoder]
  defstruct [
    :"id",
    :"arrival_location_id",
    :"departure_location_ids",
    :"transportation",
    :"travel_time",
    :"arrival_time_period",
    :"properties"
  ]

  @type t :: %__MODULE__{
    :"id" => String.t,
    :"arrival_location_id" => String.t,
    :"departure_location_ids" => [String.t],
    :"transportation" => RequestTransportationFast,
    :"travel_time" => integer(),
    :"arrival_time_period" => RequestArrivalTimePeriod,
    :"properties" => [RequestTimeFilterFastProperty]
  }
end

defimpl Poison.Decoder, for: TravelTimePlatformAPI.Model.RequestTimeFilterFastArrivalManyToOneSearch do
  import TravelTimePlatformAPI.Deserializer
  def decode(value, options) do
    value
    |> deserialize(:"transportation", :struct, TravelTimePlatformAPI.Model.RequestTransportationFast, options)
    |> deserialize(:"arrival_time_period", :struct, TravelTimePlatformAPI.Model.RequestArrivalTimePeriod, options)
    |> deserialize(:"properties", :list, TravelTimePlatformAPI.Model.RequestTimeFilterFastProperty, options)
  end
end

