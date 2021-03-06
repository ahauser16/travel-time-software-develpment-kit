# TravelTime Platform API
#
# No description provided (generated by Openapi Generator https://github.com/openapitools/openapi-generator)
#
# The version of the OpenAPI document: 1.0.0
# Contact: support@igeolise.com
# Generated by: https://openapi-generator.tech

#' @docType class
#' @title ResponseTravelTimeStatistics
#' @description ResponseTravelTimeStatistics Class
#' @format An \code{R6Class} generator object
#' @field min  integer 
#'
#' @field max  integer 
#'
#' @field mean  integer 
#'
#' @field median  integer 
#'
#'
#' @importFrom R6 R6Class
#' @importFrom jsonlite fromJSON toJSON
#' @export
ResponseTravelTimeStatistics <- R6::R6Class(
  'ResponseTravelTimeStatistics',
  public = list(
    `min` = NULL,
    `max` = NULL,
    `mean` = NULL,
    `median` = NULL,
    initialize = function(`min`, `max`, `mean`, `median`, ...){
      local.optional.var <- list(...)
      if (!missing(`min`)) {
        stopifnot(is.numeric(`min`), length(`min`) == 1)
        self$`min` <- `min`
      }
      if (!missing(`max`)) {
        stopifnot(is.numeric(`max`), length(`max`) == 1)
        self$`max` <- `max`
      }
      if (!missing(`mean`)) {
        stopifnot(is.numeric(`mean`), length(`mean`) == 1)
        self$`mean` <- `mean`
      }
      if (!missing(`median`)) {
        stopifnot(is.numeric(`median`), length(`median`) == 1)
        self$`median` <- `median`
      }
    },
    toJSON = function() {
      ResponseTravelTimeStatisticsObject <- list()
      if (!is.null(self$`min`)) {
        ResponseTravelTimeStatisticsObject[['min']] <-
          self$`min`
      }
      if (!is.null(self$`max`)) {
        ResponseTravelTimeStatisticsObject[['max']] <-
          self$`max`
      }
      if (!is.null(self$`mean`)) {
        ResponseTravelTimeStatisticsObject[['mean']] <-
          self$`mean`
      }
      if (!is.null(self$`median`)) {
        ResponseTravelTimeStatisticsObject[['median']] <-
          self$`median`
      }

      ResponseTravelTimeStatisticsObject
    },
    fromJSON = function(ResponseTravelTimeStatisticsJson) {
      ResponseTravelTimeStatisticsObject <- jsonlite::fromJSON(ResponseTravelTimeStatisticsJson)
      if (!is.null(ResponseTravelTimeStatisticsObject$`min`)) {
        self$`min` <- ResponseTravelTimeStatisticsObject$`min`
      }
      if (!is.null(ResponseTravelTimeStatisticsObject$`max`)) {
        self$`max` <- ResponseTravelTimeStatisticsObject$`max`
      }
      if (!is.null(ResponseTravelTimeStatisticsObject$`mean`)) {
        self$`mean` <- ResponseTravelTimeStatisticsObject$`mean`
      }
      if (!is.null(ResponseTravelTimeStatisticsObject$`median`)) {
        self$`median` <- ResponseTravelTimeStatisticsObject$`median`
      }
    },
    toJSONString = function() {
      jsoncontent <- c(
        if (!is.null(self$`min`)) {
        sprintf(
        '"min":
          %d
                ',
        self$`min`
        )},
        if (!is.null(self$`max`)) {
        sprintf(
        '"max":
          %d
                ',
        self$`max`
        )},
        if (!is.null(self$`mean`)) {
        sprintf(
        '"mean":
          %d
                ',
        self$`mean`
        )},
        if (!is.null(self$`median`)) {
        sprintf(
        '"median":
          %d
                ',
        self$`median`
        )}
      )
      jsoncontent <- paste(jsoncontent, collapse = ",")
      paste('{', jsoncontent, '}', sep = "")
    },
    fromJSONString = function(ResponseTravelTimeStatisticsJson) {
      ResponseTravelTimeStatisticsObject <- jsonlite::fromJSON(ResponseTravelTimeStatisticsJson)
      self$`min` <- ResponseTravelTimeStatisticsObject$`min`
      self$`max` <- ResponseTravelTimeStatisticsObject$`max`
      self$`mean` <- ResponseTravelTimeStatisticsObject$`mean`
      self$`median` <- ResponseTravelTimeStatisticsObject$`median`
      self
    }
  )
)
