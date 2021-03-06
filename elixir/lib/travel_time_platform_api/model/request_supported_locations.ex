# NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
# https://openapi-generator.tech
# Do not edit the class manually.

defmodule TravelTimePlatformAPI.Model.RequestSupportedLocations do
  @moduledoc """
  
  """

  @derive [Poison.Encoder]
  defstruct [
    :"locations"
  ]

  @type t :: %__MODULE__{
    :"locations" => [RequestLocation]
  }
end

defimpl Poison.Decoder, for: TravelTimePlatformAPI.Model.RequestSupportedLocations do
  import TravelTimePlatformAPI.Deserializer
  def decode(value, options) do
    value
    |> deserialize(:"locations", :list, TravelTimePlatformAPI.Model.RequestLocation, options)
  end
end

