# TravelTime Platform API
#
# No description provided (generated by Openapi Generator https://github.com/openapitools/openapi-generator)
#
# The version of the OpenAPI document: 1.0.0
# Contact: support@igeolise.com
# Generated by: https://openapi-generator.tech

#' @docType class
#' @title ResponseGeocodingGeometry
#' @description ResponseGeocodingGeometry Class
#' @format An \code{R6Class} generator object
#' @field type  character 
#'
#' @field coordinates  list( numeric ) 
#'
#'
#' @importFrom R6 R6Class
#' @importFrom jsonlite fromJSON toJSON
#' @export
ResponseGeocodingGeometry <- R6::R6Class(
  'ResponseGeocodingGeometry',
  public = list(
    `type` = NULL,
    `coordinates` = NULL,
    initialize = function(`type`, `coordinates`, ...){
      local.optional.var <- list(...)
      if (!missing(`type`)) {
        stopifnot(is.character(`type`), length(`type`) == 1)
        self$`type` <- `type`
      }
      if (!missing(`coordinates`)) {
        stopifnot(is.vector(`coordinates`), length(`coordinates`) != 0)
        sapply(`coordinates`, function(x) stopifnot(is.character(x)))
        self$`coordinates` <- `coordinates`
      }
    },
    toJSON = function() {
      ResponseGeocodingGeometryObject <- list()
      if (!is.null(self$`type`)) {
        ResponseGeocodingGeometryObject[['type']] <-
          self$`type`
      }
      if (!is.null(self$`coordinates`)) {
        ResponseGeocodingGeometryObject[['coordinates']] <-
          self$`coordinates`
      }

      ResponseGeocodingGeometryObject
    },
    fromJSON = function(ResponseGeocodingGeometryJson) {
      ResponseGeocodingGeometryObject <- jsonlite::fromJSON(ResponseGeocodingGeometryJson)
      if (!is.null(ResponseGeocodingGeometryObject$`type`)) {
        self$`type` <- ResponseGeocodingGeometryObject$`type`
      }
      if (!is.null(ResponseGeocodingGeometryObject$`coordinates`)) {
        self$`coordinates` <- ApiClient$new()$deserializeObj(ResponseGeocodingGeometryObject$`coordinates`, "array[numeric]", loadNamespace("openapi"))
      }
    },
    toJSONString = function() {
      jsoncontent <- c(
        if (!is.null(self$`type`)) {
        sprintf(
        '"type":
          "%s"
                ',
        self$`type`
        )},
        if (!is.null(self$`coordinates`)) {
        sprintf(
        '"coordinates":
           [%s]
        ',
        paste(unlist(lapply(self$`coordinates`, function(x) paste0('"', x, '"'))), collapse=",")
        )}
      )
      jsoncontent <- paste(jsoncontent, collapse = ",")
      paste('{', jsoncontent, '}', sep = "")
    },
    fromJSONString = function(ResponseGeocodingGeometryJson) {
      ResponseGeocodingGeometryObject <- jsonlite::fromJSON(ResponseGeocodingGeometryJson)
      self$`type` <- ResponseGeocodingGeometryObject$`type`
      self$`coordinates` <- ApiClient$new()$deserializeObj(ResponseGeocodingGeometryObject$`coordinates`, "array[numeric]", loadNamespace("openapi"))
      self
    }
  )
)
