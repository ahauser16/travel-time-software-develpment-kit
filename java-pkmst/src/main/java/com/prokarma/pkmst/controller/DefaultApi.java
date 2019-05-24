/**
 * NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech) (4.0.0).
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */
package com.prokarma.pkmst.controller;

import com.prokarma.pkmst.model.RequestRoutes;
import com.prokarma.pkmst.model.RequestSupportedLocations;
import com.prokarma.pkmst.model.RequestTimeFilter;
import com.prokarma.pkmst.model.RequestTimeFilterFast;
import com.prokarma.pkmst.model.RequestTimeFilterPostcodeDistricts;
import com.prokarma.pkmst.model.RequestTimeFilterPostcodeSectors;
import com.prokarma.pkmst.model.RequestTimeFilterPostcodes;
import com.prokarma.pkmst.model.RequestTimeMap;
import com.prokarma.pkmst.model.ResponseError;
import com.prokarma.pkmst.model.ResponseGeocoding;
import com.prokarma.pkmst.model.ResponseMapInfo;
import com.prokarma.pkmst.model.ResponseRoutes;
import com.prokarma.pkmst.model.ResponseSupportedLocations;
import com.prokarma.pkmst.model.ResponseTimeFilter;
import com.prokarma.pkmst.model.ResponseTimeFilterFast;
import com.prokarma.pkmst.model.ResponseTimeFilterPostcodeDistricts;
import com.prokarma.pkmst.model.ResponseTimeFilterPostcodeSectors;
import com.prokarma.pkmst.model.ResponseTimeFilterPostcodes;
import com.prokarma.pkmst.model.ResponseTimeMap;

import io.swagger.annotations.*;
import org.springframework.http.ResponseEntity;
import org.springframework.web.bind.annotation.PathVariable;
import org.springframework.web.bind.annotation.RequestBody;
import org.springframework.web.bind.annotation.RequestHeader;
import org.springframework.web.bind.annotation.RequestMapping;
import org.springframework.web.bind.annotation.RequestMethod;
import org.springframework.web.bind.annotation.RequestParam;
import org.springframework.web.bind.annotation.RequestPart;
import org.springframework.web.multipart.MultipartFile;
import java.io.IOException;

import java.util.List;
/**
 * Provides the info about api methods
 * @author pkmst
 *
 */
@javax.annotation.Generated(value = "org.openapitools.codegen.languages.JavaPKMSTServerCodegen", date = "2019-05-24T09:06:49.586Z[Etc/UTC]")

@Api(value = "Default", description = "the Default API")
public interface DefaultApi {

    @ApiOperation(value = "", notes = "", response = ResponseGeocoding.class, authorizations = {
        @Authorization(value = "ApiKey"),
        @Authorization(value = "ApplicationId")
    }, tags={  })
    @ApiResponses(value = { 
        @ApiResponse(code = 200, message = "Match a query string to geographic coordinates. [Docs link](http://docs.traveltimeplatform.com/reference/geocoding-search/)", response = ResponseGeocoding.class),
        @ApiResponse(code = 200, message = "The json body returned upon error. [Docs link](http://docs.traveltimeplatform.com/reference/error-response)", response = ResponseError.class) })
    @RequestMapping(value = "/v4/geocoding/reverse",
        produces = { "application/json" }, 
        method = RequestMethod.GET)
    ResponseEntity<ResponseGeocoding> geocodingReverseSearch(@ApiParam(value = "", required = true)  @RequestParam(value = "focus.lat", required = true) Double focusLat,@ApiParam(value = "", required = true)  @RequestParam(value = "focus.lng", required = true) Double focusLng,@ApiParam(value = "")  @RequestParam(value = "within.country", required = false) String withinCountry, @RequestHeader(value = "Accept", required = false) String accept) throws Exception;


    @ApiOperation(value = "", notes = "", response = ResponseGeocoding.class, authorizations = {
        @Authorization(value = "ApiKey"),
        @Authorization(value = "ApplicationId")
    }, tags={  })
    @ApiResponses(value = { 
        @ApiResponse(code = 200, message = "Match a query string to geographic coordinates. [Docs link](http://docs.traveltimeplatform.com/reference/geocoding-search/)", response = ResponseGeocoding.class),
        @ApiResponse(code = 200, message = "The json body returned upon error. [Docs link](http://docs.traveltimeplatform.com/reference/error-response)", response = ResponseError.class) })
    @RequestMapping(value = "/v4/geocoding/search",
        produces = { "application/json" }, 
        method = RequestMethod.GET)
    ResponseEntity<ResponseGeocoding> geocodingSearch(@ApiParam(value = "", required = true)  @RequestParam(value = "query", required = true) String query,@ApiParam(value = "")  @RequestParam(value = "within.country", required = false) String withinCountry,@ApiParam(value = "")  @RequestParam(value = "focus.lat", required = false) Double focusLat,@ApiParam(value = "")  @RequestParam(value = "focus.lng", required = false) Double focusLng, @RequestHeader(value = "Accept", required = false) String accept) throws Exception;


