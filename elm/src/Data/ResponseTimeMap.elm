{-
   TravelTime Platform API
   No description provided (generated by Openapi Generator https://github.com/openapitools/openapi-generator)

   The version of the OpenAPI document: 1.0.0
   Contact: support@igeolise.com

   NOTE: This file is auto generated by the openapi-generator.
   https://github.com/openapitools/openapi-generator.git
   Do not edit this file manually.
-}


module Data.ResponseTimeMap exposing (ResponseTimeMap, decoder, encode)

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
encode model =
    Encode.object
        [ ( "results", (Encode.list ResponseTimeMapResult.encode) model.results )

        ]


