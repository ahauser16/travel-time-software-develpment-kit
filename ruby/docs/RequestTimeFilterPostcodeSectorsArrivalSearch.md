# OpenapiClient::RequestTimeFilterPostcodeSectorsArrivalSearch

## Properties

Name | Type | Description | Notes
------------ | ------------- | ------------- | -------------
**id** | **String** |  | 
**transportation** | [**RequestTransportation**](RequestTransportation.md) |  | 
**travel_time** | **Integer** |  | 
**arrival_time** | **DateTime** |  | 
**reachable_postcodes_threshold** | **Float** |  | 
**properties** | [**Array&lt;RequestTimeFilterPostcodeSectorsProperty&gt;**](RequestTimeFilterPostcodeSectorsProperty.md) |  | 
**range** | [**RequestRangeFull**](RequestRangeFull.md) |  | [optional] 

## Code Sample

```ruby
require 'OpenapiClient'

instance = OpenapiClient::RequestTimeFilterPostcodeSectorsArrivalSearch.new(id: null,
                                 transportation: null,
                                 travel_time: null,
                                 arrival_time: null,
                                 reachable_postcodes_threshold: null,
                                 properties: null,
                                 range: null)
```


