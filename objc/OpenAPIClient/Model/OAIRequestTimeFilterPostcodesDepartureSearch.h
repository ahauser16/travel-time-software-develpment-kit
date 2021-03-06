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
#import "OAIRequestTimeFilterPostcodesProperty.h"
#import "OAIRequestTransportation.h"
@protocol OAIRequestRangeFull;
@class OAIRequestRangeFull;
@protocol OAIRequestTimeFilterPostcodesProperty;
@class OAIRequestTimeFilterPostcodesProperty;
@protocol OAIRequestTransportation;
@class OAIRequestTransportation;



@protocol OAIRequestTimeFilterPostcodesDepartureSearch
@end

@interface OAIRequestTimeFilterPostcodesDepartureSearch : OAIObject


@property(nonatomic) NSString* _id;

@property(nonatomic) OAIRequestTransportation* transportation;

@property(nonatomic) NSNumber* travelTime;

@property(nonatomic) NSDate* departureTime;

@property(nonatomic) NSArray<OAIRequestTimeFilterPostcodesProperty>* properties;

@property(nonatomic) OAIRequestRangeFull* range;

@end
