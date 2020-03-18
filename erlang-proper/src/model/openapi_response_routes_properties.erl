-module(openapi_response_routes_properties).

-include("openapi.hrl").

-export([openapi_response_routes_properties/0]).

-export([openapi_response_routes_properties/1]).

-export_type([openapi_response_routes_properties/0]).

-type openapi_response_routes_properties() ::
  [ {'travel_time', integer() }
  | {'distance', integer() }
  | {'fares', openapi_response_fares:openapi_response_fares() }
  | {'route', openapi_response_route:openapi_response_route() }
  ].


openapi_response_routes_properties() ->
    openapi_response_routes_properties([]).

openapi_response_routes_properties(Fields) ->
  Default = [ {'travel_time', integer() }
            , {'distance', integer() }
            , {'fares', openapi_response_fares:openapi_response_fares() }
            , {'route', openapi_response_route:openapi_response_route() }
            ],
  lists:ukeymerge(1, lists:sort(Fields), lists:sort(Default)).

