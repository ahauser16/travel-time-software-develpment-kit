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
using System.ComponentModel;
using System.ComponentModel.DataAnnotations;
using System.Runtime.Serialization;
using Newtonsoft.Json;
using Org.OpenAPITools.Converters;

namespace Org.OpenAPITools.Models
{ 
    /// <summary>
    /// 
    /// </summary>
    [DataContract]
    public partial class ResponseTravelTimeStatistics : IEquatable<ResponseTravelTimeStatistics>
    {
        /// <summary>
        /// Gets or Sets Min
        /// </summary>
        [Required]
        [DataMember(Name="min", EmitDefaultValue=false)]
        public int Min { get; set; }

        /// <summary>
        /// Gets or Sets Max
        /// </summary>
        [Required]
        [DataMember(Name="max", EmitDefaultValue=false)]
        public int Max { get; set; }

        /// <summary>
        /// Gets or Sets Mean
        /// </summary>
        [Required]
        [DataMember(Name="mean", EmitDefaultValue=false)]
        public int Mean { get; set; }

        /// <summary>
        /// Gets or Sets Median
        /// </summary>
        [Required]
        [DataMember(Name="median", EmitDefaultValue=false)]
        public int Median { get; set; }

        /// <summary>
        /// Returns the string presentation of the object
        /// </summary>
        /// <returns>String presentation of the object</returns>
        public override string ToString()
        {
            var sb = new StringBuilder();
            sb.Append("class ResponseTravelTimeStatistics {\n");
            sb.Append("  Min: ").Append(Min).Append("\n");
            sb.Append("  Max: ").Append(Max).Append("\n");
            sb.Append("  Mean: ").Append(Mean).Append("\n");
            sb.Append("  Median: ").Append(Median).Append("\n");
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
            return obj.GetType() == GetType() && Equals((ResponseTravelTimeStatistics)obj);
        }

        /// <summary>
        /// Returns true if ResponseTravelTimeStatistics instances are equal
        /// </summary>
        /// <param name="other">Instance of ResponseTravelTimeStatistics to be compared</param>
        /// <returns>Boolean</returns>
        public bool Equals(ResponseTravelTimeStatistics other)
        {
            if (other is null) return false;
            if (ReferenceEquals(this, other)) return true;

            return 
                (
                    Min == other.Min ||
                    
                    Min.Equals(other.Min)
                ) && 
                (
                    Max == other.Max ||
                    
                    Max.Equals(other.Max)
                ) && 
                (
                    Mean == other.Mean ||
                    
                    Mean.Equals(other.Mean)
                ) && 
                (
                    Median == other.Median ||
                    
                    Median.Equals(other.Median)
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
                    
                    hashCode = hashCode * 59 + Min.GetHashCode();
                    
                    hashCode = hashCode * 59 + Max.GetHashCode();
                    
                    hashCode = hashCode * 59 + Mean.GetHashCode();
                    
                    hashCode = hashCode * 59 + Median.GetHashCode();
                return hashCode;
            }
        }

        #region Operators
        #pragma warning disable 1591

        public static bool operator ==(ResponseTravelTimeStatistics left, ResponseTravelTimeStatistics right)
        {
            return Equals(left, right);
        }

        public static bool operator !=(ResponseTravelTimeStatistics left, ResponseTravelTimeStatistics right)
        {
            return !Equals(left, right);
        }

        #pragma warning restore 1591
        #endregion Operators
    }
}
