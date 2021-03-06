# NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
# https://openapi-generator.tech
# Do not edit the class manually.

defmodule TravelTimePlatformAPI.Model.ResponseRoutes do
  @moduledoc """
  
  """

  @derive [Poison.Encoder]
  defstruct [
    :"results"
  ]

  @type t :: %__MODULE__{
    :"results" => [ResponseRoutesResult]
  }
end

defimpl Poison.Decoder, for: TravelTimePlatformAPI.Model.ResponseRoutes do
  import TravelTimePlatformAPI.Deserializer
  def decode(value, options) do
    value
    |> deserialize(:"results", :list, TravelTimePlatformAPI.Model.ResponseRoutesResult, options)
  end
end

