/*
 * response_distance_breakdown_item.h
 *
 * 
 */

#ifndef _response_distance_breakdown_item_H_
#define _response_distance_breakdown_item_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "response_transportation_mode.h"

                typedef enum  {  car, parking, boarding, walk, bike, train, rail_national, rail_overground, rail_underground, rail_dlr, bus, cable_car, plane, ferry, coach } mode_e;

        char* mode_ToString(mode_e mode);

        mode_e mode_FromString(char* mode);


typedef struct response_distance_breakdown_item_t {
    int distance; //numeric

} response_distance_breakdown_item_t;

response_distance_breakdown_item_t *response_distance_breakdown_item_create(
    int distance
);

void response_distance_breakdown_item_free(response_distance_breakdown_item_t *response_distance_breakdown_item);

response_distance_breakdown_item_t *response_distance_breakdown_item_parseFromJSON(cJSON *response_distance_breakdown_itemJSON);

cJSON *response_distance_breakdown_item_convertToJSON(response_distance_breakdown_item_t *response_distance_breakdown_item);

#endif /* _response_distance_breakdown_item_H_ */