    @ApiOperation(value = "", notes = "", response = ResponseMapInfo.class, authorizations = {
        @Authorization(value = "ApiKey"),
        @Authorization(value = "ApplicationId")
    }, tags={  })
    @ApiResponses(value = { 
        @ApiResponse(code = 200, message = "Returns information about currently supported countries. [Docs link](http://docs.traveltimeplatform.com/reference/map-info/)", response = ResponseMapInfo.class),
        @ApiResponse(code = 200, message = "The json body returned upon error. [Docs link](http://docs.traveltimeplatform.com/reference/error-response)", response = ResponseError.class) })
    @RequestMapping(value = "/v4/map-info",
        produces = { "application/json" }, 
        method = RequestMethod.GET)
    ResponseEntity<ResponseMapInfo> mapInfo( @RequestHeader(value = "Accept", required = false) String accept) throws Exception;


    @ApiOperation(value = "", notes = "", response = ResponseRoutes.class, authorizations = {
        @Authorization(value = "ApiKey"),
        @Authorization(value = "ApplicationId")
    }, tags={  })
    @ApiResponses(value = { 
        @ApiResponse(code = 200, message = "Returns routing information between source and destinations. [Docs link](http://docs.traveltimeplatform.com/reference/routes/)", response = ResponseRoutes.class),
        @ApiResponse(code = 200, message = "The json body returned upon error. [Docs link](http://docs.traveltimeplatform.com/reference/error-response)", response = ResponseError.class) })
    @RequestMapping(value = "/v4/routes",
        produces = { "application/json" }, 
        consumes = { "application/json" },
        method = RequestMethod.POST)
    ResponseEntity<ResponseRoutes> routes(@ApiParam(value = "" ,required=true )   @RequestBody RequestRoutes requestRoutes, @RequestHeader(value = "Accept", required = false) String accept) throws Exception;


    @ApiOperation(value = "", notes = "", response = ResponseSupportedLocations.class, authorizations = {
        @Authorization(value = "ApiKey"),
        @Authorization(value = "ApplicationId")
    }, tags={  })
    @ApiResponses(value = { 
        @ApiResponse(code = 200, message = "Find out what points are supported by our api. [Docs link](http://docs.traveltimeplatform.com/reference/supported-locations/)", response = ResponseSupportedLocations.class),
        @ApiResponse(code = 200, message = "The json body returned upon error. [Docs link](http://docs.traveltimeplatform.com/reference/error-response)", response = ResponseError.class) })
    @RequestMapping(value = "/v4/supported-locations",
        produces = { "application/json" }, 
        consumes = { "application/json" },
        method = RequestMethod.POST)
    ResponseEntity<ResponseSupportedLocations> supportedLocations(@ApiParam(value = "" ,required=true )   @RequestBody RequestSupportedLocations requestSupportedLocations, @RequestHeader(value = "Accept", required = false) String accept) throws Exception;


    @ApiOperation(value = "", notes = "", response = ResponseTimeFilter.class, authorizations = {
        @Authorization(value = "ApiKey"),
        @Authorization(value = "ApplicationId")
    }, tags={  })
    @ApiResponses(value = { 
        @ApiResponse(code = 200, message = "Given origin and destination points filter out points that cannot be reached within specified time limit. [Docs link](http://docs.traveltimeplatform.com/reference/time-filter)", response = ResponseTimeFilter.class),
        @ApiResponse(code = 200, message = "The json body returned upon error. [Docs link](http://docs.traveltimeplatform.com/reference/error-response)", response = ResponseError.class) })
    @RequestMapping(value = "/v4/time-filter",
        produces = { "application/json" }, 
        consumes = { "application/json" },
        method = RequestMethod.POST)
    ResponseEntity<ResponseTimeFilter> timeFilter(@ApiParam(value = "" ,required=true )   @RequestBody RequestTimeFilter requestTimeFilter, @RequestHeader(value = "Accept", required = false) String accept) throws Exception;


    @ApiOperation(value = "", notes = "", response = ResponseTimeFilterFast.class, authorizations = {
        @Authorization(value = "ApiKey"),
        @Authorization(value = "ApplicationId")
    }, tags={  })
    @ApiResponses(value = { 
        @ApiResponse(code = 200, message = "A very fast version of Time Filter. [Docs link](http://docs.traveltimeplatform.com/reference/time-filter-fast/)", response = ResponseTimeFilterFast.class),
        @ApiResponse(code = 200, message = "The json body returned upon error. [Docs link](http://docs.traveltimeplatform.com/reference/error-response)", response = ResponseError.class) })
    @RequestMapping(value = "/v4/time-filter/fast",
        produces = { "application/json" }, 
        consumes = { "application/json" },
        method = RequestMethod.POST)
    ResponseEntity<ResponseTimeFilterFast> timeFilterFast(@ApiParam(value = "" ,required=true )   @RequestBody RequestTimeFilterFast requestTimeFilterFast, @RequestHeader(value = "Accept", required = false) String accept) throws Exception;


