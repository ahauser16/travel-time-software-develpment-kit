=begin comment

TravelTime Platform API

No description provided (generated by Openapi Generator https://github.com/openapitools/openapi-generator)

The version of the OpenAPI document: 1.0.0
Contact: support@igeolise.com
Generated by: https://openapi-generator.tech

=end comment

=cut

#
# NOTE: This class is auto generated by OpenAPI Generator
# Please update the test cases below to test the API endpoints.
# Ref: https://openapi-generator.tech
#
use Test::More tests => 1; #TODO update number of test cases
use Test::Exception;

use lib 'lib';
use strict;
use warnings;

use_ok('WWW::OpenAPIClient::DefaultApi');

my $api = WWW::OpenAPIClient::DefaultApi->new();
isa_ok($api, 'WWW::OpenAPIClient::DefaultApi');

#
# geocoding_reverse_search test
#
{
    my $lat = undef; # replace NULL with a proper value
    my $lng = undef; # replace NULL with a proper value
    my $within/country = undef; # replace NULL with a proper value
    my $result = $api->geocoding_reverse_search(lat => $lat, lng => $lng, within/country => $within/country);
}

#
# geocoding_search test
#
{
    my $query = undef; # replace NULL with a proper value
    my $focus/lat = undef; # replace NULL with a proper value
    my $focus/lng = undef; # replace NULL with a proper value
    my $within/country = undef; # replace NULL with a proper value
    my $result = $api->geocoding_search(query => $query, focus/lat => $focus/lat, focus/lng => $focus/lng, within/country => $within/country);
}

#
# map_info test
#
{
    my $result = $api->map_info();
}

#
# routes test
#
{
    my $request_routes = undef; # replace NULL with a proper value
    my $result = $api->routes(request_routes => $request_routes);
}

#
# supported_locations test
#
{
    my $request_supported_locations = undef; # replace NULL with a proper value
    my $result = $api->supported_locations(request_supported_locations => $request_supported_locations);
}

#
# time_filter test
#
{
    my $request_time_filter = undef; # replace NULL with a proper value
    my $result = $api->time_filter(request_time_filter => $request_time_filter);
}

#
# time_filter_fast test
#
{
    my $request_time_filter_fast = undef; # replace NULL with a proper value
    my $result = $api->time_filter_fast(request_time_filter_fast => $request_time_filter_fast);
}

#
# time_filter_postcode_districts test
#
{
    my $request_time_filter_postcode_districts = undef; # replace NULL with a proper value
    my $result = $api->time_filter_postcode_districts(request_time_filter_postcode_districts => $request_time_filter_postcode_districts);
}

#
# time_filter_postcode_sectors test
#
{
    my $request_time_filter_postcode_sectors = undef; # replace NULL with a proper value
    my $result = $api->time_filter_postcode_sectors(request_time_filter_postcode_sectors => $request_time_filter_postcode_sectors);
}

#
# time_filter_postcodes test
#
{
    my $request_time_filter_postcodes = undef; # replace NULL with a proper value
    my $result = $api->time_filter_postcodes(request_time_filter_postcodes => $request_time_filter_postcodes);
}

#
# time_map test
#
{
    my $request_time_map = undef; # replace NULL with a proper value
    my $result = $api->time_map(request_time_map => $request_time_map);
}


1;
