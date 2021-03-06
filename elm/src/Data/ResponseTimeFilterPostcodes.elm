{-
   TravelTime Platform API
   No description provided (generated by Openapi Generator https://github.com/openapitools/openapi-generator)

   The version of the OpenAPI document: 1.0.0
   Contact: support@igeolise.com

   NOTE: This file is auto generated by the openapi-generator.
   https://github.com/openapitools/openapi-generator.git
   Do not edit this file manually.
-}


module Data.ResponseTimeFilterPostcodes exposing (ResponseTimeFilterPostcodes, decoder, encode, encodeWithTag, toString)

import Data.ResponseTimeFilterPostcodesResult as ResponseTimeFilterPostcodesResult exposing (ResponseTimeFilterPostcodesResult)
import Dict exposing (Dict)
import Json.Decode as Decode exposing (Decoder)
import Json.Decode.Pipeline exposing (optional, required)
import Json.Encode as Encode


type alias ResponseTimeFilterPostcodes =
    { results : (List ResponseTimeFilterPostcodesResult)
    }


decoder : Decoder ResponseTimeFilterPostcodes
decoder =
    Decode.succeed ResponseTimeFilterPostcodes
        |> required "results" (Decode.list ResponseTimeFilterPostcodesResult.decoder)



encode : ResponseTimeFilterPostcodes -> Encode.Value
encode =
    Encode.object << encodePairs


encodeWithTag : ( String, String ) -> ResponseTimeFilterPostcodes -> Encode.Value
encodeWithTag (tagField, tag) model =
    Encode.object <| encodePairs model ++ [ ( tagField, Encode.string tag ) ]


encodePairs : ResponseTimeFilterPostcodes -> List (String, Encode.Value)
encodePairs model =
    [ ( "results", (Encode.list ResponseTimeFilterPostcodesResult.encode) model.results )
    ]



toString : ResponseTimeFilterPostcodes -> String
toString =
    Encode.encode 0 << encode




