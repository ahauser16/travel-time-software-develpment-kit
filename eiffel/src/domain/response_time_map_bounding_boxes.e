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
class RESPONSE_TIME_MAP_BOUNDING_BOXES 

inherit

  ANY
      redefine
          out 
      end


feature --Access

    results: detachable LIST [RESPONSE_TIME_MAP_BOUNDING_BOXES_RESULT] 
      

feature -- Change Element  
 
    set_results (a_name: like results)
        -- Set 'results' with 'a_name'.
      do
        results := a_name
      ensure
        results_set: results = a_name		
      end


 feature -- Status Report

    out: STRING
          -- <Precursor>
      do
        create Result.make_empty
        Result.append("%Nclass RESPONSE_TIME_MAP_BOUNDING_BOXES%N")
        if attached results as l_results then
          across l_results as ic loop
            Result.append ("%N results:")
            Result.append (ic.item.out)
            Result.append ("%N")
          end
        end 
      end
end


