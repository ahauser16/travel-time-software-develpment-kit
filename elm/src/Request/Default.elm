{-
   TravelTime Platform API
   No description provided (generated by Openapi Generator https://github.com/openapitools/openapi-generator)

   The version of the OpenAPI document: 1.0.0
   Contact: support@igeolise.com

   NOTE: This file is auto generated by the openapi-generator.
   https://github.com/openapitools/openapi-generator.git
   Do not edit this file manually.
-}


module Request.Default exposing (geocodingReverseSearch, geocodingSearch, mapInfo, routes, supportedLocations, timeFilter, timeFilterFast, timeFilterPostcodeDistricts, timeFilterPostcodeSectors, timeFilterPostcodes, timeMap)

import Data.RequestSupportedLocations as RequestSupportedLocations exposing (RequestSupportedLocations)
import Data.ResponseTimeFilterPostcodeSectors as ResponseTimeFilterPostcodeSectors exposing (ResponseTimeFilterPostcodeSectors)
import Data.ResponseSupportedLocations as ResponseSupportedLocations exposing (ResponseSupportedLocations)
import Data.ResponseError as ResponseError exposing (ResponseError)
import Data.RequestTimeFilter as RequestTimeFilter exposing (RequestTimeFilter)
import Data.ResponseTimeFilterPostcodeDistricts as ResponseTimeFilterPostcodeDistricts exposing (ResponseTimeFilterPostcodeDistricts)
import Data.RequestTimeFilterPostcodeSectors as RequestTimeFilterPostcodeSectors exposing (RequestTimeFilterPostcodeSectors)
import Data.ResponseTimeFilterPostcodes as ResponseTimeFilterPostcodes exposing (ResponseTimeFilterPostcodes)
import Data.ResponseGeocoding as ResponseGeocoding exposing (ResponseGeocoding)
import Data.RequestTimeMap as RequestTimeMap exposing (RequestTimeMap)
import Data.ResponseMapInfo as ResponseMapInfo exposing (ResponseMapInfo)
import Data.RequestRoutes as RequestRoutes exposing (RequestRoutes)
import Data.ResponseTimeFilter as ResponseTimeFilter exposing (ResponseTimeFilter)
import Data.RequestTimeFilterPostcodes as RequestTimeFilterPostcodes exposing (RequestTimeFilterPostcodes)
import Data.RequestTimeFilterFast as RequestTimeFilterFast exposing (RequestTimeFilterFast)
import Data.RequestTimeFilterPostcodeDistricts as RequestTimeFilterPostcodeDistricts exposing (RequestTimeFilterPostcodeDistricts)
import Data.ResponseTimeMap as ResponseTimeMap exposing (ResponseTimeMap)
import Data.ResponseRoutes as ResponseRoutes exposing (ResponseRoutes)
import Data.ResponseTimeFilterFast as ResponseTimeFilterFast exposing (ResponseTimeFilterFast)
import Dict
import Http
import Json.Decode as Decode
import Url.Builder as Url




basePath : String
basePath =
    "https://api.traveltimeapp.com"


geocodingReverseSearch :
    { onSend : Result Http.Error ResponseGeocoding -> msg




    , lat : Float    , lng : Float    , withinPeriodcountry : Maybe (String)
    }
    -> Cmd msg
geocodingReverseSearch params =
    Http.request
        { method = "GET"
        , headers = List.filterMap identity []
        , url = Url.crossOrigin basePath
            ["v4", "geocoding", "reverse"]
            (List.filterMap identity [(Just << Url.string "lat" << String.fromFloat) params.lat, (Just << Url.string "lng" << String.fromFloat) params.lng, Maybe.map (Url.string "within.country" << identity) params.withinPeriodcountry])
        , body = Http.emptyBody
        , expect = Http.expectJson params.onSend ResponseGeocoding.decoder
        , timeout = Just 30000
        , tracker = Nothing
        }


geocodingSearch :
    { onSend : Result Http.Error ResponseGeocoding -> msg




    , query : String    , focusPeriodlat : Maybe (Float)    , focusPeriodlng : Maybe (Float)    , withinPeriodcountry : Maybe (String)
    }
    -> Cmd msg
geocodingSearch params =
    Http.request
        { method = "GET"
        , headers = List.filterMap identity []
        , url = Url.crossOrigin basePath
            ["v4", "geocoding", "search"]
            (List.filterMap identity [(Just << Url.string "query" << identity) params.query, Maybe.map (Url.string "focus.lat" << String.fromFloat) params.focusPeriodlat, Maybe.map (Url.string "focus.lng" << String.fromFloat) params.focusPeriodlng, Maybe.map (Url.string "within.country" << identity) params.withinPeriodcountry])
        , body = Http.emptyBody
        , expect = Http.expectJson params.onSend ResponseGeocoding.decoder
        , timeout = Just 30000
        , tracker = Nothing
        }


mapInfo :
    { onSend : Result Http.Error ResponseMapInfo -> msg





    }
    -> Cmd msg
mapInfo params =
    Http.request
        { method = "GET"
        , headers = List.filterMap identity []
        , url = Url.crossOrigin basePath
            ["v4", "map-info"]
            (List.filterMap identity [])
        , body = Http.emptyBody
        , expect = Http.expectJson params.onSend ResponseMapInfo.decoder
        , timeout = Just 30000
        , tracker = Nothing
        }


routes :
    { onSend : Result Http.Error ResponseRoutes -> msg


    , body : RequestRoutes


    }
    -> Cmd msg
routes params =
    Http.request
        { method = "POST"
        , headers = List.filterMap identity []
        , url = Url.crossOrigin basePath
            ["v4", "routes"]
            (List.filterMap identity [])
        , body = Http.jsonBody <| RequestRoutes.encode params.body
        , expect = Http.expectJson params.onSend ResponseRoutes.decoder
        , timeout = Just 30000
        , tracker = Nothing
        }


supportedLocations :
    { onSend : Result Http.Error ResponseSupportedLocations -> msg


    , body : RequestSupportedLocations


    }
    -> Cmd msg
supportedLocations params =
    Http.request
        { method = "POST"
        , headers = List.filterMap identity []
        , url = Url.crossOrigin basePath
            ["v4", "supported-locations"]
            (List.filterMap identity [])
        , body = Http.jsonBody <| RequestSupportedLocations.encode params.body
        , expect = Http.expectJson params.onSend ResponseSupportedLocations.decoder
        , timeout = Just 30000
        , tracker = Nothing
        }


timeFilter :
    { onSend : Result Http.Error ResponseTimeFilter -> msg


    , body : RequestTimeFilter


    }
    -> Cmd msg
timeFilter params =
    Http.request
        { method = "POST"
        , headers = List.filterMap identity []
        , url = Url.crossOrigin basePath
            ["v4", "time-filter"]
            (List.filterMap identity [])
        , body = Http.jsonBody <| RequestTimeFilter.encode params.body
        , expect = Http.expectJson params.onSend ResponseTimeFilter.decoder
        , timeout = Just 30000
        , tracker = Nothing
        }


timeFilterFast :
    { onSend : Result Http.Error ResponseTimeFilterFast -> msg


    , body : RequestTimeFilterFast


    }
    -> Cmd msg
timeFilterFast params =
    Http.request
        { method = "POST"
        , headers = List.filterMap identity []
        , url = Url.crossOrigin basePath
            ["v4", "time-filter", "fast"]
            (List.filterMap identity [])
        , body = Http.jsonBody <| RequestTimeFilterFast.encode params.body
        , expect = Http.expectJson params.onSend ResponseTimeFilterFast.decoder
        , timeout = Just 30000
        , tracker = Nothing
        }


timeFilterPostcodeDistricts :
    { onSend : Result Http.Error ResponseTimeFilterPostcodeDistricts -> msg


    , body : RequestTimeFilterPostcodeDistricts


    }
    -> Cmd msg
timeFilterPostcodeDistricts params =
    Http.request
        { method = "POST"
        , headers = List.filterMap identity []
        , url = Url.crossOrigin basePath
            ["v4", "time-filter", "postcode-districts"]
            (List.filterMap identity [])
        , body = Http.jsonBody <| RequestTimeFilterPostcodeDistricts.encode params.body
        , expect = Http.expectJson params.onSend ResponseTimeFilterPostcodeDistricts.decoder
        , timeout = Just 30000
        , tracker = Nothing
        }


timeFilterPostcodeSectors :
    { onSend : Result Http.Error ResponseTimeFilterPostcodeSectors -> msg


    , body : RequestTimeFilterPostcodeSectors


    }
    -> Cmd msg
timeFilterPostcodeSectors params =
    Http.request
        { method = "POST"
        , headers = List.filterMap identity []
        , url = Url.crossOrigin basePath
            ["v4", "time-filter", "postcode-sectors"]
            (List.filterMap identity [])
        , body = Http.jsonBody <| RequestTimeFilterPostcodeSectors.encode params.body
        , expect = Http.expectJson params.onSend ResponseTimeFilterPostcodeSectors.decoder
        , timeout = Just 30000
        , tracker = Nothing
        }


timeFilterPostcodes :
    { onSend : Result Http.Error ResponseTimeFilterPostcodes -> msg


    , body : RequestTimeFilterPostcodes


    }
    -> Cmd msg
timeFilterPostcodes params =
    Http.request
        { method = "POST"
        , headers = List.filterMap identity []
        , url = Url.crossOrigin basePath
            ["v4", "time-filter", "postcodes"]
            (List.filterMap identity [])
        , body = Http.jsonBody <| RequestTimeFilterPostcodes.encode params.body
        , expect = Http.expectJson params.onSend ResponseTimeFilterPostcodes.decoder
        , timeout = Just 30000
        , tracker = Nothing
        }


timeMap :
    { onSend : Result Http.Error ResponseTimeMap -> msg


    , body : RequestTimeMap


    }
    -> Cmd msg
timeMap params =
    Http.request
        { method = "POST"
        , headers = List.filterMap identity []
        , url = Url.crossOrigin basePath
            ["v4", "time-map"]
            (List.filterMap identity [])
        , body = Http.jsonBody <| RequestTimeMap.encode params.body
        , expect = Http.expectJson params.onSend ResponseTimeMap.decoder
        , timeout = Just 30000
        , tracker = Nothing
        }
