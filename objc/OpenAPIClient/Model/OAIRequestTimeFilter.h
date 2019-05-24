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


#import "OAIRequestLocation.h"
#import "OAIRequestTimeFilterArrivalSearch.h"
#import "OAIRequestTimeFilterDepartureSearch.h"
@protocol OAIRequestLocation;
@class OAIRequestLocation;
@protocol OAIRequestTimeFilterArrivalSearch;
@class OAIRequestTimeFilterArrivalSearch;
@protocol OAIRequestTimeFilterDepartureSearch;
@class OAIRequestTimeFilterDepartureSearch;



@protocol OAIRequestTimeFilter
@end

@interface OAIRequestTimeFilter : OAIObject


@property(nonatomic) NSArray<OAIRequestLocation>* locations;

@property(nonatomic) NSArray<OAIRequestTimeFilterDepartureSearch>* departureSearches;

@property(nonatomic) NSArray<OAIRequestTimeFilterArrivalSearch>* arrivalSearches;

@end
