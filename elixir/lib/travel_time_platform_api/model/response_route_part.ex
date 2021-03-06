# NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
# https://openapi-generator.tech
# Do not edit the class manually.

defmodule TravelTimePlatformAPI.Model.ResponseRoutePart do
  @moduledoc """
  
  """

  @derive [Poison.Encoder]
  defstruct [
    :"id",
    :"type",
    :"mode",
    :"directions",
    :"distance",
    :"travel_time",
    :"coords",
    :"direction",
    :"road",
    :"turn",
    :"line",
    :"departure_station",
    :"arrival_station",
    :"departs_at",
    :"arrives_at",
    :"num_stops"
  ]

  @type t :: %__MODULE__{
    :"id" => String.t,
    :"type" => String.t,
    :"mode" => ResponseTransportationMode,
    :"directions" => String.t,
    :"distance" => integer(),
    :"travel_time" => integer(),
    :"coords" => [Coords],
    :"direction" => String.t | nil,
    :"road" => String.t | nil,
    :"turn" => String.t | nil,
    :"line" => String.t | nil,
    :"departure_station" => String.t | nil,
    :"arrival_station" => String.t | nil,
    :"departs_at" => String.t | nil,
    :"arrives_at" => String.t | nil,
    :"num_stops" => integer() | nil
  }
end

defimpl Poison.Decoder, for: TravelTimePlatformAPI.Model.ResponseRoutePart do
  import TravelTimePlatformAPI.Deserializer
  def decode(value, options) do
    value
    |> deserialize(:"mode", :struct, TravelTimePlatformAPI.Model.ResponseTransportationMode, options)
    |> deserialize(:"coords", :list, TravelTimePlatformAPI.Model.Coords, options)
  end
end

