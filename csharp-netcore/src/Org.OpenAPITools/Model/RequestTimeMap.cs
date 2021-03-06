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
    /// RequestTimeMap
    /// </summary>
    [DataContract]
    public partial class RequestTimeMap :  IEquatable<RequestTimeMap>, IValidatableObject
    {
        /// <summary>
        /// Initializes a new instance of the <see cref="RequestTimeMap" /> class.
        /// </summary>
        /// <param name="departureSearches">departureSearches.</param>
        /// <param name="arrivalSearches">arrivalSearches.</param>
        /// <param name="unions">unions.</param>
        /// <param name="intersections">intersections.</param>
        public RequestTimeMap(List<RequestTimeMapDepartureSearch> departureSearches = default(List<RequestTimeMapDepartureSearch>), List<RequestTimeMapArrivalSearch> arrivalSearches = default(List<RequestTimeMapArrivalSearch>), List<RequestUnionOnIntersection> unions = default(List<RequestUnionOnIntersection>), List<RequestUnionOnIntersection> intersections = default(List<RequestUnionOnIntersection>))
        {
            this.DepartureSearches = departureSearches;
            this.ArrivalSearches = arrivalSearches;
            this.Unions = unions;
            this.Intersections = intersections;
        }
        
        /// <summary>
        /// Gets or Sets DepartureSearches
        /// </summary>
        [DataMember(Name="departure_searches", EmitDefaultValue=false)]
        public List<RequestTimeMapDepartureSearch> DepartureSearches { get; set; }

        /// <summary>
        /// Gets or Sets ArrivalSearches
        /// </summary>
        [DataMember(Name="arrival_searches", EmitDefaultValue=false)]
        public List<RequestTimeMapArrivalSearch> ArrivalSearches { get; set; }

        /// <summary>
        /// Gets or Sets Unions
        /// </summary>
        [DataMember(Name="unions", EmitDefaultValue=false)]
        public List<RequestUnionOnIntersection> Unions { get; set; }

        /// <summary>
        /// Gets or Sets Intersections
        /// </summary>
        [DataMember(Name="intersections", EmitDefaultValue=false)]
        public List<RequestUnionOnIntersection> Intersections { get; set; }

        /// <summary>
        /// Returns the string presentation of the object
        /// </summary>
        /// <returns>String presentation of the object</returns>
        public override string ToString()
        {
            var sb = new StringBuilder();
            sb.Append("class RequestTimeMap {\n");
            sb.Append("  DepartureSearches: ").Append(DepartureSearches).Append("\n");
            sb.Append("  ArrivalSearches: ").Append(ArrivalSearches).Append("\n");
            sb.Append("  Unions: ").Append(Unions).Append("\n");
            sb.Append("  Intersections: ").Append(Intersections).Append("\n");
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
            return this.Equals(input as RequestTimeMap);
        }

        /// <summary>
        /// Returns true if RequestTimeMap instances are equal
        /// </summary>
        /// <param name="input">Instance of RequestTimeMap to be compared</param>
        /// <returns>Boolean</returns>
        public bool Equals(RequestTimeMap input)
        {
            if (input == null)
                return false;

            return 
                (
                    this.DepartureSearches == input.DepartureSearches ||
                    this.DepartureSearches != null &&
                    input.DepartureSearches != null &&
                    this.DepartureSearches.SequenceEqual(input.DepartureSearches)
                ) && 
                (
                    this.ArrivalSearches == input.ArrivalSearches ||
                    this.ArrivalSearches != null &&
                    input.ArrivalSearches != null &&
                    this.ArrivalSearches.SequenceEqual(input.ArrivalSearches)
                ) && 
                (
                    this.Unions == input.Unions ||
                    this.Unions != null &&
                    input.Unions != null &&
                    this.Unions.SequenceEqual(input.Unions)
                ) && 
                (
                    this.Intersections == input.Intersections ||
                    this.Intersections != null &&
                    input.Intersections != null &&
                    this.Intersections.SequenceEqual(input.Intersections)
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
                if (this.DepartureSearches != null)
                    hashCode = hashCode * 59 + this.DepartureSearches.GetHashCode();
                if (this.ArrivalSearches != null)
                    hashCode = hashCode * 59 + this.ArrivalSearches.GetHashCode();
                if (this.Unions != null)
                    hashCode = hashCode * 59 + this.Unions.GetHashCode();
                if (this.Intersections != null)
                    hashCode = hashCode * 59 + this.Intersections.GetHashCode();
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
