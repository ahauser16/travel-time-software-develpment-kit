import 'package:jaguar_serializer/jaguar_serializer.dart';


part 'request_transportation.jser.dart';

class RequestTransportation {
  
  @Alias('type', isNullable: false,
          
  )
  final String type;
  //enum typeEnum {  cycling,  driving,  driving+train,  public_transport,  walking,  coach,  bus,  train,  ferry,  driving+ferry,  cycling+ferry,  };
  @Alias('pt_change_delay', isNullable: false,  )
  final int ptChangeDelay;
  
  @Alias('walking_time', isNullable: false,  )
  final int walkingTime;
  
  @Alias('driving_time_to_station', isNullable: false,  )
  final int drivingTimeToStation;
  
  @Alias('parking_time', isNullable: false,  )
  final int parkingTime;
  
  @Alias('boarding_time', isNullable: false,  )
  final int boardingTime;
  

  RequestTransportation(
      

{
    
     this.type = null,   this.ptChangeDelay = null,  
     this.walkingTime = null,  
     this.drivingTimeToStation = null,  
     this.parkingTime = null,  
     this.boardingTime = null 
    
    }
  );

  @override
  String toString() {
    return 'RequestTransportation[type=$type, ptChangeDelay=$ptChangeDelay, walkingTime=$walkingTime, drivingTimeToStation=$drivingTimeToStation, parkingTime=$parkingTime, boardingTime=$boardingTime, ]';
  }
}

@GenSerializer(nullableFields: true)
class RequestTransportationSerializer extends Serializer<RequestTransportation> with _$RequestTransportationSerializer {

}

