package org.openapitools.api;

import org.openapitools.model.RequestRoutes;
import org.openapitools.model.RequestSupportedLocations;
import org.openapitools.model.RequestTimeFilter;
import org.openapitools.model.RequestTimeFilterFast;
import org.openapitools.model.RequestTimeFilterPostcodeDistricts;
import org.openapitools.model.RequestTimeFilterPostcodeSectors;
import org.openapitools.model.RequestTimeFilterPostcodes;
import org.openapitools.model.RequestTimeMap;
import org.openapitools.model.ResponseError;
import org.openapitools.model.ResponseGeocoding;
import org.openapitools.model.ResponseMapInfo;
import org.openapitools.model.ResponseRoutes;
import org.openapitools.model.ResponseSupportedLocations;
import org.openapitools.model.ResponseTimeFilter;
import org.openapitools.model.ResponseTimeFilterFast;
import org.openapitools.model.ResponseTimeFilterPostcodeDistricts;
import org.openapitools.model.ResponseTimeFilterPostcodeSectors;
import org.openapitools.model.ResponseTimeFilterPostcodes;
import org.openapitools.model.ResponseTimeMap;

import java.io.InputStream;
import java.io.OutputStream;
import java.util.List;
import java.util.Map;
import javax.ws.rs.*;
import javax.ws.rs.core.Response;
import javax.ws.rs.core.MediaType;
import org.apache.cxf.jaxrs.ext.multipart.*;

import io.swagger.annotations.Api;
import io.swagger.annotations.ApiOperation;
import io.swagger.annotations.ApiResponses;
import io.swagger.annotations.ApiResponse;
import io.swagger.jaxrs.PATCH;
import javax.validation.constraints.*;
import javax.validation.Valid;

/**
 * TravelTime Platform API
 *
 * <p>No description provided (generated by Openapi Generator https://github.com/openapitools/openapi-generator)
 *
 */
@Path("/")
@Api(value = "/", description = "")
public interface DefaultApi  {

    @GET
    @Path("/v4/geocoding/reverse")
    @Produces({ "application/json" })
    @ApiOperation(value = "", tags={  })
    @ApiResponses(value = { 
        @ApiResponse(code = 200, message = "Match a query string to geographic coordinates. [Docs link](http://docs.traveltimeplatform.com/reference/geocoding-search/)", response = ResponseGeocoding.class),
        @ApiResponse(code = 200, message = "The json body returned upon error. [Docs link](http://docs.traveltimeplatform.com/reference/error-response)", response = ResponseError.class) })
    public ResponseGeocoding geocodingReverseSearch(@QueryParam("focus.lat") @NotNull  Double focusLat, @QueryParam("focus.lng") @NotNull  Double focusLng, @QueryParam("within.country")  String withinCountry);

    @GET
    @Path("/v4/geocoding/search")
    @Produces({ "application/json" })
    @ApiOperation(value = "", tags={  })
    @ApiResponses(value = { 
        @ApiResponse(code = 200, message = "Match a query string to geographic coordinates. [Docs link](http://docs.traveltimeplatform.com/reference/geocoding-search/)", response = ResponseGeocoding.class),
        @ApiResponse(code = 200, message = "The json body returned upon error. [Docs link](http://docs.traveltimeplatform.com/reference/error-response)", response = ResponseError.class) })
    public ResponseGeocoding geocodingSearch(@QueryParam("query") @NotNull  String query, @QueryParam("within.country")  String withinCountry, @QueryParam("focus.lat")  Double focusLat, @QueryParam("focus.lng")  Double focusLng);

    @GET
    @Path("/v4/map-info")
    @Produces({ "application/json" })
    @ApiOperation(value = "", tags={  })
    @ApiResponses(value = { 
        @ApiResponse(code = 200, message = "Returns information about currently supported countries. [Docs link](http://docs.traveltimeplatform.com/reference/map-info/)", response = ResponseMapInfo.class),
        @ApiResponse(code = 200, message = "The json body returned upon error. [Docs link](http://docs.traveltimeplatform.com/reference/error-response)", response = ResponseError.class) })
    public ResponseMapInfo mapInfo();

    @POST
    @Path("/v4/routes")
    @Consumes({ "application/json" })
    @Produces({ "application/json" })
    @ApiOperation(value = "", tags={  })
    @ApiResponses(value = { 
        @ApiResponse(code = 200, message = "Returns routing information between source and destinations. [Docs link](http://docs.traveltimeplatform.com/reference/routes/)", response = ResponseRoutes.class),
        @ApiResponse(code = 200, message = "The json body returned upon error. [Docs link](http://docs.traveltimeplatform.com/reference/error-response)", response = ResponseError.class) })
    public ResponseRoutes routes(@Valid RequestRoutes requestRoutes);

