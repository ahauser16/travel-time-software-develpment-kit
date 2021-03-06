{-
   TravelTime Platform API
   No description provided (generated by Openapi Generator https://github.com/openapitools/openapi-generator)

   The version of the OpenAPI document: 1.0.0
   Contact: support@igeolise.com

   NOTE: This file is auto generated by the openapi-generator.
   https://github.com/openapitools/openapi-generator.git
   Do not edit this file manually.
-}


module Data.Coords exposing (Coords, decoder, encode, encodeWithTag, toString)

import Dict exposing (Dict)
import Json.Decode as Decode exposing (Decoder)
import Json.Decode.Pipeline exposing (optional, required)
import Json.Encode as Encode


type alias Coords =
    { lat : Float
    , lng : Float
    }


decoder : Decoder Coords
decoder =
    Decode.succeed Coords
        |> required "lat" Decode.float
        |> required "lng" Decode.float



encode : Coords -> Encode.Value
encode =
    Encode.object << encodePairs


encodeWithTag : ( String, String ) -> Coords -> Encode.Value
encodeWithTag (tagField, tag) model =
    Encode.object <| encodePairs model ++ [ ( tagField, Encode.string tag ) ]


encodePairs : Coords -> List (String, Encode.Value)
encodePairs model =
    [ ( "lat", Encode.float model.lat )
    , ( "lng", Encode.float model.lng )
    ]



toString : Coords -> String
toString =
    Encode.encode 0 << encode




