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


#import "OAIRequestTimeFilterPostcodeDistrictsArrivalSearch.h"
#import "OAIRequestTimeFilterPostcodeDistrictsDepartureSearch.h"
@protocol OAIRequestTimeFilterPostcodeDistrictsArrivalSearch;
@class OAIRequestTimeFilterPostcodeDistrictsArrivalSearch;
@protocol OAIRequestTimeFilterPostcodeDistrictsDepartureSearch;
@class OAIRequestTimeFilterPostcodeDistrictsDepartureSearch;



@protocol OAIRequestTimeFilterPostcodeDistricts
@end

@interface OAIRequestTimeFilterPostcodeDistricts : OAIObject


@property(nonatomic) NSArray<OAIRequestTimeFilterPostcodeDistrictsDepartureSearch>* departureSearches;

@property(nonatomic) NSArray<OAIRequestTimeFilterPostcodeDistrictsArrivalSearch>* arrivalSearches;

@end
