--[[
  TravelTime Platform API
 
  No description provided (generated by Openapi Generator https://github.com/openapitools/openapi-generator)
 
  The version of the OpenAPI document: 1.0.0
  Contact: support@igeolise.com
  Generated by: https://openapi-generator.tech
]]

-- response_routes_properties class
local response_routes_properties = {}
local response_routes_properties_mt = {
	__name = "response_routes_properties";
	__index = response_routes_properties;
}

local function cast_response_routes_properties(t)
	return setmetatable(t, response_routes_properties_mt)
end

local function new_response_routes_properties(travel_time, distance, fares, route)
	return cast_response_routes_properties({
		["travel_time"] = travel_time;
		["distance"] = distance;
		["fares"] = fares;
		["route"] = route;
	})
end

return {
	cast = cast_response_routes_properties;
	new = new_response_routes_properties;
}
