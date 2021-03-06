# TravelTime Platform API
#
# No description provided (generated by Openapi Generator https://github.com/openapitools/openapi-generator)
#
# The version of the OpenAPI document: 1.0.0
# Contact: support@igeolise.com
# Generated by: https://openapi-generator.tech

#' @docType class
#' @title RequestTimeFilterPostcodeSectorsProperty
#' @description RequestTimeFilterPostcodeSectorsProperty Class
#' @format An \code{R6Class} generator object
#'
#' @importFrom R6 R6Class
#' @importFrom jsonlite fromJSON toJSON
#' @export
RequestTimeFilterPostcodeSectorsProperty <- R6::R6Class(
  'RequestTimeFilterPostcodeSectorsProperty',
  public = list(
    initialize = function(, ...){
      local.optional.var <- list(...)
    },
    toJSON = function() {
      RequestTimeFilterPostcodeSectorsPropertyObject <- list()

      RequestTimeFilterPostcodeSectorsPropertyObject
    },
    fromJSON = function(RequestTimeFilterPostcodeSectorsPropertyJson) {
      RequestTimeFilterPostcodeSectorsPropertyObject <- jsonlite::fromJSON(RequestTimeFilterPostcodeSectorsPropertyJson)
    },
    toJSONString = function() {
      jsoncontent <- c(
      )
      jsoncontent <- paste(jsoncontent, collapse = ",")
      paste('{', jsoncontent, '}', sep = "")
    },
    fromJSONString = function(RequestTimeFilterPostcodeSectorsPropertyJson) {
      RequestTimeFilterPostcodeSectorsPropertyObject <- jsonlite::fromJSON(RequestTimeFilterPostcodeSectorsPropertyJson)
      self
    }
  )
)
