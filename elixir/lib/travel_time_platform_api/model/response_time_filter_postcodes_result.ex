# NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
# https://openapi-generator.tech
# Do not edit the class manually.

defmodule TravelTimePlatformAPI.Model.ResponseTimeFilterPostcodesResult do
  @moduledoc """
  
  """

  @derive [Poison.Encoder]
  defstruct [
    :"search_id",
    :"postcodes"
  ]

  @type t :: %__MODULE__{
    :"search_id" => String.t,
    :"postcodes" => [ResponseTimeFilterPostcode]
  }
end

defimpl Poison.Decoder, for: TravelTimePlatformAPI.Model.ResponseTimeFilterPostcodesResult do
  import TravelTimePlatformAPI.Deserializer
  def decode(value, options) do
    value
    |> deserialize(:"postcodes", :list, TravelTimePlatformAPI.Model.ResponseTimeFilterPostcode, options)
  end
end

