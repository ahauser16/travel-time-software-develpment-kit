{-
   TravelTime Platform API
   No description provided (generated by Openapi Generator https://github.com/openapitools/openapi-generator)

   The version of the OpenAPI document: 1.0.0
   Contact: support@igeolise.com

   NOTE: This file is auto generated by the openapi-generator.
   https://github.com/openapitools/openapi-generator.git
   Do not edit this file manually.
-}


module Data.ResponseMapInfoFeatures exposing (ResponseMapInfoFeatures, decoder, encode)

import Data.ResponseMapInfoFeaturesPublicTransport as ResponseMapInfoFeaturesPublicTransport exposing (ResponseMapInfoFeaturesPublicTransport)
import Dict exposing (Dict)
import Json.Decode as Decode exposing (Decoder)
import Json.Decode.Pipeline exposing (optional, required)
import Json.Encode as Encode


type alias ResponseMapInfoFeatures =
    { publicTransport : Maybe (ResponseMapInfoFeaturesPublicTransport)
    , fares : Bool
    , postcodes : Bool
    }


decoder : Decoder ResponseMapInfoFeatures
decoder =
    Decode.succeed ResponseMapInfoFeatures
        |> optional "public_transport" (Decode.nullable ResponseMapInfoFeaturesPublicTransport.decoder) Nothing
        |> required "fares" Decode.bool
        |> required "postcodes" Decode.bool



encode : ResponseMapInfoFeatures -> Encode.Value
encode model =
    Encode.object
        [ ( "public_transport", Maybe.withDefault Encode.null (Maybe.map ResponseMapInfoFeaturesPublicTransport.encode model.publicTransport) )
        , ( "fares", Encode.bool model.fares )
        , ( "postcodes", Encode.bool model.postcodes )

        ]


