#include <map>
#include <cstdlib>
#include <glib-object.h>
#include <json-glib/json-glib.h>
#include "Helpers.h"


#include "RequestTimeFilterFastArrivalOneToManySearch.h"

using namespace std;
using namespace Tizen::ArtikCloud;

RequestTimeFilterFastArrivalOneToManySearch::RequestTimeFilterFastArrivalOneToManySearch()
{
	//__init();
}

RequestTimeFilterFastArrivalOneToManySearch::~RequestTimeFilterFastArrivalOneToManySearch()
{
	//__cleanup();
}

void
RequestTimeFilterFastArrivalOneToManySearch::__init()
{
	//id = std::string();
	//departure_location_id = std::string();
	//new std::list()std::list> arrival_location_ids;
	//transportation = new RequestTransportationFast();
	//travel_time = int(0);
	//arrival_time_period = new RequestArrivalTimePeriod();
	//new std::list()std::list> properties;
}

void
RequestTimeFilterFastArrivalOneToManySearch::__cleanup()
{
	//if(id != NULL) {
	//
	//delete id;
	//id = NULL;
	//}
	//if(departure_location_id != NULL) {
	//
	//delete departure_location_id;
	//departure_location_id = NULL;
	//}
	//if(arrival_location_ids != NULL) {
	//arrival_location_ids.RemoveAll(true);
	//delete arrival_location_ids;
	//arrival_location_ids = NULL;
	//}
	//if(transportation != NULL) {
	//
	//delete transportation;
	//transportation = NULL;
	//}
	//if(travel_time != NULL) {
	//
	//delete travel_time;
	//travel_time = NULL;
	//}
	//if(arrival_time_period != NULL) {
	//
	//delete arrival_time_period;
	//arrival_time_period = NULL;
	//}
	//if(properties != NULL) {
	//properties.RemoveAll(true);
	//delete properties;
	//properties = NULL;
	//}
	//
}

void
RequestTimeFilterFastArrivalOneToManySearch::fromJson(char* jsonStr)
{
	JsonObject *pJsonObject = json_node_get_object(json_from_string(jsonStr,NULL));
	JsonNode *node;
	const gchar *idKey = "id";
	node = json_object_get_member(pJsonObject, idKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&id, node, "std::string", "");
		} else {
			
		}
	}
	const gchar *departure_location_idKey = "departure_location_id";
	node = json_object_get_member(pJsonObject, departure_location_idKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&departure_location_id, node, "std::string", "");
		} else {
			
		}
	}
	const gchar *arrival_location_idsKey = "arrival_location_ids";
	node = json_object_get_member(pJsonObject, arrival_location_idsKey);
	if (node !=NULL) {
	
		{
			JsonArray* arr = json_node_get_array(node);
			JsonNode*  temp_json;
			list<std::string> new_list;
			std::string inst;
			for (guint i=0;i<json_array_get_length(arr);i++) {
				temp_json = json_array_get_element(arr,i);
				if (isprimitive("std::string")) {
					jsonToValue(&inst, temp_json, "std::string", "");
				} else {
					
				}
				new_list.push_back(inst);
			}
			arrival_location_ids = new_list;
		}
		
	}
	const gchar *transportationKey = "transportation";
	node = json_object_get_member(pJsonObject, transportationKey);
	if (node !=NULL) {
	

		if (isprimitive("RequestTransportationFast")) {
			jsonToValue(&transportation, node, "RequestTransportationFast", "RequestTransportationFast");
		} else {
			
			RequestTransportationFast* obj = static_cast<RequestTransportationFast*> (&transportation);
			obj->fromJson(json_to_string(node, false));
			
		}
	}
	const gchar *travel_timeKey = "travel_time";
	node = json_object_get_member(pJsonObject, travel_timeKey);
	if (node !=NULL) {
	

		if (isprimitive("int")) {
			jsonToValue(&travel_time, node, "int", "");
		} else {
			
		}
	}
	const gchar *arrival_time_periodKey = "arrival_time_period";
	node = json_object_get_member(pJsonObject, arrival_time_periodKey);
	if (node !=NULL) {
	

		if (isprimitive("RequestArrivalTimePeriod")) {
			jsonToValue(&arrival_time_period, node, "RequestArrivalTimePeriod", "RequestArrivalTimePeriod");
		} else {
			
			RequestArrivalTimePeriod* obj = static_cast<RequestArrivalTimePeriod*> (&arrival_time_period);
			obj->fromJson(json_to_string(node, false));
			
		}
	}
	const gchar *propertiesKey = "properties";
	node = json_object_get_member(pJsonObject, propertiesKey);
	if (node !=NULL) {
	
		{
			JsonArray* arr = json_node_get_array(node);
			JsonNode*  temp_json;
			list<RequestTimeFilterFastProperty> new_list;
			RequestTimeFilterFastProperty inst;
			for (guint i=0;i<json_array_get_length(arr);i++) {
				temp_json = json_array_get_element(arr,i);
				if (isprimitive("RequestTimeFilterFastProperty")) {
					jsonToValue(&inst, temp_json, "RequestTimeFilterFastProperty", "");
				} else {
					
					inst.fromJson(json_to_string(temp_json, false));
					
				}
				new_list.push_back(inst);
			}
			properties = new_list;
		}
		
	}
}

RequestTimeFilterFastArrivalOneToManySearch::RequestTimeFilterFastArrivalOneToManySearch(char* json)
{
	this->fromJson(json);
}

