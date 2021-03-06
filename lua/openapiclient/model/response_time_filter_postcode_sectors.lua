--[[
  TravelTime Platform API
 
  No description provided (generated by Openapi Generator https://github.com/openapitools/openapi-generator)
 
  The version of the OpenAPI document: 1.0.0
  Contact: support@igeolise.com
  Generated by: https://openapi-generator.tech
]]

-- response_time_filter_postcode_sectors class
local response_time_filter_postcode_sectors = {}
local response_time_filter_postcode_sectors_mt = {
	__name = "response_time_filter_postcode_sectors";
	__index = response_time_filter_postcode_sectors;
}

local function cast_response_time_filter_postcode_sectors(t)
	return setmetatable(t, response_time_filter_postcode_sectors_mt)
end

local function new_response_time_filter_postcode_sectors(results)
	return cast_response_time_filter_postcode_sectors({
		["results"] = results;
	})
end

return {
	cast = cast_response_time_filter_postcode_sectors;
	new = new_response_time_filter_postcode_sectors;
}
