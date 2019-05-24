--[[
  TravelTime Platform API
 
  No description provided (generated by Openapi Generator https://github.com/openapitools/openapi-generator)
 
  The version of the OpenAPI document: 1.0.0
  Contact: support@igeolise.com
  Generated by: https://openapi-generator.tech
]]

-- response_time_filter_postcode_districts class
local response_time_filter_postcode_districts = {}
local response_time_filter_postcode_districts_mt = {
	__name = "response_time_filter_postcode_districts";
	__index = response_time_filter_postcode_districts;
}

local function cast_response_time_filter_postcode_districts(t)
	return setmetatable(t, response_time_filter_postcode_districts_mt)
end

local function new_response_time_filter_postcode_districts(results)
	return cast_response_time_filter_postcode_districts({
		["results"] = results;
	})
end

return {
	cast = cast_response_time_filter_postcode_districts;
	new = new_response_time_filter_postcode_districts;
}