    @POST
    @Path("/v4/supported-locations")
    @Consumes({ "application/json" })
    @Produces({ "application/json" })
    @ApiOperation(value = "", tags={  })
    @ApiResponses(value = { 
        @ApiResponse(code = 200, message = "Find out what points are supported by our api. [Docs link](http://docs.traveltimeplatform.com/reference/supported-locations/)", response = ResponseSupportedLocations.class),
        @ApiResponse(code = 200, message = "The json body returned upon error. [Docs link](http://docs.traveltimeplatform.com/reference/error-response)", response = ResponseError.class) })
    public ResponseSupportedLocations supportedLocations(@Valid RequestSupportedLocations requestSupportedLocations);

    @POST
    @Path("/v4/time-filter")
    @Consumes({ "application/json" })
    @Produces({ "application/json" })
    @ApiOperation(value = "", tags={  })
    @ApiResponses(value = { 
        @ApiResponse(code = 200, message = "Given origin and destination points filter out points that cannot be reached within specified time limit. [Docs link](http://docs.traveltimeplatform.com/reference/time-filter)", response = ResponseTimeFilter.class),
        @ApiResponse(code = 200, message = "The json body returned upon error. [Docs link](http://docs.traveltimeplatform.com/reference/error-response)", response = ResponseError.class) })
    public ResponseTimeFilter timeFilter(@Valid RequestTimeFilter requestTimeFilter);

    @POST
    @Path("/v4/time-filter/fast")
    @Consumes({ "application/json" })
    @Produces({ "application/json" })
    @ApiOperation(value = "", tags={  })
    @ApiResponses(value = { 
        @ApiResponse(code = 200, message = "A very fast version of Time Filter. [Docs link](http://docs.traveltimeplatform.com/reference/time-filter-fast/)", response = ResponseTimeFilterFast.class),
        @ApiResponse(code = 200, message = "The json body returned upon error. [Docs link](http://docs.traveltimeplatform.com/reference/error-response)", response = ResponseError.class) })
    public ResponseTimeFilterFast timeFilterFast(@Valid RequestTimeFilterFast requestTimeFilterFast);

    @POST
    @Path("/v4/time-filter/postcode-districts")
    @Consumes({ "application/json" })
    @Produces({ "application/json" })
    @ApiOperation(value = "", tags={  })
    @ApiResponses(value = { 
        @ApiResponse(code = 200, message = "Find districts that have a certain coverage from origin and get statistics about postcodes within such districts. [Docs link](http://docs.traveltimeplatform.com/reference/postcode-district-filter/)", response = ResponseTimeFilterPostcodeDistricts.class),
        @ApiResponse(code = 200, message = "The json body returned upon error. [Docs link](http://docs.traveltimeplatform.com/reference/error-response)", response = ResponseError.class) })
    public ResponseTimeFilterPostcodeDistricts timeFilterPostcodeDistricts(@Valid RequestTimeFilterPostcodeDistricts requestTimeFilterPostcodeDistricts);

    @POST
    @Path("/v4/time-filter/postcode-sectors")
    @Consumes({ "application/json" })
    @Produces({ "application/json" })
    @ApiOperation(value = "", tags={  })
    @ApiResponses(value = { 
        @ApiResponse(code = 200, message = "Find sectors that have a certain coverage from origin and get statistics about postcodes within such sectors. [Docs link](http://docs.traveltimeplatform.com/reference/postcode-sector-filter/)", response = ResponseTimeFilterPostcodeSectors.class),
        @ApiResponse(code = 200, message = "The json body returned upon error. [Docs link](http://docs.traveltimeplatform.com/reference/error-response)", response = ResponseError.class) })
    public ResponseTimeFilterPostcodeSectors timeFilterPostcodeSectors(@Valid RequestTimeFilterPostcodeSectors requestTimeFilterPostcodeSectors);

    @POST
    @Path("/v4/time-filter/postcodes")
    @Consumes({ "application/json" })
    @Produces({ "application/json" })
    @ApiOperation(value = "", tags={  })
    @ApiResponses(value = { 
        @ApiResponse(code = 200, message = "Find reachable postcodes from origin and get statistics about such postcodes. [Docs link](http://docs.traveltimeplatform.com/reference/postcode-search/)", response = ResponseTimeFilterPostcodes.class),
        @ApiResponse(code = 200, message = "The json body returned upon error. [Docs link](http://docs.traveltimeplatform.com/reference/error-response)", response = ResponseError.class) })
    public ResponseTimeFilterPostcodes timeFilterPostcodes(@Valid RequestTimeFilterPostcodes requestTimeFilterPostcodes);

    @POST
    @Path("/v4/time-map")
    @Consumes({ "application/json" })
    @Produces({ "application/json", "application/vnd.wkt+json", "application/vnd.wkt-no-holes+json", "application/vnd.bounding-boxes+json" })
    @ApiOperation(value = "", tags={  })
    @ApiResponses(value = { 
        @ApiResponse(code = 200, message = "Given origin coordinates, find shapes of zones reachable within corresponding travel time. [Docs link](http://docs.traveltimeplatform.com/reference/time-map/)", response = ResponseTimeMap.class),
        @ApiResponse(code = 200, message = "The json body returned upon error. [Docs link](http://docs.traveltimeplatform.com/reference/error-response)", response = ResponseError.class) })
    public ResponseTimeMap timeMap(@Valid RequestTimeMap requestTimeMap);
}

