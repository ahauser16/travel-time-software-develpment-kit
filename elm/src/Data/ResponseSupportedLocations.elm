{-
   TravelTime Platform API
   No description provided (generated by Openapi Generator https://github.com/openapitools/openapi-generator)

   The version of the OpenAPI document: 1.0.0
   Contact: support@igeolise.com

   NOTE: This file is auto generated by the openapi-generator.
   https://github.com/openapitools/openapi-generator.git
   Do not edit this file manually.
-}


module Data.ResponseSupportedLocations exposing (ResponseSupportedLocations, decoder, encode, encodeWithTag, toString)

import Data.ResponseSupportedLocation as ResponseSupportedLocation exposing (ResponseSupportedLocation)
import Dict exposing (Dict)
import Json.Decode as Decode exposing (Decoder)
import Json.Decode.Pipeline exposing (optional, required)
import Json.Encode as Encode


type alias ResponseSupportedLocations =
    { locations : (List ResponseSupportedLocation)
    , unsupportedLocations : (List String)
    }


decoder : Decoder ResponseSupportedLocations
decoder =
    Decode.succeed ResponseSupportedLocations
        |> required "locations" (Decode.list ResponseSupportedLocation.decoder)
        |> required "unsupported_locations" (Decode.list Decode.string)



encode : ResponseSupportedLocations -> Encode.Value
encode =
    Encode.object << encodePairs


encodeWithTag : ( String, String ) -> ResponseSupportedLocations -> Encode.Value
encodeWithTag (tagField, tag) model =
    Encode.object <| encodePairs model ++ [ ( tagField, Encode.string tag ) ]


encodePairs : ResponseSupportedLocations -> List (String, Encode.Value)
encodePairs model =
    [ ( "locations", (Encode.list ResponseSupportedLocation.encode) model.locations )
    , ( "unsupported_locations", (Encode.list Encode.string) model.unsupportedLocations )
    ]



toString : ResponseSupportedLocations -> String
toString =
    Encode.encode 0 << encode