    @ApiOperation(value = "", notes = "", response = ResponseTimeFilterPostcodeDistricts.class, authorizations = {
        @Authorization(value = "ApiKey"),
        @Authorization(value = "ApplicationId")
    }, tags={  })
    @ApiResponses(value = { 
        @ApiResponse(code = 200, message = "Find districts that have a certain coverage from origin and get statistics about postcodes within such districts. [Docs link](http://docs.traveltimeplatform.com/reference/postcode-district-filter/)", response = ResponseTimeFilterPostcodeDistricts.class),
        @ApiResponse(code = 200, message = "The json body returned upon error. [Docs link](http://docs.traveltimeplatform.com/reference/error-response)", response = ResponseError.class) })
    @RequestMapping(value = "/v4/time-filter/postcode-districts",
        produces = { "application/json" }, 
        consumes = { "application/json" },
        method = RequestMethod.POST)
    ResponseEntity<ResponseTimeFilterPostcodeDistricts> timeFilterPostcodeDistricts(@ApiParam(value = "" ,required=true )   @RequestBody RequestTimeFilterPostcodeDistricts requestTimeFilterPostcodeDistricts, @RequestHeader(value = "Accept", required = false) String accept) throws Exception;


    @ApiOperation(value = "", notes = "", response = ResponseTimeFilterPostcodeSectors.class, authorizations = {
        @Authorization(value = "ApiKey"),
        @Authorization(value = "ApplicationId")
    }, tags={  })
    @ApiResponses(value = { 
        @ApiResponse(code = 200, message = "Find sectors that have a certain coverage from origin and get statistics about postcodes within such sectors. [Docs link](http://docs.traveltimeplatform.com/reference/postcode-sector-filter/)", response = ResponseTimeFilterPostcodeSectors.class),
        @ApiResponse(code = 200, message = "The json body returned upon error. [Docs link](http://docs.traveltimeplatform.com/reference/error-response)", response = ResponseError.class) })
    @RequestMapping(value = "/v4/time-filter/postcode-sectors",
        produces = { "application/json" }, 
        consumes = { "application/json" },
        method = RequestMethod.POST)
    ResponseEntity<ResponseTimeFilterPostcodeSectors> timeFilterPostcodeSectors(@ApiParam(value = "" ,required=true )   @RequestBody RequestTimeFilterPostcodeSectors requestTimeFilterPostcodeSectors, @RequestHeader(value = "Accept", required = false) String accept) throws Exception;


    @ApiOperation(value = "", notes = "", response = ResponseTimeFilterPostcodes.class, authorizations = {
        @Authorization(value = "ApiKey"),
        @Authorization(value = "ApplicationId")
    }, tags={  })
    @ApiResponses(value = { 
        @ApiResponse(code = 200, message = "Find reachable postcodes from origin and get statistics about such postcodes. [Docs link](http://docs.traveltimeplatform.com/reference/postcode-search/)", response = ResponseTimeFilterPostcodes.class),
        @ApiResponse(code = 200, message = "The json body returned upon error. [Docs link](http://docs.traveltimeplatform.com/reference/error-response)", response = ResponseError.class) })
    @RequestMapping(value = "/v4/time-filter/postcodes",
        produces = { "application/json" }, 
        consumes = { "application/json" },
        method = RequestMethod.POST)
    ResponseEntity<ResponseTimeFilterPostcodes> timeFilterPostcodes(@ApiParam(value = "" ,required=true )   @RequestBody RequestTimeFilterPostcodes requestTimeFilterPostcodes, @RequestHeader(value = "Accept", required = false) String accept) throws Exception;


    @ApiOperation(value = "", notes = "", response = ResponseTimeMap.class, authorizations = {
        @Authorization(value = "ApiKey"),
        @Authorization(value = "ApplicationId")
    }, tags={  })
    @ApiResponses(value = { 
        @ApiResponse(code = 200, message = "Given origin coordinates, find shapes of zones reachable within corresponding travel time. [Docs link](http://docs.traveltimeplatform.com/reference/time-map/)", response = ResponseTimeMap.class),
        @ApiResponse(code = 200, message = "The json body returned upon error. [Docs link](http://docs.traveltimeplatform.com/reference/error-response)", response = ResponseError.class) })
    @RequestMapping(value = "/v4/time-map",
        produces = { "application/json", "application/vnd.wkt+json", "application/vnd.wkt-no-holes+json", "application/vnd.bounding-boxes+json" }, 
        consumes = { "application/json" },
        method = RequestMethod.POST)
    ResponseEntity<ResponseTimeMap> timeMap(@ApiParam(value = "" ,required=true )   @RequestBody RequestTimeMap requestTimeMap, @RequestHeader(value = "Accept", required = false) String accept) throws Exception;

}
