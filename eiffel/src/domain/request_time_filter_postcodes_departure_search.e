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
class REQUEST_TIME_FILTER_POSTCODES_DEPARTURE_SEARCH 

inherit

  ANY
      redefine
          out 
      end


feature --Access

    id: detachable STRING_32 
      
    transportation: detachable REQUEST_TRANSPORTATION 
      
    travel_time: INTEGER_32 
      
    departure_time: detachable DATE_TIME 
      
    properties: detachable LIST [REQUEST_TIME_FILTER_POSTCODES_PROPERTY] 
      
    range: detachable REQUEST_RANGE_FULL 
      

feature -- Change Element  
 
    set_id (a_name: like id)
        -- Set 'id' with 'a_name'.
      do
        id := a_name
      ensure
        id_set: id = a_name		
      end

    set_transportation (a_name: like transportation)
        -- Set 'transportation' with 'a_name'.
      do
        transportation := a_name
      ensure
        transportation_set: transportation = a_name		
      end

    set_travel_time (a_name: like travel_time)
        -- Set 'travel_time' with 'a_name'.
      do
        travel_time := a_name
      ensure
        travel_time_set: travel_time = a_name		
      end

    set_departure_time (a_name: like departure_time)
        -- Set 'departure_time' with 'a_name'.
      do
        departure_time := a_name
      ensure
        departure_time_set: departure_time = a_name		
      end

    set_properties (a_name: like properties)
        -- Set 'properties' with 'a_name'.
      do
        properties := a_name
      ensure
        properties_set: properties = a_name		
      end

    set_range (a_name: like range)
        -- Set 'range' with 'a_name'.
      do
        range := a_name
      ensure
        range_set: range = a_name		
      end


 feature -- Status Report

    out: STRING
          -- <Precursor>
      do
        create Result.make_empty
        Result.append("%Nclass REQUEST_TIME_FILTER_POSTCODES_DEPARTURE_SEARCH%N")
        if attached id as l_id then
          Result.append ("%Nid:")
          Result.append (l_id.out)
          Result.append ("%N")    
        end  
        if attached transportation as l_transportation then
          Result.append ("%Ntransportation:")
          Result.append (l_transportation.out)
          Result.append ("%N")    
        end  
        if attached travel_time as l_travel_time then
          Result.append ("%Ntravel_time:")
          Result.append (l_travel_time.out)
          Result.append ("%N")    
        end  
        if attached departure_time as l_departure_time then
          Result.append ("%Ndeparture_time:")
          Result.append (l_departure_time.out)
          Result.append ("%N")    
        end  
        if attached properties as l_properties then
          across l_properties as ic loop
            Result.append ("%N properties:")
            Result.append (ic.item.out)
            Result.append ("%N")
          end
        end 
        if attached range as l_range then
          Result.append ("%Nrange:")
          Result.append (l_range.out)
          Result.append ("%N")    
        end  
      end
end


