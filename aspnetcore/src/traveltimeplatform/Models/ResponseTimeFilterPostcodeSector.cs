/*
 * TravelTime Platform API
 *
 * No description provided (generated by Openapi Generator https://github.com/openapitools/openapi-generator)
 *
 * The version of the OpenAPI document: 1.0.0
 * Contact: support@igeolise.com
 * Generated by: https://openapi-generator.tech
 */

using System;
using System.Linq;
using System.Text;
using System.Collections.Generic;
using System.ComponentModel.DataAnnotations;
using System.Runtime.Serialization;
using Newtonsoft.Json;

namespace traveltimeplatform.Models
{ 
    /// <summary>
    /// 
    /// </summary>
    [DataContract]
    public partial class ResponseTimeFilterPostcodeSector : IEquatable<ResponseTimeFilterPostcodeSector>
    { 
        /// <summary>
        /// Gets or Sets Code
        /// </summary>
        [Required]
        [DataMember(Name="code", EmitDefaultValue=false)]
        public String Code { get; set; }

        /// <summary>
        /// Gets or Sets Properties
        /// </summary>
        [Required]
        [DataMember(Name="properties", EmitDefaultValue=false)]
        public ResponseTimeFilterPostcodeSectorProperties Properties { get; set; }

        /// <summary>
        /// Returns the string presentation of the object
        /// </summary>
        /// <returns>String presentation of the object</returns>
        public override string ToString()
        {
            var sb = new StringBuilder();
            sb.Append("class ResponseTimeFilterPostcodeSector {\n");
            sb.Append("  Code: ").Append(Code).Append("\n");
            sb.Append("  Properties: ").Append(Properties).Append("\n");
            sb.Append("}\n");
            return sb.ToString();
        }

        /// <summary>
        /// Returns the JSON string presentation of the object
        /// </summary>
        /// <returns>JSON string presentation of the object</returns>
        public string ToJson()
        {
            return JsonConvert.SerializeObject(this, Formatting.Indented);
        }

        /// <summary>
        /// Returns true if objects are equal
        /// </summary>
        /// <param name="obj">Object to be compared</param>
        /// <returns>Boolean</returns>
        public override bool Equals(object obj)
        {
            if (obj is null) return false;
            if (ReferenceEquals(this, obj)) return true;
            return obj.GetType() == GetType() && Equals((ResponseTimeFilterPostcodeSector)obj);
        }

        /// <summary>
        /// Returns true if ResponseTimeFilterPostcodeSector instances are equal
        /// </summary>
        /// <param name="other">Instance of ResponseTimeFilterPostcodeSector to be compared</param>
        /// <returns>Boolean</returns>
        public bool Equals(ResponseTimeFilterPostcodeSector other)
        {
            if (other is null) return false;
            if (ReferenceEquals(this, other)) return true;

            return 
                (
                    Code == other.Code ||
                    Code != null &&
                    Code.Equals(other.Code)
                ) && 
                (
                    Properties == other.Properties ||
                    Properties != null &&
                    Properties.Equals(other.Properties)
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
                var hashCode = 41;
                // Suitable nullity checks etc, of course :)
                    if (Code != null)
                    hashCode = hashCode * 59 + Code.GetHashCode();
                    if (Properties != null)
                    hashCode = hashCode * 59 + Properties.GetHashCode();
                return hashCode;
            }
        }

        #region Operators
        #pragma warning disable 1591

        public static bool operator ==(ResponseTimeFilterPostcodeSector left, ResponseTimeFilterPostcodeSector right)
        {
            return Equals(left, right);
        }

        public static bool operator !=(ResponseTimeFilterPostcodeSector left, ResponseTimeFilterPostcodeSector right)
        {
            return !Equals(left, right);
        }

        #pragma warning restore 1591
        #endregion Operators
    }
}
