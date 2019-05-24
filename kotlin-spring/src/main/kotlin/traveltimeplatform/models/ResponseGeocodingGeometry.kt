package traveltimeplatform.models

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
 * @param type 
 * @param coordinates 
 */
data class ResponseGeocodingGeometry (

        @get:NotNull 
        @JsonProperty("type") val type: String,

        @get:NotNull 
        @JsonProperty("coordinates") val coordinates: List<Double>
) {

}

