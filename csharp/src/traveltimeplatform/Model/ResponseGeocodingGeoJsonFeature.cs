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
using OpenAPIDateConverter = traveltimeplatform.Client.OpenAPIDateConverter;

namespace traveltimeplatform.Model
{
    /// <summary>
    /// ResponseGeocodingGeoJsonFeature
    /// </summary>
    [DataContract]
    public partial class ResponseGeocodingGeoJsonFeature :  IEquatable<ResponseGeocodingGeoJsonFeature>, IValidatableObject
    {
        /// <summary>
        /// Initializes a new instance of the <see cref="ResponseGeocodingGeoJsonFeature" /> class.
        /// </summary>
        [JsonConstructorAttribute]
        protected ResponseGeocodingGeoJsonFeature() { }
        /// <summary>
        /// Initializes a new instance of the <see cref="ResponseGeocodingGeoJsonFeature" /> class.
        /// </summary>
        /// <param name="type">type (required).</param>
        /// <param name="geometry">geometry (required).</param>
        /// <param name="properties">properties (required).</param>
        public ResponseGeocodingGeoJsonFeature(string type = default(string), ResponseGeocodingGeometry geometry = default(ResponseGeocodingGeometry), ResponseGeocodingProperties properties = default(ResponseGeocodingProperties))
        {
            // to ensure "type" is required (not null)
            if (type == null)
            {
                throw new InvalidDataException("type is a required property for ResponseGeocodingGeoJsonFeature and cannot be null");
            }
            else
            {
                this.Type = type;
            }
            
            // to ensure "geometry" is required (not null)
            if (geometry == null)
            {
                throw new InvalidDataException("geometry is a required property for ResponseGeocodingGeoJsonFeature and cannot be null");
            }
            else
            {
                this.Geometry = geometry;
            }
            
            // to ensure "properties" is required (not null)
            if (properties == null)
            {
                throw new InvalidDataException("properties is a required property for ResponseGeocodingGeoJsonFeature and cannot be null");
            }
            else
            {
                this.Properties = properties;
            }
            
        }
        
        /// <summary>
        /// Gets or Sets Type
        /// </summary>
        [DataMember(Name="type", EmitDefaultValue=false)]
        public string Type { get; set; }

        /// <summary>
        /// Gets or Sets Geometry
        /// </summary>
        [DataMember(Name="geometry", EmitDefaultValue=false)]
        public ResponseGeocodingGeometry Geometry { get; set; }

        /// <summary>
        /// Gets or Sets Properties
        /// </summary>
        [DataMember(Name="properties", EmitDefaultValue=false)]
        public ResponseGeocodingProperties Properties { get; set; }

        /// <summary>
        /// Returns the string presentation of the object
        /// </summary>
        /// <returns>String presentation of the object</returns>
        public override string ToString()
        {
            var sb = new StringBuilder();
            sb.Append("class ResponseGeocodingGeoJsonFeature {\n");
            sb.Append("  Type: ").Append(Type).Append("\n");
            sb.Append("  Geometry: ").Append(Geometry).Append("\n");
            sb.Append("  Properties: ").Append(Properties).Append("\n");
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
            return this.Equals(input as ResponseGeocodingGeoJsonFeature);
        }

        /// <summary>
        /// Returns true if ResponseGeocodingGeoJsonFeature instances are equal
        /// </summary>
        /// <param name="input">Instance of ResponseGeocodingGeoJsonFeature to be compared</param>
        /// <returns>Boolean</returns>
        public bool Equals(ResponseGeocodingGeoJsonFeature input)
        {
            if (input == null)
                return false;

            return 
                (
                    this.Type == input.Type ||
                    (this.Type != null &&
                    this.Type.Equals(input.Type))
                ) && 
                (
                    this.Geometry == input.Geometry ||
                    (this.Geometry != null &&
                    this.Geometry.Equals(input.Geometry))
                ) && 
                (
                    this.Properties == input.Properties ||
                    (this.Properties != null &&
                    this.Properties.Equals(input.Properties))
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
                if (this.Type != null)
                    hashCode = hashCode * 59 + this.Type.GetHashCode();
                if (this.Geometry != null)
                    hashCode = hashCode * 59 + this.Geometry.GetHashCode();
                if (this.Properties != null)
                    hashCode = hashCode * 59 + this.Properties.GetHashCode();
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
