#import <Foundation/Foundation.h>
#import "OAIObject.h"

/**
* TravelTime Platform API
* No description provided (generated by Openapi Generator https://github.com/openapitools/openapi-generator)
*
* The version of the OpenAPI document: 1.0.0
* Contact: support@igeolise.com
*
* NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
* https://openapi-generator.tech
* Do not edit the class manually.
*/


#import "OAIRequestRangeFull.h"
#import "OAIRequestTimeFilterPostcodeSectorsProperty.h"
#import "OAIRequestTransportation.h"
@protocol OAIRequestRangeFull;
@class OAIRequestRangeFull;
@protocol OAIRequestTimeFilterPostcodeSectorsProperty;
@class OAIRequestTimeFilterPostcodeSectorsProperty;
@protocol OAIRequestTransportation;
@class OAIRequestTransportation;



@protocol OAIRequestTimeFilterPostcodeSectorsArrivalSearch
@end

@interface OAIRequestTimeFilterPostcodeSectorsArrivalSearch : OAIObject


@property(nonatomic) NSString* _id;

@property(nonatomic) OAIRequestTransportation* transportation;

@property(nonatomic) NSNumber* travelTime;

@property(nonatomic) NSDate* arrivalTime;

@property(nonatomic) NSNumber* reachablePostcodesThreshold;

@property(nonatomic) NSArray<OAIRequestTimeFilterPostcodeSectorsProperty>* properties;

@property(nonatomic) OAIRequestRangeFull* range;

@end
