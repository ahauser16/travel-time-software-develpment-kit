# NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
# https://openapi-generator.tech
# Do not edit the class manually.

defmodule TravelTimePlatformAPI.Model.ResponseTimeFilterFastResult do
  @moduledoc """
  
  """

  @derive [Poison.Encoder]
  defstruct [
    :"search_id",
    :"locations",
    :"unreachable"
  ]

  @type t :: %__MODULE__{
    :"search_id" => String.t,
    :"locations" => [ResponseTimeFilterFastLocation],
    :"unreachable" => [String.t]
  }
end

defimpl Poison.Decoder, for: TravelTimePlatformAPI.Model.ResponseTimeFilterFastResult do
  import TravelTimePlatformAPI.Deserializer
  def decode(value, options) do
    value
    |> deserialize(:"locations", :list, TravelTimePlatformAPI.Model.ResponseTimeFilterFastLocation, options)
  end
end

