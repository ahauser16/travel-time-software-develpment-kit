import 'package:jaguar_serializer/jaguar_serializer.dart';


import 'package:openapi/model/response_geocoding_geometry.dart';

import 'package:openapi/model/response_geocoding_properties.dart';

part 'response_geocoding_geo_json_feature.jser.dart';

class ResponseGeocodingGeoJsonFeature {
  
  @Alias('type', isNullable: false,  )
  final String type;
  
  @Alias('geometry', isNullable: false,  )
  final ResponseGeocodingGeometry geometry;
  
  @Alias('properties', isNullable: false,  )
  final ResponseGeocodingProperties properties;
  

  ResponseGeocodingGeoJsonFeature(
      

{
    
     this.type = null,  
     this.geometry = null,  
     this.properties = null 
    }
  );

  @override
  String toString() {
    return 'ResponseGeocodingGeoJsonFeature[type=$type, geometry=$geometry, properties=$properties, ]';
  }
}

@GenSerializer(nullableFields: true)
class ResponseGeocodingGeoJsonFeatureSerializer extends Serializer<ResponseGeocodingGeoJsonFeature> with _$ResponseGeocodingGeoJsonFeatureSerializer {

}

