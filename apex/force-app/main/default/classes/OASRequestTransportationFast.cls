/*
 * TravelTime Platform API
 * No description provided (generated by Openapi Generator https://github.com/openapitools/openapi-generator)
 *
 * The version of the OpenAPI document: 1.0.0
 * Contact: support@igeolise.com
 *
 * NOTE: This class is auto generated by the OAS code generator program.
 * https://github.com/OpenAPITools/openapi-generator
 * Do not edit the class manually.
 */

/**
 * OASRequestTransportationFast
 */
public class OASRequestTransportationFast implements OAS.MappedProperties {
    /**
     * Gets or Sets r_type
     */
    public enum RTypeEnum {
        PUBLIC_TRANSPORT,
        DRIVING,
        DRIVING_PUBLIC_TRANSPORT
    }

    /**
     * Get r_type
     * @return r_type
     */
    public RTypeEnum r_type { get; set; }

    private static final Map<String, String> propertyMappings = new Map<String, String>{
        'type' => 'r_type'
    };

    public Map<String, String> getPropertyMappings() {
        return propertyMappings;
    }

    public static OASRequestTransportationFast getExample() {
        OASRequestTransportationFast requestTransportationFast = new OASRequestTransportationFast();
          requestTransportationFast.r_type = RTypeEnum.PUBLIC_TRANSPORT;
        return requestTransportationFast;
    }

    public Boolean equals(Object obj) {
        if (obj instanceof OASRequestTransportationFast) {           
            OASRequestTransportationFast requestTransportationFast = (OASRequestTransportationFast) obj;
            return this.r_type == requestTransportationFast.r_type;
        }
        return false;
    }

    public Integer hashCode() {
        Integer hashCode = 43;
        hashCode = (17 * hashCode) + (r_type == null ? 0 : System.hashCode(r_type));
        return hashCode;
    }
}

