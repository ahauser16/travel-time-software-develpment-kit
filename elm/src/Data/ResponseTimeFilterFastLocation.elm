{-
   TravelTime Platform API
   No description provided (generated by Openapi Generator https://github.com/openapitools/openapi-generator)

   The version of the OpenAPI document: 1.0.0
   Contact: support@igeolise.com

   NOTE: This file is auto generated by the openapi-generator.
   https://github.com/openapitools/openapi-generator.git
   Do not edit this file manually.
-}


module Data.ResponseTimeFilterFastLocation exposing (ResponseTimeFilterFastLocation, decoder, encode, encodeWithTag, toString)

import Data.ResponseTimeFilterFastProperties as ResponseTimeFilterFastProperties exposing (ResponseTimeFilterFastProperties)
import Dict exposing (Dict)
import Json.Decode as Decode exposing (Decoder)
import Json.Decode.Pipeline exposing (optional, required)
import Json.Encode as Encode


type alias ResponseTimeFilterFastLocation =
    { id : String
    , properties : (List ResponseTimeFilterFastProperties)
    }


decoder : Decoder ResponseTimeFilterFastLocation
decoder =
    Decode.succeed ResponseTimeFilterFastLocation
        |> required "id" Decode.string
        |> required "properties" (Decode.list ResponseTimeFilterFastProperties.decoder)



encode : ResponseTimeFilterFastLocation -> Encode.Value
encode =
    Encode.object << encodePairs


encodeWithTag : ( String, String ) -> ResponseTimeFilterFastLocation -> Encode.Value
encodeWithTag (tagField, tag) model =
    Encode.object <| encodePairs model ++ [ ( tagField, Encode.string tag ) ]


encodePairs : ResponseTimeFilterFastLocation -> List (String, Encode.Value)
encodePairs model =
    [ ( "id", Encode.string model.id )
    , ( "properties", (Encode.list ResponseTimeFilterFastProperties.encode) model.properties )
    ]



toString : ResponseTimeFilterFastLocation -> String
toString =
    Encode.encode 0 << encode




