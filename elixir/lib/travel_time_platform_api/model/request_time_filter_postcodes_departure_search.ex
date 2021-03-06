# NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
# https://openapi-generator.tech
# Do not edit the class manually.

defmodule TravelTimePlatformAPI.Model.RequestTimeFilterPostcodesDepartureSearch do
  @moduledoc """
  
  """

  @derive [Poison.Encoder]
  defstruct [
    :"id",
    :"transportation",
    :"travel_time",
    :"departure_time",
    :"properties",
    :"range"
  ]

  @type t :: %__MODULE__{
    :"id" => String.t,
    :"transportation" => RequestTransportation,
    :"travel_time" => integer(),
    :"departure_time" => DateTime.t,
    :"properties" => [RequestTimeFilterPostcodesProperty],
    :"range" => RequestRangeFull | nil
  }
end

defimpl Poison.Decoder, for: TravelTimePlatformAPI.Model.RequestTimeFilterPostcodesDepartureSearch do
  import TravelTimePlatformAPI.Deserializer
  def decode(value, options) do
    value
    |> deserialize(:"transportation", :struct, TravelTimePlatformAPI.Model.RequestTransportation, options)
    |> deserialize(:"properties", :list, TravelTimePlatformAPI.Model.RequestTimeFilterPostcodesProperty, options)
    |> deserialize(:"range", :struct, TravelTimePlatformAPI.Model.RequestRangeFull, options)
  end
end

