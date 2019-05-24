--[[
  TravelTime Platform API
 
  No description provided (generated by Openapi Generator https://github.com/openapitools/openapi-generator)
 
  The version of the OpenAPI document: 1.0.0
  Contact: support@igeolise.com
  Generated by: https://openapi-generator.tech
]]

--package traveltimeplatform

local http_request = require "http.request"
local http_util = require "http.util"
local dkjson = require "dkjson"
local basexx = require "basexx"

-- model import
local traveltimeplatform_response_error = require "traveltimeplatform.model.response_error"
local traveltimeplatform_response_geocoding = require "traveltimeplatform.model.response_geocoding"
local traveltimeplatform_response_map_info = require "traveltimeplatform.model.response_map_info"
local traveltimeplatform_response_routes = require "traveltimeplatform.model.response_routes"
local traveltimeplatform_response_supported_locations = require "traveltimeplatform.model.response_supported_locations"
local traveltimeplatform_response_time_filter = require "traveltimeplatform.model.response_time_filter"
local traveltimeplatform_response_time_filter_fast = require "traveltimeplatform.model.response_time_filter_fast"
local traveltimeplatform_response_time_filter_postcode_districts = require "traveltimeplatform.model.response_time_filter_postcode_districts"
local traveltimeplatform_response_time_filter_postcode_sectors = require "traveltimeplatform.model.response_time_filter_postcode_sectors"
local traveltimeplatform_response_time_filter_postcodes = require "traveltimeplatform.model.response_time_filter_postcodes"
local traveltimeplatform_response_time_map = require "traveltimeplatform.model.response_time_map"
local traveltimeplatform_request_routes = require "traveltimeplatform.model.request_routes"
local traveltimeplatform_request_supported_locations = require "traveltimeplatform.model.request_supported_locations"
local traveltimeplatform_request_time_filter = require "traveltimeplatform.model.request_time_filter"
local traveltimeplatform_request_time_filter_fast = require "traveltimeplatform.model.request_time_filter_fast"
local traveltimeplatform_request_time_filter_postcode_districts = require "traveltimeplatform.model.request_time_filter_postcode_districts"
local traveltimeplatform_request_time_filter_postcode_sectors = require "traveltimeplatform.model.request_time_filter_postcode_sectors"
local traveltimeplatform_request_time_filter_postcodes = require "traveltimeplatform.model.request_time_filter_postcodes"
local traveltimeplatform_request_time_map = require "traveltimeplatform.model.request_time_map"

local default_api = {}
local default_api_mt = {
	__name = "default_api";
	__index = default_api;
}

local function new_default_api(authority, basePath, schemes)
	local schemes_map = {}
	for _,v in ipairs(schemes) do
		schemes_map[v] = v
	end
	local default_scheme = schemes_map.https or schemes_map.http
	local host, port = http_util.split_authority(authority, default_scheme)
	return setmetatable({
		host = host;
		port = port;
		basePath = basePath or "https://api.traveltimeapp.com";
		schemes = schemes_map;
		default_scheme = default_scheme;
		http_username = nil;
		http_password = nil;
		api_key = {};
		access_token = nil;
	}, default_api_mt)
end

function default_api:geocoding_reverse_search(focus_lat, focus_lng, within_country)
	local req = http_request.new_from_uri({
		scheme = self.default_scheme;
		host = self.host;
		port = self.port;
		path = string.format("%s/v4/geocoding/reverse?focus.lat=%s&focus.lng=%s&within.country=%s",
			self.basePath, http_util.encodeURIComponent(focus_lat), http_util.encodeURIComponent(focus_lng), http_util.encodeURIComponent(within_country));
	})

	-- set HTTP verb
	req.headers:upsert(":method", "GET")
	-- TODO: create a function to select proper content-type
	--local var_accept = { "application/json" }
	req.headers:upsert("content-type", "application/json")

	-- api key in headers 'X-Api-Key'
	if self.api_key['X-Api-Key'] then
		req.headers:upsert("ApiKey", self.api_key['X-Api-Key'])
	end
	-- api key in headers 'X-Application-Id'
	if self.api_key['X-Application-Id'] then
		req.headers:upsert("ApplicationId", self.api_key['X-Application-Id'])
	end

	-- make the HTTP call
	local headers, stream, errno = req:go()
	if not headers then
		return nil, stream, errno
	end
	local http_status = headers:get(":status")
	if http_status:sub(1,1) == "2" then
		local body, err, errno2 = stream:get_body_as_string()
		-- exception when getting the HTTP body
		if not body then
			return nil, err, errno2
		end
		stream:shutdown()
		local result, _, err3 = dkjson.decode(body)
		-- exception when decoding the HTTP body
		if result == nil then
			return nil, err3
		end
		return traveltimeplatform_response_geocoding.cast(result), headers
	else
		local body, err, errno2 = stream:get_body_as_string()
		if not body then
			return nil, err, errno2
		end
		stream:shutdown()
		-- return the error message (http body)
		return nil, http_status, body
	end
end

function default_api:geocoding_search(query, within_country, focus_lat, focus_lng)
	local req = http_request.new_from_uri({
		scheme = self.default_scheme;
		host = self.host;
		port = self.port;
		path = string.format("%s/v4/geocoding/search?query=%s&within.country=%s&focus.lat=%s&focus.lng=%s",
			self.basePath, http_util.encodeURIComponent(query), http_util.encodeURIComponent(within_country), http_util.encodeURIComponent(focus_lat), http_util.encodeURIComponent(focus_lng));
	})

	-- set HTTP verb
	req.headers:upsert(":method", "GET")
	-- TODO: create a function to select proper content-type
	--local var_accept = { "application/json" }
	req.headers:upsert("content-type", "application/json")

	-- api key in headers 'X-Api-Key'
	if self.api_key['X-Api-Key'] then
		req.headers:upsert("ApiKey", self.api_key['X-Api-Key'])
	end
	-- api key in headers 'X-Application-Id'
	if self.api_key['X-Application-Id'] then
		req.headers:upsert("ApplicationId", self.api_key['X-Application-Id'])
	end

	-- make the HTTP call
	local headers, stream, errno = req:go()
	if not headers then
		return nil, stream, errno
	end
	local http_status = headers:get(":status")
	if http_status:sub(1,1) == "2" then
		local body, err, errno2 = stream:get_body_as_string()
		-- exception when getting the HTTP body
		if not body then
			return nil, err, errno2
		end
		stream:shutdown()
		local result, _, err3 = dkjson.decode(body)
		-- exception when decoding the HTTP body
		if result == nil then
			return nil, err3
		end
		return traveltimeplatform_response_geocoding.cast(result), headers
	else
		local body, err, errno2 = stream:get_body_as_string()
		if not body then
			return nil, err, errno2
		end
		stream:shutdown()
		-- return the error message (http body)
		return nil, http_status, body
	end
end

function default_api:map_info()
	local req = http_request.new_from_uri({
		scheme = self.default_scheme;
		host = self.host;
		port = self.port;
		path = string.format("%s/v4/map-info",
			self.basePath);
	})

	-- set HTTP verb
	req.headers:upsert(":method", "GET")
	-- TODO: create a function to select proper content-type
	--local var_accept = { "application/json" }
	req.headers:upsert("content-type", "application/json")

	-- api key in headers 'X-Api-Key'
	if self.api_key['X-Api-Key'] then
		req.headers:upsert("ApiKey", self.api_key['X-Api-Key'])
	end
	-- api key in headers 'X-Application-Id'
	if self.api_key['X-Application-Id'] then
		req.headers:upsert("ApplicationId", self.api_key['X-Application-Id'])
	end

	-- make the HTTP call
	local headers, stream, errno = req:go()
	if not headers then
		return nil, stream, errno
	end
	local http_status = headers:get(":status")
	if http_status:sub(1,1) == "2" then
		local body, err, errno2 = stream:get_body_as_string()
		-- exception when getting the HTTP body
		if not body then
			return nil, err, errno2
		end
		stream:shutdown()
		local result, _, err3 = dkjson.decode(body)
		-- exception when decoding the HTTP body
		if result == nil then
			return nil, err3
		end
		return traveltimeplatform_response_map_info.cast(result), headers
	else
		local body, err, errno2 = stream:get_body_as_string()
		if not body then
			return nil, err, errno2
		end
		stream:shutdown()
		-- return the error message (http body)
		return nil, http_status, body
	end
end

function default_api:routes(request_routes)
	local req = http_request.new_from_uri({
		scheme = self.default_scheme;
		host = self.host;
		port = self.port;
		path = string.format("%s/v4/routes",
			self.basePath);
	})

	-- set HTTP verb
	req.headers:upsert(":method", "POST")
	-- TODO: create a function to select proper accept
	--local var_content_type = { "application/json" }
	req.headers:upsert("accept", "application/json")

	-- TODO: create a function to select proper content-type
	--local var_accept = { "application/json" }
	req.headers:upsert("content-type", "application/json")

	req:set_body(dkjson.encode(request_routes))

	-- api key in headers 'X-Api-Key'
	if self.api_key['X-Api-Key'] then
		req.headers:upsert("ApiKey", self.api_key['X-Api-Key'])
	end
	-- api key in headers 'X-Application-Id'
	if self.api_key['X-Application-Id'] then
		req.headers:upsert("ApplicationId", self.api_key['X-Application-Id'])
	end

	-- make the HTTP call
	local headers, stream, errno = req:go()
	if not headers then
		return nil, stream, errno
	end
	local http_status = headers:get(":status")
	if http_status:sub(1,1) == "2" then
		local body, err, errno2 = stream:get_body_as_string()
		-- exception when getting the HTTP body
		if not body then
			return nil, err, errno2
		end
		stream:shutdown()
		local result, _, err3 = dkjson.decode(body)
		-- exception when decoding the HTTP body
		if result == nil then
			return nil, err3
		end
		return traveltimeplatform_response_routes.cast(result), headers
	else
		local body, err, errno2 = stream:get_body_as_string()
		if not body then
			return nil, err, errno2
		end
		stream:shutdown()
		-- return the error message (http body)
		return nil, http_status, body
	end
end

function default_api:supported_locations(request_supported_locations)
	local req = http_request.new_from_uri({
		scheme = self.default_scheme;
		host = self.host;
		port = self.port;
		path = string.format("%s/v4/supported-locations",
			self.basePath);
	})

	-- set HTTP verb
	req.headers:upsert(":method", "POST")
	-- TODO: create a function to select proper accept
	--local var_content_type = { "application/json" }
	req.headers:upsert("accept", "application/json")

	-- TODO: create a function to select proper content-type
	--local var_accept = { "application/json" }
	req.headers:upsert("content-type", "application/json")

	req:set_body(dkjson.encode(request_supported_locations))

	-- api key in headers 'X-Api-Key'
	if self.api_key['X-Api-Key'] then
		req.headers:upsert("ApiKey", self.api_key['X-Api-Key'])
	end
	-- api key in headers 'X-Application-Id'
	if self.api_key['X-Application-Id'] then
		req.headers:upsert("ApplicationId", self.api_key['X-Application-Id'])
	end

	-- make the HTTP call
	local headers, stream, errno = req:go()
	if not headers then
		return nil, stream, errno
	end
	local http_status = headers:get(":status")
	if http_status:sub(1,1) == "2" then
		local body, err, errno2 = stream:get_body_as_string()
		-- exception when getting the HTTP body
		if not body then
			return nil, err, errno2
		end
		stream:shutdown()
		local result, _, err3 = dkjson.decode(body)
		-- exception when decoding the HTTP body
		if result == nil then
			return nil, err3
		end
		return traveltimeplatform_response_supported_locations.cast(result), headers
	else
		local body, err, errno2 = stream:get_body_as_string()
		if not body then
			return nil, err, errno2
		end
		stream:shutdown()
		-- return the error message (http body)
		return nil, http_status, body
	end
end

function default_api:time_filter(request_time_filter)
	local req = http_request.new_from_uri({
		scheme = self.default_scheme;
		host = self.host;
		port = self.port;
		path = string.format("%s/v4/time-filter",
			self.basePath);
	})

	-- set HTTP verb
	req.headers:upsert(":method", "POST")
	-- TODO: create a function to select proper accept
	--local var_content_type = { "application/json" }
	req.headers:upsert("accept", "application/json")

	-- TODO: create a function to select proper content-type
	--local var_accept = { "application/json" }
	req.headers:upsert("content-type", "application/json")

	req:set_body(dkjson.encode(request_time_filter))

	-- api key in headers 'X-Api-Key'
	if self.api_key['X-Api-Key'] then
		req.headers:upsert("ApiKey", self.api_key['X-Api-Key'])
	end
	-- api key in headers 'X-Application-Id'
	if self.api_key['X-Application-Id'] then
		req.headers:upsert("ApplicationId", self.api_key['X-Application-Id'])
	end

	-- make the HTTP call
	local headers, stream, errno = req:go()
	if not headers then
		return nil, stream, errno
	end
	local http_status = headers:get(":status")
	if http_status:sub(1,1) == "2" then
		local body, err, errno2 = stream:get_body_as_string()
		-- exception when getting the HTTP body
		if not body then
			return nil, err, errno2
		end
		stream:shutdown()
		local result, _, err3 = dkjson.decode(body)
		-- exception when decoding the HTTP body
		if result == nil then
			return nil, err3
		end
		return traveltimeplatform_response_time_filter.cast(result), headers
	else
		local body, err, errno2 = stream:get_body_as_string()
		if not body then
			return nil, err, errno2
		end
		stream:shutdown()
		-- return the error message (http body)
		return nil, http_status, body
	end
end

function default_api:time_filter_fast(request_time_filter_fast)
	local req = http_request.new_from_uri({
		scheme = self.default_scheme;
		host = self.host;
		port = self.port;
		path = string.format("%s/v4/time-filter/fast",
			self.basePath);
	})

	-- set HTTP verb
	req.headers:upsert(":method", "POST")
	-- TODO: create a function to select proper accept
	--local var_content_type = { "application/json" }
	req.headers:upsert("accept", "application/json")

	-- TODO: create a function to select proper content-type
	--local var_accept = { "application/json" }
	req.headers:upsert("content-type", "application/json")

	req:set_body(dkjson.encode(request_time_filter_fast))

	-- api key in headers 'X-Api-Key'
	if self.api_key['X-Api-Key'] then
		req.headers:upsert("ApiKey", self.api_key['X-Api-Key'])
	end
	-- api key in headers 'X-Application-Id'
	if self.api_key['X-Application-Id'] then
		req.headers:upsert("ApplicationId", self.api_key['X-Application-Id'])
	end

	-- make the HTTP call
	local headers, stream, errno = req:go()
	if not headers then
		return nil, stream, errno
	end
	local http_status = headers:get(":status")
	if http_status:sub(1,1) == "2" then
		local body, err, errno2 = stream:get_body_as_string()
		-- exception when getting the HTTP body
		if not body then
			return nil, err, errno2
		end
		stream:shutdown()
		local result, _, err3 = dkjson.decode(body)
		-- exception when decoding the HTTP body
		if result == nil then
			return nil, err3
		end
		return traveltimeplatform_response_time_filter_fast.cast(result), headers
	else
		local body, err, errno2 = stream:get_body_as_string()
		if not body then
			return nil, err, errno2
		end
		stream:shutdown()
		-- return the error message (http body)
		return nil, http_status, body
	end
end

function default_api:time_filter_postcode_districts(request_time_filter_postcode_districts)
	local req = http_request.new_from_uri({
		scheme = self.default_scheme;
		host = self.host;
		port = self.port;
		path = string.format("%s/v4/time-filter/postcode-districts",
			self.basePath);
	})

	-- set HTTP verb
	req.headers:upsert(":method", "POST")
	-- TODO: create a function to select proper accept
	--local var_content_type = { "application/json" }
	req.headers:upsert("accept", "application/json")

	-- TODO: create a function to select proper content-type
	--local var_accept = { "application/json" }
	req.headers:upsert("content-type", "application/json")

	req:set_body(dkjson.encode(request_time_filter_postcode_districts))

	-- api key in headers 'X-Api-Key'
	if self.api_key['X-Api-Key'] then
		req.headers:upsert("ApiKey", self.api_key['X-Api-Key'])
	end
	-- api key in headers 'X-Application-Id'
	if self.api_key['X-Application-Id'] then
		req.headers:upsert("ApplicationId", self.api_key['X-Application-Id'])
	end

	-- make the HTTP call
	local headers, stream, errno = req:go()
	if not headers then
		return nil, stream, errno
	end
	local http_status = headers:get(":status")
	if http_status:sub(1,1) == "2" then
		local body, err, errno2 = stream:get_body_as_string()
		-- exception when getting the HTTP body
		if not body then
			return nil, err, errno2
		end
		stream:shutdown()
		local result, _, err3 = dkjson.decode(body)
		-- exception when decoding the HTTP body
		if result == nil then
			return nil, err3
		end
		return traveltimeplatform_response_time_filter_postcode_districts.cast(result), headers
	else
		local body, err, errno2 = stream:get_body_as_string()
		if not body then
			return nil, err, errno2
		end
		stream:shutdown()
		-- return the error message (http body)
		return nil, http_status, body
	end
end

function default_api:time_filter_postcode_sectors(request_time_filter_postcode_sectors)
	local req = http_request.new_from_uri({
		scheme = self.default_scheme;
		host = self.host;
		port = self.port;
		path = string.format("%s/v4/time-filter/postcode-sectors",
			self.basePath);
	})

	-- set HTTP verb
	req.headers:upsert(":method", "POST")
	-- TODO: create a function to select proper accept
	--local var_content_type = { "application/json" }
	req.headers:upsert("accept", "application/json")

	-- TODO: create a function to select proper content-type
	--local var_accept = { "application/json" }
	req.headers:upsert("content-type", "application/json")

	req:set_body(dkjson.encode(request_time_filter_postcode_sectors))

	-- api key in headers 'X-Api-Key'
	if self.api_key['X-Api-Key'] then
		req.headers:upsert("ApiKey", self.api_key['X-Api-Key'])
	end
	-- api key in headers 'X-Application-Id'
	if self.api_key['X-Application-Id'] then
		req.headers:upsert("ApplicationId", self.api_key['X-Application-Id'])
	end

	-- make the HTTP call
	local headers, stream, errno = req:go()
	if not headers then
		return nil, stream, errno
	end
	local http_status = headers:get(":status")
	if http_status:sub(1,1) == "2" then
		local body, err, errno2 = stream:get_body_as_string()
		-- exception when getting the HTTP body
		if not body then
			return nil, err, errno2
		end
		stream:shutdown()
		local result, _, err3 = dkjson.decode(body)
		-- exception when decoding the HTTP body
		if result == nil then
			return nil, err3
		end
		return traveltimeplatform_response_time_filter_postcode_sectors.cast(result), headers
	else
		local body, err, errno2 = stream:get_body_as_string()
		if not body then
			return nil, err, errno2
		end
		stream:shutdown()
		-- return the error message (http body)
		return nil, http_status, body
	end
end

function default_api:time_filter_postcodes(request_time_filter_postcodes)
	local req = http_request.new_from_uri({
		scheme = self.default_scheme;
		host = self.host;
		port = self.port;
		path = string.format("%s/v4/time-filter/postcodes",
			self.basePath);
	})

	-- set HTTP verb
	req.headers:upsert(":method", "POST")
	-- TODO: create a function to select proper accept
	--local var_content_type = { "application/json" }
	req.headers:upsert("accept", "application/json")

	-- TODO: create a function to select proper content-type
	--local var_accept = { "application/json" }
	req.headers:upsert("content-type", "application/json")

	req:set_body(dkjson.encode(request_time_filter_postcodes))

	-- api key in headers 'X-Api-Key'
	if self.api_key['X-Api-Key'] then
		req.headers:upsert("ApiKey", self.api_key['X-Api-Key'])
	end
	-- api key in headers 'X-Application-Id'
	if self.api_key['X-Application-Id'] then
		req.headers:upsert("ApplicationId", self.api_key['X-Application-Id'])
	end

	-- make the HTTP call
	local headers, stream, errno = req:go()
	if not headers then
		return nil, stream, errno
	end
	local http_status = headers:get(":status")
	if http_status:sub(1,1) == "2" then
		local body, err, errno2 = stream:get_body_as_string()
		-- exception when getting the HTTP body
		if not body then
			return nil, err, errno2
		end
		stream:shutdown()
		local result, _, err3 = dkjson.decode(body)
		-- exception when decoding the HTTP body
		if result == nil then
			return nil, err3
		end
		return traveltimeplatform_response_time_filter_postcodes.cast(result), headers
	else
		local body, err, errno2 = stream:get_body_as_string()
		if not body then
			return nil, err, errno2
		end
		stream:shutdown()
		-- return the error message (http body)
		return nil, http_status, body
	end
end

function default_api:time_map(request_time_map)
	local req = http_request.new_from_uri({
		scheme = self.default_scheme;
		host = self.host;
		port = self.port;
		path = string.format("%s/v4/time-map",
			self.basePath);
	})

	-- set HTTP verb
	req.headers:upsert(":method", "POST")
	-- TODO: create a function to select proper accept
	--local var_content_type = { "application/json" }
	req.headers:upsert("accept", "application/json")

	-- TODO: create a function to select proper content-type
	--local var_accept = { "application/json", "application/vnd.wkt+json", "application/vnd.wkt-no-holes+json", "application/vnd.bounding-boxes+json" }
	req.headers:upsert("content-type", "application/json")

	req:set_body(dkjson.encode(request_time_map))

	-- api key in headers 'X-Api-Key'
	if self.api_key['X-Api-Key'] then
		req.headers:upsert("ApiKey", self.api_key['X-Api-Key'])
	end
	-- api key in headers 'X-Application-Id'
	if self.api_key['X-Application-Id'] then
		req.headers:upsert("ApplicationId", self.api_key['X-Application-Id'])
	end

	-- make the HTTP call
	local headers, stream, errno = req:go()
	if not headers then
		return nil, stream, errno
	end
	local http_status = headers:get(":status")
	if http_status:sub(1,1) == "2" then
		local body, err, errno2 = stream:get_body_as_string()
		-- exception when getting the HTTP body
		if not body then
			return nil, err, errno2
		end
		stream:shutdown()
		local result, _, err3 = dkjson.decode(body)
		-- exception when decoding the HTTP body
		if result == nil then
			return nil, err3
		end
		return traveltimeplatform_response_time_map.cast(result), headers
	else
		local body, err, errno2 = stream:get_body_as_string()
		if not body then
			return nil, err, errno2
		end
		stream:shutdown()
		-- return the error message (http body)
		return nil, http_status, body
	end
end

return {
	new = new_default_api;
}
