#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "request_time_filter_postcode_districts_departure_search.h"


    char* propertiesrequest_time_filter_postcode_districts_departure_search_ToString(properties_e properties){
        char *propertiesArray[] =  { "travel_time_reachable","travel_time_all","coverage" };
        return propertiesArray[properties - 1];
    }

    properties_e propertiesrequest_time_filter_postcode_districts_departure_search_FromString(char* properties){
    int stringToReturn = 0;
    char *propertiesArray[] =  { "travel_time_reachable","travel_time_all","coverage" };
    size_t sizeofArray = sizeof(propertiesArray) / sizeof(propertiesArray[0]);
    while(stringToReturn < sizeofArray) {
        if(strcmp(properties, propertiesArray[stringToReturn]) == 0) {
            return stringToReturn + 1;
        }
        stringToReturn++;
    }
    return 0;
    }

request_time_filter_postcode_districts_departure_search_t *request_time_filter_postcode_districts_departure_search_create(
    char *id,
    request_transportation_t *transportation,
    int travel_time,
    char *departure_time,
    double reachable_postcodes_threshold,
    list_t *properties,
    request_range_full_t *range
    ) {
    request_time_filter_postcode_districts_departure_search_t *request_time_filter_postcode_districts_departure_search_local_var = malloc(sizeof(request_time_filter_postcode_districts_departure_search_t));
    if (!request_time_filter_postcode_districts_departure_search_local_var) {
        return NULL;
    }
    request_time_filter_postcode_districts_departure_search_local_var->id = id;
    request_time_filter_postcode_districts_departure_search_local_var->transportation = transportation;
    request_time_filter_postcode_districts_departure_search_local_var->travel_time = travel_time;
    request_time_filter_postcode_districts_departure_search_local_var->departure_time = departure_time;
    request_time_filter_postcode_districts_departure_search_local_var->reachable_postcodes_threshold = reachable_postcodes_threshold;
    request_time_filter_postcode_districts_departure_search_local_var->properties = properties;
    request_time_filter_postcode_districts_departure_search_local_var->range = range;

    return request_time_filter_postcode_districts_departure_search_local_var;
}


void request_time_filter_postcode_districts_departure_search_free(request_time_filter_postcode_districts_departure_search_t *request_time_filter_postcode_districts_departure_search) {
    listEntry_t *listEntry;
    free(request_time_filter_postcode_districts_departure_search->id);
    request_transportation_free(request_time_filter_postcode_districts_departure_search->transportation);
    free(request_time_filter_postcode_districts_departure_search->departure_time);
    list_ForEach(listEntry, request_time_filter_postcode_districts_departure_search->properties) {
        request_time_filter_postcode_districts_property_free(listEntry->data);
    }
    list_free(request_time_filter_postcode_districts_departure_search->properties);
    request_range_full_free(request_time_filter_postcode_districts_departure_search->range);
    free(request_time_filter_postcode_districts_departure_search);
}

