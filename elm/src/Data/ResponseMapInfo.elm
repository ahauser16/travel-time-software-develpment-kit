{-
   TravelTime Platform API
   No description provided (generated by Openapi Generator https://github.com/openapitools/openapi-generator)

   The version of the OpenAPI document: 1.0.0
   Contact: support@igeolise.com

   NOTE: This file is auto generated by the openapi-generator.
   https://github.com/openapitools/openapi-generator.git
   Do not edit this file manually.
-}


module Data.ResponseMapInfo exposing (ResponseMapInfo, decoder, encode)

import Data.ResponseMapInfoMap as ResponseMapInfoMap exposing (ResponseMapInfoMap)
import Dict exposing (Dict)
import Json.Decode as Decode exposing (Decoder)
import Json.Decode.Pipeline exposing (optional, required)
import Json.Encode as Encode


type alias ResponseMapInfo =
    { maps : (List ResponseMapInfoMap)
    }


decoder : Decoder ResponseMapInfo
decoder =
    Decode.succeed ResponseMapInfo
        |> required "maps" (Decode.list ResponseMapInfoMap.decoder)



encode : ResponseMapInfo -> Encode.Value
encode model =
    Encode.object
        [ ( "maps", (Encode.list ResponseMapInfoMap.encode) model.maps )

        ]


