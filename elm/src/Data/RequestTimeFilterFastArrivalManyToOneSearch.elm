{-
   TravelTime Platform API
   No description provided (generated by Openapi Generator https://github.com/openapitools/openapi-generator)

   The version of the OpenAPI document: 1.0.0
   Contact: support@igeolise.com

   NOTE: This file is auto generated by the openapi-generator.
   https://github.com/openapitools/openapi-generator.git
   Do not edit this file manually.
-}


module Data.RequestTimeFilterFastArrivalManyToOneSearch exposing (RequestTimeFilterFastArrivalManyToOneSearch, decoder, encode, encodeWithTag, toString)

import Data.RequestTransportationFast as RequestTransportationFast exposing (RequestTransportationFast)
import Data.RequestArrivalTimePeriod as RequestArrivalTimePeriod exposing (RequestArrivalTimePeriod)
import Data.RequestTimeFilterFastProperty as RequestTimeFilterFastProperty exposing (RequestTimeFilterFastProperty)
import Dict exposing (Dict)
import Json.Decode as Decode exposing (Decoder)
import Json.Decode.Pipeline exposing (optional, required)
import Json.Encode as Encode


type alias RequestTimeFilterFastArrivalManyToOneSearch =
    { id : String
    , arrivalLocationId : String
    , departureLocationIds : (List String)
    , transportation : RequestTransportationFast
    , travelTime : Int
    , arrivalTimePeriod : RequestArrivalTimePeriod
    , properties : (List RequestTimeFilterFastProperty)
    }


decoder : Decoder RequestTimeFilterFastArrivalManyToOneSearch
decoder =
    Decode.succeed RequestTimeFilterFastArrivalManyToOneSearch
        |> required "id" Decode.string
        |> required "arrival_location_id" Decode.string
        |> required "departure_location_ids" (Decode.list Decode.string)
        |> required "transportation" RequestTransportationFast.decoder
        |> required "travel_time" Decode.int
        |> required "arrival_time_period" RequestArrivalTimePeriod.decoder
        |> required "properties" (Decode.list RequestTimeFilterFastProperty.decoder)



encode : RequestTimeFilterFastArrivalManyToOneSearch -> Encode.Value
encode =
    Encode.object << encodePairs


encodeWithTag : ( String, String ) -> RequestTimeFilterFastArrivalManyToOneSearch -> Encode.Value
encodeWithTag (tagField, tag) model =
    Encode.object <| encodePairs model ++ [ ( tagField, Encode.string tag ) ]


encodePairs : RequestTimeFilterFastArrivalManyToOneSearch -> List (String, Encode.Value)
encodePairs model =
    [ ( "id", Encode.string model.id )
    , ( "arrival_location_id", Encode.string model.arrivalLocationId )
    , ( "departure_location_ids", (Encode.list Encode.string) model.departureLocationIds )
    , ( "transportation", RequestTransportationFast.encode model.transportation )
    , ( "travel_time", Encode.int model.travelTime )
    , ( "arrival_time_period", RequestArrivalTimePeriod.encode model.arrivalTimePeriod )
    , ( "properties", (Encode.list RequestTimeFilterFastProperty.encode) model.properties )
    ]



toString : RequestTimeFilterFastArrivalManyToOneSearch -> String
toString =
    Encode.encode 0 << encode




