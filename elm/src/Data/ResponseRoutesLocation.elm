{-
   TravelTime Platform API
   No description provided (generated by Openapi Generator https://github.com/openapitools/openapi-generator)

   The version of the OpenAPI document: 1.0.0
   Contact: support@igeolise.com

   NOTE: This file is auto generated by the openapi-generator.
   https://github.com/openapitools/openapi-generator.git
   Do not edit this file manually.
-}


module Data.ResponseRoutesLocation exposing (ResponseRoutesLocation, decoder, encode, encodeWithTag, toString)

import Data.ResponseRoutesProperties as ResponseRoutesProperties exposing (ResponseRoutesProperties)
import Dict exposing (Dict)
import Json.Decode as Decode exposing (Decoder)
import Json.Decode.Pipeline exposing (optional, required)
import Json.Encode as Encode


type alias ResponseRoutesLocation =
    { id : String
    , properties : (List ResponseRoutesProperties)
    }


decoder : Decoder ResponseRoutesLocation
decoder =
    Decode.succeed ResponseRoutesLocation
        |> required "id" Decode.string
        |> required "properties" (Decode.list ResponseRoutesProperties.decoder)



encode : ResponseRoutesLocation -> Encode.Value
encode =
    Encode.object << encodePairs


encodeWithTag : ( String, String ) -> ResponseRoutesLocation -> Encode.Value
encodeWithTag (tagField, tag) model =
    Encode.object <| encodePairs model ++ [ ( tagField, Encode.string tag ) ]


encodePairs : ResponseRoutesLocation -> List (String, Encode.Value)
encodePairs model =
    [ ( "id", Encode.string model.id )
    , ( "properties", (Encode.list ResponseRoutesProperties.encode) model.properties )
    ]



toString : ResponseRoutesLocation -> String
toString =
    Encode.encode 0 << encode




