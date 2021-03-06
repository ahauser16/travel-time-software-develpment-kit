# TravelTime Platform API
#
# No description provided (generated by Openapi Generator https://github.com/openapitools/openapi-generator)
#
# The version of the OpenAPI document: 1.0.0
# Contact: support@igeolise.com
# Generated by: https://openapi-generator.tech

#' @docType class
#' @title ResponseTransportationMode
#' @description ResponseTransportationMode Class
#' @format An \code{R6Class} generator object
#'
#' @importFrom R6 R6Class
#' @importFrom jsonlite fromJSON toJSON
#' @export
ResponseTransportationMode <- R6::R6Class(
  'ResponseTransportationMode',
  public = list(
    initialize = function(, ...){
      local.optional.var <- list(...)
    },
    toJSON = function() {
      ResponseTransportationModeObject <- list()

      ResponseTransportationModeObject
    },
    fromJSON = function(ResponseTransportationModeJson) {
      ResponseTransportationModeObject <- jsonlite::fromJSON(ResponseTransportationModeJson)
    },
    toJSONString = function() {
      jsoncontent <- c(
      )
      jsoncontent <- paste(jsoncontent, collapse = ",")
      paste('{', jsoncontent, '}', sep = "")
    },
    fromJSONString = function(ResponseTransportationModeJson) {
      ResponseTransportationModeObject <- jsonlite::fromJSON(ResponseTransportationModeJson)
      self
    }
  )
)
