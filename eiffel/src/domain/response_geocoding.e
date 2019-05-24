note
 description:"[
		TravelTime Platform API
 		No description provided (generated by Openapi Generator https://github.com/openapitools/openapi-generator)
  		The version of the OpenAPI document: 1.0.0
 	    Contact: support@igeolise.com

  	NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).

 		 Do not edit the class manually.
 	]"
	date: "$Date$"
	revision: "$Revision$"
	EIS:"Eiffel openapi generator", "src=https://openapi-generator.tech", "protocol=uri"
class RESPONSE_GEOCODING 

inherit

  ANY
      redefine
          out 
      end


feature --Access

    type: detachable STRING_32 
      
    features: detachable LIST [RESPONSE_GEOCODING_GEO_JSON_FEATURE] 
      

feature -- Change Element  
 
    set_type (a_name: like type)
        -- Set 'type' with 'a_name'.
      do
        type := a_name
      ensure
        type_set: type = a_name		
      end

    set_features (a_name: like features)
        -- Set 'features' with 'a_name'.
      do
        features := a_name
      ensure
        features_set: features = a_name		
      end


 feature -- Status Report

    out: STRING
          -- <Precursor>
      do
        create Result.make_empty
        Result.append("%Nclass RESPONSE_GEOCODING%N")
        if attached type as l_type then
          Result.append ("%Ntype:")
          Result.append (l_type.out)
          Result.append ("%N")    
        end  
        if attached features as l_features then
          across l_features as ic loop
            Result.append ("%N features:")
            Result.append (ic.item.out)
            Result.append ("%N")
          end
        end 
      end
end


