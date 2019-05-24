--[[
  TravelTime Platform API
 
  No description provided (generated by Openapi Generator https://github.com/openapitools/openapi-generator)
 
  The version of the OpenAPI document: 1.0.0
  Contact: support@igeolise.com
  Generated by: https://openapi-generator.tech
]]

-- response_time_map_bounding_boxes_result class
local response_time_map_bounding_boxes_result = {}
local response_time_map_bounding_boxes_result_mt = {
	__name = "response_time_map_bounding_boxes_result";
	__index = response_time_map_bounding_boxes_result;
}

local function cast_response_time_map_bounding_boxes_result(t)
	return setmetatable(t, response_time_map_bounding_boxes_result_mt)
end

local function new_response_time_map_bounding_boxes_result(search_id, bounding_boxes, properties)
	return cast_response_time_map_bounding_boxes_result({
		["search_id"] = search_id;
		["bounding_boxes"] = bounding_boxes;
		["properties"] = properties;
	})
end

return {
	cast = cast_response_time_map_bounding_boxes_result;
	new = new_response_time_map_bounding_boxes_result;
}