cJSON *request_time_filter_postcode_districts_departure_search_convertToJSON(request_time_filter_postcode_districts_departure_search_t *request_time_filter_postcode_districts_departure_search) {
    cJSON *item = cJSON_CreateObject();

    // request_time_filter_postcode_districts_departure_search->id
    if (!request_time_filter_postcode_districts_departure_search->id) {
        goto fail;
    }
    
    if(cJSON_AddStringToObject(item, "id", request_time_filter_postcode_districts_departure_search->id) == NULL) {
    goto fail; //String
    }


    // request_time_filter_postcode_districts_departure_search->transportation
    if (!request_time_filter_postcode_districts_departure_search->transportation) {
        goto fail;
    }
    
    cJSON *transportation_local_JSON = request_transportation_convertToJSON(request_time_filter_postcode_districts_departure_search->transportation);
    if(transportation_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "transportation", transportation_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }


    // request_time_filter_postcode_districts_departure_search->travel_time
    if (!request_time_filter_postcode_districts_departure_search->travel_time) {
        goto fail;
    }
    
    if(cJSON_AddNumberToObject(item, "travel_time", request_time_filter_postcode_districts_departure_search->travel_time) == NULL) {
    goto fail; //Numeric
    }


    // request_time_filter_postcode_districts_departure_search->departure_time
    if (!request_time_filter_postcode_districts_departure_search->departure_time) {
        goto fail;
    }
    
    if(cJSON_AddStringToObject(item, "departure_time", request_time_filter_postcode_districts_departure_search->departure_time) == NULL) {
    goto fail; //Date-Time
    }


    // request_time_filter_postcode_districts_departure_search->reachable_postcodes_threshold
    if (!request_time_filter_postcode_districts_departure_search->reachable_postcodes_threshold) {
        goto fail;
    }
    
    if(cJSON_AddNumberToObject(item, "reachable_postcodes_threshold", request_time_filter_postcode_districts_departure_search->reachable_postcodes_threshold) == NULL) {
    goto fail; //Numeric
    }


    // request_time_filter_postcode_districts_departure_search->properties
    
    cJSON *properties = cJSON_AddArrayToObject(item, "properties");
    if(properties == NULL) {
    goto fail; //nonprimitive container
    }

    listEntry_t *propertiesListEntry;
    if (request_time_filter_postcode_districts_departure_search->properties) {
    list_ForEach(propertiesListEntry, request_time_filter_postcode_districts_departure_search->properties) {
    cJSON *itemLocal = request_time_filter_postcode_districts_property_convertToJSON((request_time_filter_postcode_districts_property_e)propertiesListEntry->data);
    if(itemLocal == NULL) {
    goto fail;
    }
    cJSON_AddItemToArray(properties, itemLocal);
    }
    }


    // request_time_filter_postcode_districts_departure_search->range
    if(request_time_filter_postcode_districts_departure_search->range) { 
    cJSON *range_local_JSON = request_range_full_convertToJSON(request_time_filter_postcode_districts_departure_search->range);
    if(range_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "range", range_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
     } 

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

request_time_filter_postcode_districts_departure_search_t *request_time_filter_postcode_districts_departure_search_parseFromJSON(cJSON *request_time_filter_postcode_districts_departure_searchJSON){

    request_time_filter_postcode_districts_departure_search_t *request_time_filter_postcode_districts_departure_search_local_var = NULL;

    // request_time_filter_postcode_districts_departure_search->id
    cJSON *id = cJSON_GetObjectItemCaseSensitive(request_time_filter_postcode_districts_departure_searchJSON, "id");
    if (!id) {
        goto end;
    }

    
    if(!cJSON_IsString(id))
    {
    goto end; //String
    }

    // request_time_filter_postcode_districts_departure_search->transportation
    cJSON *transportation = cJSON_GetObjectItemCaseSensitive(request_time_filter_postcode_districts_departure_searchJSON, "transportation");
    if (!transportation) {
        goto end;
    }

    request_transportation_t *transportation_local_nonprim = NULL;
    
    transportation_local_nonprim = request_transportation_parseFromJSON(transportation); //nonprimitive

    // request_time_filter_postcode_districts_departure_search->travel_time
    cJSON *travel_time = cJSON_GetObjectItemCaseSensitive(request_time_filter_postcode_districts_departure_searchJSON, "travel_time");
    if (!travel_time) {
        goto end;
    }

    
    if(!cJSON_IsNumber(travel_time))
    {
    goto end; //Numeric
    }

    // request_time_filter_postcode_districts_departure_search->departure_time
    cJSON *departure_time = cJSON_GetObjectItemCaseSensitive(request_time_filter_postcode_districts_departure_searchJSON, "departure_time");
    if (!departure_time) {
        goto end;
    }

    
    if(!cJSON_IsString(departure_time))
    {
    goto end; //DateTime
    }

    // request_time_filter_postcode_districts_departure_search->reachable_postcodes_threshold
    cJSON *reachable_postcodes_threshold = cJSON_GetObjectItemCaseSensitive(request_time_filter_postcode_districts_departure_searchJSON, "reachable_postcodes_threshold");
    if (!reachable_postcodes_threshold) {
        goto end;
    }

    
    if(!cJSON_IsNumber(reachable_postcodes_threshold))
    {
    goto end; //Numeric
    }

    // request_time_filter_postcode_districts_departure_search->properties
    cJSON *properties = cJSON_GetObjectItemCaseSensitive(request_time_filter_postcode_districts_departure_searchJSON, "properties");
    if (!properties) {
        goto end;
    }

    list_t *propertiesList;
    
    cJSON *properties_local_nonprimitive;
    if(!cJSON_IsArray(properties)){
        goto end; //nonprimitive container
    }

    propertiesList = list_create();

    cJSON_ArrayForEach(properties_local_nonprimitive,properties )
    {
        if(!cJSON_IsObject(properties_local_nonprimitive)){
            goto end;
        }
        request_time_filter_postcode_districts_property_e propertiesItem = request_time_filter_postcode_districts_property_parseFromJSON(properties_local_nonprimitive);

        list_addElement(propertiesList, (void *)propertiesItem);
    }

    // request_time_filter_postcode_districts_departure_search->range
    cJSON *range = cJSON_GetObjectItemCaseSensitive(request_time_filter_postcode_districts_departure_searchJSON, "range");
    request_range_full_t *range_local_nonprim = NULL;
    if (range) { 
    range_local_nonprim = request_range_full_parseFromJSON(range); //nonprimitive
    }


    request_time_filter_postcode_districts_departure_search_local_var = request_time_filter_postcode_districts_departure_search_create (
        strdup(id->valuestring),
        transportation_local_nonprim,
        travel_time->valuedouble,
        strdup(departure_time->valuestring),
        reachable_postcodes_threshold->valuedouble,
        propertiesList,
        range ? range_local_nonprim : NULL
        );

    return request_time_filter_postcode_districts_departure_search_local_var;
end:
    return NULL;

}
