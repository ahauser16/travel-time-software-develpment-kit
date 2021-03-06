{-
   TravelTime Platform API
   No description provided (generated by Openapi Generator https://github.com/openapitools/openapi-generator)

   The version of the OpenAPI document: 1.0.0
   Contact: support@igeolise.com

   NOTE: This file is auto generated by the openapi-generator.
   https://github.com/openapitools/openapi-generator.git
   Do not edit this file manually.
-}


module Data.RequestUnionOnIntersection exposing (RequestUnionOnIntersection, decoder, encode, encodeWithTag, toString)

import Dict exposing (Dict)
import Json.Decode as Decode exposing (Decoder)
import Json.Decode.Pipeline exposing (optional, required)
import Json.Encode as Encode


type alias RequestUnionOnIntersection =
    { id : String
    , searchIds : (List String)
    }


decoder : Decoder RequestUnionOnIntersection
decoder =
    Decode.succeed RequestUnionOnIntersection
        |> required "id" Decode.string
        |> required "search_ids" (Decode.list Decode.string)



encode : RequestUnionOnIntersection -> Encode.Value
encode =
    Encode.object << encodePairs


encodeWithTag : ( String, String ) -> RequestUnionOnIntersection -> Encode.Value
encodeWithTag (tagField, tag) model =
    Encode.object <| encodePairs model ++ [ ( tagField, Encode.string tag ) ]


encodePairs : RequestUnionOnIntersection -> List (String, Encode.Value)
encodePairs model =
    [ ( "id", Encode.string model.id )
    , ( "search_ids", (Encode.list Encode.string) model.searchIds )
    ]



toString : RequestUnionOnIntersection -> String
toString =
    Encode.encode 0 << encode