char*
RequestTimeFilterFastArrivalOneToManySearch::toJson()
{
	JsonObject *pJsonObject = json_object_new();
	JsonNode *node;
	if (isprimitive("std::string")) {
		std::string obj = getId();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *idKey = "id";
	json_object_set_member(pJsonObject, idKey, node);
	if (isprimitive("std::string")) {
		std::string obj = getDepartureLocationId();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *departure_location_idKey = "departure_location_id";
	json_object_set_member(pJsonObject, departure_location_idKey, node);
	if (isprimitive("std::string")) {
		list<std::string> new_list = static_cast<list <std::string> > (getArrivalLocationIds());
		node = converttoJson(&new_list, "std::string", "array");
	} else {
		node = json_node_alloc();
		list<std::string> new_list = static_cast<list <std::string> > (getArrivalLocationIds());
		JsonArray* json_array = json_array_new();
		GError *mygerror;
		
	}


	
	const gchar *arrival_location_idsKey = "arrival_location_ids";
	json_object_set_member(pJsonObject, arrival_location_idsKey, node);
	if (isprimitive("RequestTransportationFast")) {
		RequestTransportationFast obj = getTransportation();
		node = converttoJson(&obj, "RequestTransportationFast", "");
	}
	else {
		
		RequestTransportationFast obj = static_cast<RequestTransportationFast> (getTransportation());
		GError *mygerror;
		mygerror = NULL;
		node = json_from_string(obj.toJson(), &mygerror);
		
	}
	const gchar *transportationKey = "transportation";
	json_object_set_member(pJsonObject, transportationKey, node);
	if (isprimitive("int")) {
		int obj = getTravelTime();
		node = converttoJson(&obj, "int", "");
	}
	else {
		
	}
	const gchar *travel_timeKey = "travel_time";
	json_object_set_member(pJsonObject, travel_timeKey, node);
	if (isprimitive("RequestArrivalTimePeriod")) {
		RequestArrivalTimePeriod obj = getArrivalTimePeriod();
		node = converttoJson(&obj, "RequestArrivalTimePeriod", "");
	}
	else {
		
		RequestArrivalTimePeriod obj = static_cast<RequestArrivalTimePeriod> (getArrivalTimePeriod());
		GError *mygerror;
		mygerror = NULL;
		node = json_from_string(obj.toJson(), &mygerror);
		
	}
	const gchar *arrival_time_periodKey = "arrival_time_period";
	json_object_set_member(pJsonObject, arrival_time_periodKey, node);
	if (isprimitive("RequestTimeFilterFastProperty")) {
		list<RequestTimeFilterFastProperty> new_list = static_cast<list <RequestTimeFilterFastProperty> > (getProperties());
		node = converttoJson(&new_list, "RequestTimeFilterFastProperty", "array");
	} else {
		node = json_node_alloc();
		list<RequestTimeFilterFastProperty> new_list = static_cast<list <RequestTimeFilterFastProperty> > (getProperties());
		JsonArray* json_array = json_array_new();
		GError *mygerror;
		
		for (list<RequestTimeFilterFastProperty>::iterator it = new_list.begin(); it != new_list.end(); it++) {
			mygerror = NULL;
			RequestTimeFilterFastProperty obj = *it;
			JsonNode *node_temp = json_from_string(obj.toJson(), &mygerror);
			json_array_add_element(json_array, node_temp);
			g_clear_error(&mygerror);
		}
		json_node_init_array(node, json_array);
		json_array_unref(json_array);
		
	}


	
	const gchar *propertiesKey = "properties";
	json_object_set_member(pJsonObject, propertiesKey, node);
	node = json_node_alloc();
	json_node_init(node, JSON_NODE_OBJECT);
	json_node_take_object(node, pJsonObject);
	char * ret = json_to_string(node, false);
	json_node_free(node);
	return ret;
}

std::string
RequestTimeFilterFastArrivalOneToManySearch::getId()
{
	return id;
}

void
RequestTimeFilterFastArrivalOneToManySearch::setId(std::string  id)
{
	this->id = id;
}

std::string
RequestTimeFilterFastArrivalOneToManySearch::getDepartureLocationId()
{
	return departure_location_id;
}

void
RequestTimeFilterFastArrivalOneToManySearch::setDepartureLocationId(std::string  departure_location_id)
{
	this->departure_location_id = departure_location_id;
}

std::list<std::string>
RequestTimeFilterFastArrivalOneToManySearch::getArrivalLocationIds()
{
	return arrival_location_ids;
}

void
RequestTimeFilterFastArrivalOneToManySearch::setArrivalLocationIds(std::list <std::string> arrival_location_ids)
{
	this->arrival_location_ids = arrival_location_ids;
}

RequestTransportationFast
RequestTimeFilterFastArrivalOneToManySearch::getTransportation()
{
	return transportation;
}

void
RequestTimeFilterFastArrivalOneToManySearch::setTransportation(RequestTransportationFast  transportation)
{
	this->transportation = transportation;
}

int
RequestTimeFilterFastArrivalOneToManySearch::getTravelTime()
{
	return travel_time;
}

void
RequestTimeFilterFastArrivalOneToManySearch::setTravelTime(int  travel_time)
{
	this->travel_time = travel_time;
}

RequestArrivalTimePeriod
RequestTimeFilterFastArrivalOneToManySearch::getArrivalTimePeriod()
{
	return arrival_time_period;
}

void
RequestTimeFilterFastArrivalOneToManySearch::setArrivalTimePeriod(RequestArrivalTimePeriod  arrival_time_period)
{
	this->arrival_time_period = arrival_time_period;
}

std::list<RequestTimeFilterFastProperty>
RequestTimeFilterFastArrivalOneToManySearch::getProperties()
{
	return properties;
}

void
RequestTimeFilterFastArrivalOneToManySearch::setProperties(std::list <RequestTimeFilterFastProperty> properties)
{
	this->properties = properties;
}


