package org.openapitools.model

import java.util.Objects
import com.fasterxml.jackson.annotation.JsonProperty
import org.openapitools.model.ResponseFareTicket
import javax.validation.constraints.DecimalMax
import javax.validation.constraints.DecimalMin
import javax.validation.constraints.Max
import javax.validation.constraints.Min
import javax.validation.constraints.NotNull
import javax.validation.constraints.Pattern
import javax.validation.constraints.Size

/**
 * 
 * @param ticketsTotal 
 */
data class ResponseFaresFast(

    @get:NotNull 
    @JsonProperty("tickets_total") val ticketsTotal: kotlin.collections.List<ResponseFareTicket>
) {

}

