{-
   TravelTime Platform API
   No description provided (generated by Openapi Generator https://github.com/openapitools/openapi-generator)

   The version of the OpenAPI document: 1.0.0
   Contact: support@igeolise.com

   NOTE: This file is auto generated by the openapi-generator.
   https://github.com/openapitools/openapi-generator.git
   Do not edit this file manually.
-}


module Data.RequestTransportationFast exposing (RequestTransportationFast, Type(..), decoder, encode, encodeWithTag, toString)

import Dict exposing (Dict)
import Json.Decode as Decode exposing (Decoder)
import Json.Decode.Pipeline exposing (optional, required)
import Json.Encode as Encode


type alias RequestTransportationFast =
    { type_ : Type
    }


type Type
    = PublicTransport
    | Driving
    | Driving+publicTransport



decoder : Decoder RequestTransportationFast
decoder =
    Decode.succeed RequestTransportationFast
        |> required "type" typeDecoder



encode : RequestTransportationFast -> Encode.Value
encode =
    Encode.object << encodePairs


encodeWithTag : ( String, String ) -> RequestTransportationFast -> Encode.Value
encodeWithTag (tagField, tag) model =
    Encode.object <| encodePairs model ++ [ ( tagField, Encode.string tag ) ]


encodePairs : RequestTransportationFast -> List (String, Encode.Value)
encodePairs model =
    [ ( "type", encodeType model.type_ )
    ]



toString : RequestTransportationFast -> String
toString =
    Encode.encode 0 << encode




typeDecoder : Decoder Type
typeDecoder =
    Decode.string
        |> Decode.andThen
            (\str ->
                case str of
                    "public_transport" ->
                        Decode.succeed PublicTransport

                    "driving" ->
                        Decode.succeed Driving

                    "driving+public_transport" ->
                        Decode.succeed Driving+publicTransport

                    other ->
                        Decode.fail <| "Unknown type: " ++ other
            )



encodeType : Type -> Encode.Value
encodeType model =
    case model of
        PublicTransport ->
            Encode.string "public_transport"

        Driving ->
            Encode.string "driving"

        Driving+publicTransport ->
            Encode.string "driving+public_transport"




