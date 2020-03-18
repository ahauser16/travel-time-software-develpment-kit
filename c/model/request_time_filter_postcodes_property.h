/*
 * request_time_filter_postcodes_property.h
 *
 * 
 */

#ifndef _request_time_filter_postcodes_property_H_
#define _request_time_filter_postcodes_property_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"

// Enum  for request_time_filter_postcodes_property

typedef enum { traveltime_platform_api_request_time_filter_postcodes_property__NULL = 0, traveltime_platform_api_request_time_filter_postcodes_property__travel_time, traveltime_platform_api_request_time_filter_postcodes_property__distance } traveltime_platform_api_request_time_filter_postcodes_property__e;

char* request_time_filter_postcodes_property_request_time_filter_postcodes_property_ToString(traveltime_platform_api_request_time_filter_postcodes_property__e request_time_filter_postcodes_property);

traveltime_platform_api_request_time_filter_postcodes_property__e request_time_filter_postcodes_property_request_time_filter_postcodes_property_FromString(char* request_time_filter_postcodes_property);

//cJSON *request_time_filter_postcodes_property_request_time_filter_postcodes_property_convertToJSON(traveltime_platform_api_request_time_filter_postcodes_property__e request_time_filter_postcodes_property);

//traveltime_platform_api_request_time_filter_postcodes_property__e request_time_filter_postcodes_property_request_time_filter_postcodes_property_parseFromJSON(cJSON *request_time_filter_postcodes_propertyJSON);

#endif /* _request_time_filter_postcodes_property_H_ */

