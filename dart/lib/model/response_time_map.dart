part of openapi.api;

class ResponseTimeMap {
  
  List<ResponseTimeMapResult> results = [];
  ResponseTimeMap();

  @override
  String toString() {
    return 'ResponseTimeMap[results=$results, ]';
  }

  ResponseTimeMap.fromJson(Map<String, dynamic> json) {
    if (json == null) return;
    if (json['results'] == null) {
      results = null;
    } else {
      results = ResponseTimeMapResult.listFromJson(json['results']);
    }
  }

  Map<String, dynamic> toJson() {
    Map <String, dynamic> json = {};
    if (results != null)
      json['results'] = results;
    return json;
  }

  static List<ResponseTimeMap> listFromJson(List<dynamic> json) {
    return json == null ? new List<ResponseTimeMap>() : json.map((value) => new ResponseTimeMap.fromJson(value)).toList();
  }

  static Map<String, ResponseTimeMap> mapFromJson(Map<String, dynamic> json) {
    var map = new Map<String, ResponseTimeMap>();
    if (json != null && json.isNotEmpty) {
      json.forEach((String key, dynamic value) => map[key] = new ResponseTimeMap.fromJson(value));
    }
    return map;
  }
}

