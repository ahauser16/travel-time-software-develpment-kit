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
    public partial class RequestTimeFilterFastArrivalManyToOneSearch : IEquatable<RequestTimeFilterFastArrivalManyToOneSearch>
    { 
        /// <summary>
        /// Gets or Sets Id
        /// </summary>
        [Required]
        [DataMember(Name="id", EmitDefaultValue=false)]
        public string Id { get; set; }

        /// <summary>
        /// Gets or Sets ArrivalLocationId
        /// </summary>
        [Required]
        [DataMember(Name="arrival_location_id", EmitDefaultValue=false)]
        public string ArrivalLocationId { get; set; }

        /// <summary>
        /// Gets or Sets DepartureLocationIds
        /// </summary>
        [Required]
        [DataMember(Name="departure_location_ids", EmitDefaultValue=false)]
        public List<string> DepartureLocationIds { get; set; }

        /// <summary>
        /// Gets or Sets Transportation
        /// </summary>
        [Required]
        [DataMember(Name="transportation", EmitDefaultValue=false)]
        public RequestTransportationFast Transportation { get; set; }

        /// <summary>
        /// Gets or Sets TravelTime
        /// </summary>
        [Required]
        [DataMember(Name="travel_time", EmitDefaultValue=false)]
        public int? TravelTime { get; set; }

        /// <summary>
        /// Gets or Sets ArrivalTimePeriod
        /// </summary>
        [Required]
        [DataMember(Name="arrival_time_period", EmitDefaultValue=false)]
        public RequestArrivalTimePeriod ArrivalTimePeriod { get; set; }

        /// <summary>
        /// Gets or Sets Properties
        /// </summary>
        [Required]
        [DataMember(Name="properties", EmitDefaultValue=false)]
        public List<RequestTimeFilterFastProperty> Properties { get; set; }

        /// <summary>
        /// Returns the string presentation of the object
        /// </summary>
        /// <returns>String presentation of the object</returns>
        public override string ToString()
        {
            var sb = new StringBuilder();
            sb.Append("class RequestTimeFilterFastArrivalManyToOneSearch {\n");
            sb.Append("  Id: ").Append(Id).Append("\n");
            sb.Append("  ArrivalLocationId: ").Append(ArrivalLocationId).Append("\n");
            sb.Append("  DepartureLocationIds: ").Append(DepartureLocationIds).Append("\n");
            sb.Append("  Transportation: ").Append(Transportation).Append("\n");
            sb.Append("  TravelTime: ").Append(TravelTime).Append("\n");
            sb.Append("  ArrivalTimePeriod: ").Append(ArrivalTimePeriod).Append("\n");
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
            return obj.GetType() == GetType() && Equals((RequestTimeFilterFastArrivalManyToOneSearch)obj);
        }

        /// <summary>
        /// Returns true if RequestTimeFilterFastArrivalManyToOneSearch instances are equal
        /// </summary>
        /// <param name="other">Instance of RequestTimeFilterFastArrivalManyToOneSearch to be compared</param>
        /// <returns>Boolean</returns>
        public bool Equals(RequestTimeFilterFastArrivalManyToOneSearch other)
        {
            if (other is null) return false;
            if (ReferenceEquals(this, other)) return true;

            return 
                (
                    Id == other.Id ||
                    Id != null &&
                    Id.Equals(other.Id)
                ) && 
                (
                    ArrivalLocationId == other.ArrivalLocationId ||
                    ArrivalLocationId != null &&
                    ArrivalLocationId.Equals(other.ArrivalLocationId)
                ) && 
                (
                    DepartureLocationIds == other.DepartureLocationIds ||
                    DepartureLocationIds != null &&
                    other.DepartureLocationIds != null &&
                    DepartureLocationIds.SequenceEqual(other.DepartureLocationIds)
                ) && 
                (
                    Transportation == other.Transportation ||
                    Transportation != null &&
                    Transportation.Equals(other.Transportation)
                ) && 
                (
                    TravelTime == other.TravelTime ||
                    TravelTime != null &&
                    TravelTime.Equals(other.TravelTime)
                ) && 
                (
                    ArrivalTimePeriod == other.ArrivalTimePeriod ||
                    ArrivalTimePeriod != null &&
                    ArrivalTimePeriod.Equals(other.ArrivalTimePeriod)
                ) && 
                (
                    Properties == other.Properties ||
                    Properties != null &&
                    other.Properties != null &&
                    Properties.SequenceEqual(other.Properties)
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
                    if (Id != null)
                    hashCode = hashCode * 59 + Id.GetHashCode();
                    if (ArrivalLocationId != null)
                    hashCode = hashCode * 59 + ArrivalLocationId.GetHashCode();
                    if (DepartureLocationIds != null)
                    hashCode = hashCode * 59 + DepartureLocationIds.GetHashCode();
                    if (Transportation != null)
                    hashCode = hashCode * 59 + Transportation.GetHashCode();
                    if (TravelTime != null)
                    hashCode = hashCode * 59 + TravelTime.GetHashCode();
                    if (ArrivalTimePeriod != null)
                    hashCode = hashCode * 59 + ArrivalTimePeriod.GetHashCode();
                    if (Properties != null)
                    hashCode = hashCode * 59 + Properties.GetHashCode();
                return hashCode;
            }
        }

        #region Operators
        #pragma warning disable 1591

        public static bool operator ==(RequestTimeFilterFastArrivalManyToOneSearch left, RequestTimeFilterFastArrivalManyToOneSearch right)
        {
            return Equals(left, right);
        }

        public static bool operator !=(RequestTimeFilterFastArrivalManyToOneSearch left, RequestTimeFilterFastArrivalManyToOneSearch right)
        {
            return !Equals(left, right);
        }

        #pragma warning restore 1591
        #endregion Operators
    }
}
