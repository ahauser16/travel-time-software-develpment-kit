{-
   TravelTime Platform API
   No description provided (generated by Openapi Generator https://github.com/openapitools/openapi-generator)

   The version of the OpenAPI document: 1.0.0
   Contact: support@igeolise.com

   NOTE: This file is auto generated by the openapi-generator.
   https://github.com/openapitools/openapi-generator.git
   Do not edit this file manually.
-}


module Data.ResponseTimeFilterPostcodesResult exposing (ResponseTimeFilterPostcodesResult, decoder, encode, encodeWithTag, toString)

import Data.ResponseTimeFilterPostcode as ResponseTimeFilterPostcode exposing (ResponseTimeFilterPostcode)
import Dict exposing (Dict)
import Json.Decode as Decode exposing (Decoder)
import Json.Decode.Pipeline exposing (optional, required)
import Json.Encode as Encode


type alias ResponseTimeFilterPostcodesResult =
    { searchId : String
    , postcodes : (List ResponseTimeFilterPostcode)
    }


decoder : Decoder ResponseTimeFilterPostcodesResult
decoder =
    Decode.succeed ResponseTimeFilterPostcodesResult
        |> required "search_id" Decode.string
        |> required "postcodes" (Decode.list ResponseTimeFilterPostcode.decoder)



encode : ResponseTimeFilterPostcodesResult -> Encode.Value
encode =
    Encode.object << encodePairs


encodeWithTag : ( String, String ) -> ResponseTimeFilterPostcodesResult -> Encode.Value
encodeWithTag (tagField, tag) model =
    Encode.object <| encodePairs model ++ [ ( tagField, Encode.string tag ) ]


encodePairs : ResponseTimeFilterPostcodesResult -> List (String, Encode.Value)
encodePairs model =
    [ ( "search_id", Encode.string model.searchId )
    , ( "postcodes", (Encode.list ResponseTimeFilterPostcode.encode) model.postcodes )
    ]



toString : ResponseTimeFilterPostcodesResult -> String
toString =
    Encode.encode 0 << encode




