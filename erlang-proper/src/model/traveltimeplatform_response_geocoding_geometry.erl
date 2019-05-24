-module(traveltimeplatform_response_geocoding_geometry).

-include("traveltimeplatform.hrl").

-export([traveltimeplatform_response_geocoding_geometry/0]).

-export([traveltimeplatform_response_geocoding_geometry/1]).

-export_type([traveltimeplatform_response_geocoding_geometry/0]).

-type traveltimeplatform_response_geocoding_geometry() ::
  [ {'type', binary() }
  | {'coordinates', list(float()) }
  ].


traveltimeplatform_response_geocoding_geometry() ->
    traveltimeplatform_response_geocoding_geometry([]).

traveltimeplatform_response_geocoding_geometry(Fields) ->
  Default = [ {'type', binary() }
            , {'coordinates', list(float()) }
            ],
  lists:ukeymerge(1, lists:sort(Fields), lists:sort(Default)).

