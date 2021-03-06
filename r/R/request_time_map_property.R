# TravelTime Platform API
#
# No description provided (generated by Openapi Generator https://github.com/openapitools/openapi-generator)
#
# The version of the OpenAPI document: 1.0.0
# Contact: support@igeolise.com
# Generated by: https://openapi-generator.tech

#' @docType class
#' @title RequestTimeMapProperty
#' @description RequestTimeMapProperty Class
#' @format An \code{R6Class} generator object
#'
#' @importFrom R6 R6Class
#' @importFrom jsonlite fromJSON toJSON
#' @export
RequestTimeMapProperty <- R6::R6Class(
  'RequestTimeMapProperty',
  public = list(
    initialize = function(, ...){
      local.optional.var <- list(...)
    },
    toJSON = function() {
      RequestTimeMapPropertyObject <- list()

      RequestTimeMapPropertyObject
    },
    fromJSON = function(RequestTimeMapPropertyJson) {
      RequestTimeMapPropertyObject <- jsonlite::fromJSON(RequestTimeMapPropertyJson)
    },
    toJSONString = function() {
      jsoncontent <- c(
      )
      jsoncontent <- paste(jsoncontent, collapse = ",")
      paste('{', jsoncontent, '}', sep = "")
    },
    fromJSONString = function(RequestTimeMapPropertyJson) {
      RequestTimeMapPropertyObject <- jsonlite::fromJSON(RequestTimeMapPropertyJson)
      self
    }
  )
)
