-module(openapi_request_range_no_max_results).

-export([encode/1]).

-export_type([openapi_request_range_no_max_results/0]).

-type openapi_request_range_no_max_results() ::
    #{ 'enabled' := boolean(),
       'width' := integer()
     }.

encode(#{ 'enabled' := Enabled,
          'width' := Width
        }) ->
    #{ 'enabled' => Enabled,
       'width' => Width
     }.
