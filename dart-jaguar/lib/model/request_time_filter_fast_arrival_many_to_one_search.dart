import 'package:jaguar_serializer/jaguar_serializer.dart';


import 'package:openapi/model/request_arrival_time_period.dart';

import 'package:openapi/model/request_time_filter_fast_property.dart';

import 'package:openapi/model/request_transportation_fast.dart';

part 'request_time_filter_fast_arrival_many_to_one_search.jser.dart';

class RequestTimeFilterFastArrivalManyToOneSearch {
  
  @Alias('id', isNullable: false,  )
  final String id;
  
  @Alias('arrival_location_id', isNullable: false,  )
  final String arrivalLocationId;
  
  @Alias('departure_location_ids', isNullable: false,  )
  final List<String> departureLocationIds;
  
  @Alias('transportation', isNullable: false,  )
  final RequestTransportationFast transportation;
  
  @Alias('travel_time', isNullable: false,  )
  final int travelTime;
  
  @Alias('arrival_time_period', isNullable: false,
          
             processor:  const RequestArrivalTimePeriodFieldProcessor(),
          
  )
  final RequestArrivalTimePeriod arrivalTimePeriod;
  //enum arrivalTimePeriodEnum {  weekday_morning,  };
  @Alias('properties', isNullable: false,  )
  final List<RequestTimeFilterFastProperty> properties;
  

  RequestTimeFilterFastArrivalManyToOneSearch(
      

{
    
     this.id = null,  
     this.arrivalLocationId = null,  
     this.departureLocationIds = const [],  
     this.transportation = null,  
     this.travelTime = null,  
     this.arrivalTimePeriod = null,  
     this.properties = const [] 
    }
  );

  @override
  String toString() {
    return 'RequestTimeFilterFastArrivalManyToOneSearch[id=$id, arrivalLocationId=$arrivalLocationId, departureLocationIds=$departureLocationIds, transportation=$transportation, travelTime=$travelTime, arrivalTimePeriod=$arrivalTimePeriod, properties=$properties, ]';
  }
}

@GenSerializer(nullableFields: true)
class RequestTimeFilterFastArrivalManyToOneSearchSerializer extends Serializer<RequestTimeFilterFastArrivalManyToOneSearch> with _$RequestTimeFilterFastArrivalManyToOneSearchSerializer {

}

