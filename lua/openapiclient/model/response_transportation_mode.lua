--[[
  TravelTime Platform API
 
  No description provided (generated by Openapi Generator https://github.com/openapitools/openapi-generator)
 
  The version of the OpenAPI document: 1.0.0
  Contact: support@igeolise.com
  Generated by: https://openapi-generator.tech
]]

-- response_transportation_mode class
local response_transportation_mode = {}
local response_transportation_mode_mt = {
	__name = "response_transportation_mode";
	__index = response_transportation_mode;
}

local function cast_response_transportation_mode(t)
	return setmetatable(t, response_transportation_mode_mt)
end

local function new_response_transportation_mode()
	return cast_response_transportation_mode({
	})
end

return {
	cast = cast_response_transportation_mode;
	new = new_response_transportation_mode;
}