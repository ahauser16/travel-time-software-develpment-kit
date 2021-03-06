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
    /// ResponseTimeFilterPostcodesResult
    /// </summary>
    [DataContract]
    public partial class ResponseTimeFilterPostcodesResult :  IEquatable<ResponseTimeFilterPostcodesResult>, IValidatableObject
    {
        /// <summary>
        /// Initializes a new instance of the <see cref="ResponseTimeFilterPostcodesResult" /> class.
        /// </summary>
        [JsonConstructorAttribute]
        protected ResponseTimeFilterPostcodesResult() { }
        /// <summary>
        /// Initializes a new instance of the <see cref="ResponseTimeFilterPostcodesResult" /> class.
        /// </summary>
        /// <param name="searchId">searchId (required).</param>
        /// <param name="postcodes">postcodes (required).</param>
        public ResponseTimeFilterPostcodesResult(string searchId = default(string), List<ResponseTimeFilterPostcode> postcodes = default(List<ResponseTimeFilterPostcode>))
        {
            // to ensure "searchId" is required (not null)
            if (searchId == null)
            {
                throw new InvalidDataException("searchId is a required property for ResponseTimeFilterPostcodesResult and cannot be null");
            }
            else
            {
                this.SearchId = searchId;
            }
            
            // to ensure "postcodes" is required (not null)
            if (postcodes == null)
            {
                throw new InvalidDataException("postcodes is a required property for ResponseTimeFilterPostcodesResult and cannot be null");
            }
            else
            {
                this.Postcodes = postcodes;
            }
            
        }
        
        /// <summary>
        /// Gets or Sets SearchId
        /// </summary>
        [DataMember(Name="search_id", EmitDefaultValue=false)]
        public string SearchId { get; set; }

        /// <summary>
        /// Gets or Sets Postcodes
        /// </summary>
        [DataMember(Name="postcodes", EmitDefaultValue=false)]
        public List<ResponseTimeFilterPostcode> Postcodes { get; set; }

        /// <summary>
        /// Returns the string presentation of the object
        /// </summary>
        /// <returns>String presentation of the object</returns>
        public override string ToString()
        {
            var sb = new StringBuilder();
            sb.Append("class ResponseTimeFilterPostcodesResult {\n");
            sb.Append("  SearchId: ").Append(SearchId).Append("\n");
            sb.Append("  Postcodes: ").Append(Postcodes).Append("\n");
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
            return this.Equals(input as ResponseTimeFilterPostcodesResult);
        }

        /// <summary>
        /// Returns true if ResponseTimeFilterPostcodesResult instances are equal
        /// </summary>
        /// <param name="input">Instance of ResponseTimeFilterPostcodesResult to be compared</param>
        /// <returns>Boolean</returns>
        public bool Equals(ResponseTimeFilterPostcodesResult input)
        {
            if (input == null)
                return false;

            return 
                (
                    this.SearchId == input.SearchId ||
                    (this.SearchId != null &&
                    this.SearchId.Equals(input.SearchId))
                ) && 
                (
                    this.Postcodes == input.Postcodes ||
                    this.Postcodes != null &&
                    input.Postcodes != null &&
                    this.Postcodes.SequenceEqual(input.Postcodes)
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
                if (this.SearchId != null)
                    hashCode = hashCode * 59 + this.SearchId.GetHashCode();
                if (this.Postcodes != null)
                    hashCode = hashCode * 59 + this.Postcodes.GetHashCode();
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
