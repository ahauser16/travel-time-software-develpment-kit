--[[
  TravelTime Platform API
 
  No description provided (generated by Openapi Generator https://github.com/openapitools/openapi-generator)
 
  The version of the OpenAPI document: 1.0.0
  Contact: support@igeolise.com
  Generated by: https://openapi-generator.tech
]]

-- response_map_info_features_public_transport class
local response_map_info_features_public_transport = {}
local response_map_info_features_public_transport_mt = {
	__name = "response_map_info_features_public_transport";
	__index = response_map_info_features_public_transport;
}

local function cast_response_map_info_features_public_transport(t)
	return setmetatable(t, response_map_info_features_public_transport_mt)
end

local function new_response_map_info_features_public_transport(date_start, date_end)
	return cast_response_map_info_features_public_transport({
		["date_start"] = date_start;
		["date_end"] = date_end;
	})
end

return {
	cast = cast_response_map_info_features_public_transport;
	new = new_response_map_info_features_public_transport;
}