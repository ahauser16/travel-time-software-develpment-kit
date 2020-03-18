/* 
 * TravelTime Platform API
 *
 * No description provided (generated by Openapi Generator https://github.com/openapitools/openapi-generator)
 *
 * The version of the OpenAPI document: 1.0.0
 * Contact: support@igeolise.com
 * Generated by: https://github.com/openapitools/openapi-generator.git
 */


using System;
using System.Linq;
using System.IO;
using System.Text;
using System.Text.RegularExpressions;
using System.Collections;
using System.Collections.Generic;
using System.Collections.ObjectModel;
using System.Runtime.Serialization;
using Newtonsoft.Json;
using Newtonsoft.Json.Converters;
using System.ComponentModel.DataAnnotations;
using OpenAPIDateConverter = Org.OpenAPITools.Client.OpenAPIDateConverter;

namespace Org.OpenAPITools.Model
{
    /// <summary>
    /// ResponseTimeFilterPostcodeSectorProperties
    /// </summary>
    [DataContract]
    public partial class ResponseTimeFilterPostcodeSectorProperties :  IEquatable<ResponseTimeFilterPostcodeSectorProperties>, IValidatableObject
    {
        /// <summary>
        /// Initializes a new instance of the <see cref="ResponseTimeFilterPostcodeSectorProperties" /> class.
        /// </summary>
        /// <param name="travelTimeReachable">travelTimeReachable.</param>
        /// <param name="travelTimeAll">travelTimeAll.</param>
        /// <param name="coverage">coverage.</param>
        public ResponseTimeFilterPostcodeSectorProperties(ResponseTravelTimeStatistics travelTimeReachable = default(ResponseTravelTimeStatistics), ResponseTravelTimeStatistics travelTimeAll = default(ResponseTravelTimeStatistics), double coverage = default(double))
        {
            this.TravelTimeReachable = travelTimeReachable;
            this.TravelTimeAll = travelTimeAll;
            this.Coverage = coverage;
        }
        
        /// <summary>
        /// Gets or Sets TravelTimeReachable
        /// </summary>
        [DataMember(Name="travel_time_reachable", EmitDefaultValue=false)]
        public ResponseTravelTimeStatistics TravelTimeReachable { get; set; }

        /// <summary>
        /// Gets or Sets TravelTimeAll
        /// </summary>
        [DataMember(Name="travel_time_all", EmitDefaultValue=false)]
        public ResponseTravelTimeStatistics TravelTimeAll { get; set; }

        /// <summary>
        /// Gets or Sets Coverage
        /// </summary>
        [DataMember(Name="coverage", EmitDefaultValue=false)]
        public double Coverage { get; set; }

        /// <summary>
        /// Returns the string presentation of the object
        /// </summary>
        /// <returns>String presentation of the object</returns>
        public override string ToString()
        {
            var sb = new StringBuilder();
            sb.Append("class ResponseTimeFilterPostcodeSectorProperties {\n");
            sb.Append("  TravelTimeReachable: ").Append(TravelTimeReachable).Append("\n");
            sb.Append("  TravelTimeAll: ").Append(TravelTimeAll).Append("\n");
            sb.Append("  Coverage: ").Append(Coverage).Append("\n");
            sb.Append("}\n");
            return sb.ToString();
        }
  
        /// <summary>
        /// Returns the JSON string presentation of the object
        /// </summary>
        /// <returns>JSON string presentation of the object</returns>
        public virtual string ToJson()
        {
            return JsonConvert.SerializeObject(this, Formatting.Indented);
        }

        /// <summary>
        /// Returns true if objects are equal
        /// </summary>
        /// <param name="input">Object to be compared</param>
        /// <returns>Boolean</returns>
        public override bool Equals(object input)
        {
            return this.Equals(input as ResponseTimeFilterPostcodeSectorProperties);
        }

        /// <summary>
        /// Returns true if ResponseTimeFilterPostcodeSectorProperties instances are equal
        /// </summary>
        /// <param name="input">Instance of ResponseTimeFilterPostcodeSectorProperties to be compared</param>
        /// <returns>Boolean</returns>
        public bool Equals(ResponseTimeFilterPostcodeSectorProperties input)
        {
            if (input == null)
                return false;

            return 
                (
                    this.TravelTimeReachable == input.TravelTimeReachable ||
                    (this.TravelTimeReachable != null &&
                    this.TravelTimeReachable.Equals(input.TravelTimeReachable))
                ) && 
                (
                    this.TravelTimeAll == input.TravelTimeAll ||
                    (this.TravelTimeAll != null &&
                    this.TravelTimeAll.Equals(input.TravelTimeAll))
                ) && 
                (
                    this.Coverage == input.Coverage ||
                    this.Coverage.Equals(input.Coverage)
                );
        }

        /// <summary>
        /// Gets the hash code
        /// </summary>
        /// <returns>Hash code</returns>
        public override int GetHashCode()
        {
            unchecked // Overflow is fine, just wrap
            {
                int hashCode = 41;
                if (this.TravelTimeReachable != null)
                    hashCode = hashCode * 59 + this.TravelTimeReachable.GetHashCode();
                if (this.TravelTimeAll != null)
                    hashCode = hashCode * 59 + this.TravelTimeAll.GetHashCode();
                hashCode = hashCode * 59 + this.Coverage.GetHashCode();
                return hashCode;
            }
        }

        /// <summary>
        /// To validate all properties of the instance
        /// </summary>
        /// <param name="validationContext">Validation context</param>
        /// <returns>Validation Result</returns>
        IEnumerable<System.ComponentModel.DataAnnotations.ValidationResult> IValidatableObject.Validate(ValidationContext validationContext)
        {
            yield break;
        }
    }

}
