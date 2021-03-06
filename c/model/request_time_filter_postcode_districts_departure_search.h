/*
 * request_time_filter_postcode_districts_departure_search.h
 *
 * 
 */

#ifndef _request_time_filter_postcode_districts_departure_search_H_
#define _request_time_filter_postcode_districts_departure_search_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "request_range_full.h"
#include "request_time_filter_postcode_districts_property.h"
#include "request_transportation.h"

// Enum  for request_time_filter_postcode_districts_departure_search

typedef enum  { traveltime_platform_api_request_time_filter_postcode_districts_departure_search__NULL = 0, traveltime_platform_api_request_time_filter_postcode_districts_departure_search__travel_time_reachable, traveltime_platform_api_request_time_filter_postcode_districts_departure_search__travel_time_all, traveltime_platform_api_request_time_filter_postcode_districts_departure_search__coverage } traveltime_platform_api_request_time_filter_postcode_districts_departure_search__e;

char* request_time_filter_postcode_districts_departure_search_properties_ToString(traveltime_platform_api_request_time_filter_postcode_districts_departure_search__e properties);

traveltime_platform_api_request_time_filter_postcode_districts_departure_search__e request_time_filter_postcode_districts_departure_search_properties_FromString(char* properties);



typedef struct request_time_filter_postcode_districts_departure_search_t {
    char *id; // string
    struct request_transportation_t *transportation; //model
    int travel_time; //numeric
    char *departure_time; //date time
    double reachable_postcodes_threshold; //numeric
    list_t *properties; //nonprimitive container
    struct request_range_full_t *range; //model

} request_time_filter_postcode_districts_departure_search_t;

request_time_filter_postcode_districts_departure_search_t *request_time_filter_postcode_districts_departure_search_create(
    char *id,
    request_transportation_t *transportation,
    int travel_time,
    char *departure_time,
    double reachable_postcodes_threshold,
    list_t *properties,
    request_range_full_t *range
);

void request_time_filter_postcode_districts_departure_search_free(request_time_filter_postcode_districts_departure_search_t *request_time_filter_postcode_districts_departure_search);

request_time_filter_postcode_districts_departure_search_t *request_time_filter_postcode_districts_departure_search_parseFromJSON(cJSON *request_time_filter_postcode_districts_departure_searchJSON);

cJSON *request_time_filter_postcode_districts_departure_search_convertToJSON(request_time_filter_postcode_districts_departure_search_t *request_time_filter_postcode_districts_departure_search);

#endif /* _request_time_filter_postcode_districts_departure_search_H_ */

