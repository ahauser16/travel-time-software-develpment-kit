package org.openapitools.model

import java.util.Objects
import com.fasterxml.jackson.annotation.JsonProperty
import javax.validation.constraints.DecimalMax
import javax.validation.constraints.DecimalMin
import javax.validation.constraints.Max
import javax.validation.constraints.Min
import javax.validation.constraints.NotNull
import javax.validation.constraints.Pattern
import javax.validation.constraints.Size

/**
 * 
 * @param enabled 
 * @param maxResults 
 * @param width 
 */
data class RequestRangeFull(

    @get:NotNull 
    @JsonProperty("enabled") val enabled: kotlin.Boolean,

    @get:NotNull @get:Min(1) @get:Max(5) 
    @JsonProperty("max_results") val maxResults: kotlin.Int,

    @get:NotNull @get:Min(1) @get:Max(43200) 
    @JsonProperty("width") val width: kotlin.Int
) {

}

