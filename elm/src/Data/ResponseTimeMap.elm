{-
   TravelTime Platform API
   No description provided (generated by Openapi Generator https://github.com/openapitools/openapi-generator)

   The version of the OpenAPI document: 1.0.0
   Contact: support@igeolise.com

   NOTE: This file is auto generated by the openapi-generator.
   https://github.com/openapitools/openapi-generator.git
   Do not edit this file manually.
-}


module Data.ResponseTimeMap exposing (ResponseTimeMap, decoder, encode, encodeWithTag, toString)

import Data.ResponseTimeMapResult as ResponseTimeMapResult exposing (ResponseTimeMapResult)
import Dict exposing (Dict)
import Json.Decode as Decode exposing (Decoder)
import Json.Decode.Pipeline exposing (optional, required)
import Json.Encode as Encode


type alias ResponseTimeMap =
    { results : (List ResponseTimeMapResult)
    }


decoder : Decoder ResponseTimeMap
decoder =
    Decode.succeed ResponseTimeMap
        |> required "results" (Decode.list ResponseTimeMapResult.decoder)



encode : ResponseTimeMap -> Encode.Value
encode =
    Encode.object << encodePairs


encodeWithTag : ( String, String ) -> ResponseTimeMap -> Encode.Value
encodeWithTag (tagField, tag) model =
    Encode.object <| encodePairs model ++ [ ( tagField, Encode.string tag ) ]


encodePairs : ResponseTimeMap -> List (String, Encode.Value)
encodePairs model =
    [ ( "results", (Encode.list ResponseTimeMapResult.encode) model.results )
    ]



toString : ResponseTimeMap -> String
toString =
    Encode.encode 0 << encode




