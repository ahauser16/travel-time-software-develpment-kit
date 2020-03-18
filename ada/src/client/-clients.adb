--  TravelTime Platform API
--  No description provided (generated by Openapi Generator https://github.com/openapitools/openapi-generator)
--
--  The version of the OpenAPI document: 1.0.0
--  Contact: support@igeolise.com
--
--  NOTE: This package is auto generated by OpenAPI-Generator 4.2.3.
--  https://openapi-generator.tech
--  Do not edit the class manually.

with Swagger.Streams;
package body .Clients is

   --  
   procedure Geocoding_Reverse_Search
      (Client : in out Client_Type;
       Lat : in double;
       Lng : in double;
       Within_Periodcountry : in Swagger.Nullable_UString;
       Result : out .Models.ResponseGeocoding_Type) is
      URI   : Swagger.Clients.URI_Type;
      Reply : Swagger.Value_Type;
   begin
      Client.Set_Accept ((1 => Swagger.Clients.APPLICATION_JSON));

      URI.Add_Param ("lat", Lat);
      URI.Add_Param ("lng", Lng);
      URI.Add_Param ("within.country", Within_Periodcountry);
      URI.Set_Path ("/v4/geocoding/reverse");
      Client.Call (Swagger.Clients.GET, URI, Reply);
      .Models.Deserialize (Reply, "", Result);
   end Geocoding_Reverse_Search;

   --  
   procedure Geocoding_Search
      (Client : in out Client_Type;
       Query : in Swagger.UString;
       Focus_Periodlat : in double;
       Focus_Periodlng : in double;
       Within_Periodcountry : in Swagger.Nullable_UString;
       Result : out .Models.ResponseGeocoding_Type) is
      URI   : Swagger.Clients.URI_Type;
      Reply : Swagger.Value_Type;
   begin
      Client.Set_Accept ((1 => Swagger.Clients.APPLICATION_JSON));

      URI.Add_Param ("query", Query);
      URI.Add_Param ("focus.lat", Focus_Periodlat);
      URI.Add_Param ("focus.lng", Focus_Periodlng);
      URI.Add_Param ("within.country", Within_Periodcountry);
      URI.Set_Path ("/v4/geocoding/search");
      Client.Call (Swagger.Clients.GET, URI, Reply);
      .Models.Deserialize (Reply, "", Result);
   end Geocoding_Search;

   --  
   procedure Map_Info
      (Client : in out Client_Type;
       Result : out .Models.ResponseMapInfo_Type) is
      URI   : Swagger.Clients.URI_Type;
      Reply : Swagger.Value_Type;
   begin
      Client.Set_Accept ((1 => Swagger.Clients.APPLICATION_JSON));

      URI.Set_Path ("/v4/map-info");
      Client.Call (Swagger.Clients.GET, URI, Reply);
      .Models.Deserialize (Reply, "", Result);
   end Map_Info;

   --  
   procedure Routes
      (Client : in out Client_Type;
       Request_Routes_Type : in .Models.RequestRoutes_Type;
       Result : out .Models.ResponseRoutes_Type) is
      URI   : Swagger.Clients.URI_Type;
      Req   : Swagger.Clients.Request_Type;
      Reply : Swagger.Value_Type;
   begin
      Client.Set_Accept ((1 => Swagger.Clients.APPLICATION_JSON));
      Client.Initialize (Req, (1 => Swagger.Clients.APPLICATION_JSON));
      .Models.Serialize (Req.Stream, "", Request_Routes_Type);

      URI.Set_Path ("/v4/routes");
      Client.Call (Swagger.Clients.POST, URI, Req, Reply);
      .Models.Deserialize (Reply, "", Result);
   end Routes;

   --  
   procedure Supported_Locations
      (Client : in out Client_Type;
       Request_Supported_Locations_Type : in .Models.RequestSupportedLocations_Type;
       Result : out .Models.ResponseSupportedLocations_Type) is
      URI   : Swagger.Clients.URI_Type;
      Req   : Swagger.Clients.Request_Type;
      Reply : Swagger.Value_Type;
   begin
      Client.Set_Accept ((1 => Swagger.Clients.APPLICATION_JSON));
      Client.Initialize (Req, (1 => Swagger.Clients.APPLICATION_JSON));
      .Models.Serialize (Req.Stream, "", Request_Supported_Locations_Type);

      URI.Set_Path ("/v4/supported-locations");
      Client.Call (Swagger.Clients.POST, URI, Req, Reply);
      .Models.Deserialize (Reply, "", Result);
   end Supported_Locations;

   --  
   procedure Time_Filter
      (Client : in out Client_Type;
       Request_Time_Filter_Type : in .Models.RequestTimeFilter_Type;
       Result : out .Models.ResponseTimeFilter_Type) is
      URI   : Swagger.Clients.URI_Type;
      Req   : Swagger.Clients.Request_Type;
      Reply : Swagger.Value_Type;
   begin
      Client.Set_Accept ((1 => Swagger.Clients.APPLICATION_JSON));
      Client.Initialize (Req, (1 => Swagger.Clients.APPLICATION_JSON));
      .Models.Serialize (Req.Stream, "", Request_Time_Filter_Type);

      URI.Set_Path ("/v4/time-filter");
      Client.Call (Swagger.Clients.POST, URI, Req, Reply);
      .Models.Deserialize (Reply, "", Result);
   end Time_Filter;

   --  
   procedure Time_Filter_Fast
      (Client : in out Client_Type;
       Request_Time_Filter_Fast_Type : in .Models.RequestTimeFilterFast_Type;
       Result : out .Models.ResponseTimeFilterFast_Type) is
      URI   : Swagger.Clients.URI_Type;
      Req   : Swagger.Clients.Request_Type;
      Reply : Swagger.Value_Type;
   begin
      Client.Set_Accept ((1 => Swagger.Clients.APPLICATION_JSON));
      Client.Initialize (Req, (1 => Swagger.Clients.APPLICATION_JSON));
      .Models.Serialize (Req.Stream, "", Request_Time_Filter_Fast_Type);

      URI.Set_Path ("/v4/time-filter/fast");
      Client.Call (Swagger.Clients.POST, URI, Req, Reply);
      .Models.Deserialize (Reply, "", Result);
   end Time_Filter_Fast;

   --  
   procedure Time_Filter_Postcode_Districts
      (Client : in out Client_Type;
       Request_Time_Filter_Postcode_Districts_Type : in .Models.RequestTimeFilterPostcodeDistricts_Type;
       Result : out .Models.ResponseTimeFilterPostcodeDistricts_Type) is
      URI   : Swagger.Clients.URI_Type;
      Req   : Swagger.Clients.Request_Type;
      Reply : Swagger.Value_Type;
   begin
      Client.Set_Accept ((1 => Swagger.Clients.APPLICATION_JSON));
      Client.Initialize (Req, (1 => Swagger.Clients.APPLICATION_JSON));
      .Models.Serialize (Req.Stream, "", Request_Time_Filter_Postcode_Districts_Type);

      URI.Set_Path ("/v4/time-filter/postcode-districts");
      Client.Call (Swagger.Clients.POST, URI, Req, Reply);
      .Models.Deserialize (Reply, "", Result);
   end Time_Filter_Postcode_Districts;

   --  
   procedure Time_Filter_Postcode_Sectors
      (Client : in out Client_Type;
       Request_Time_Filter_Postcode_Sectors_Type : in .Models.RequestTimeFilterPostcodeSectors_Type;
       Result : out .Models.ResponseTimeFilterPostcodeSectors_Type) is
      URI   : Swagger.Clients.URI_Type;
      Req   : Swagger.Clients.Request_Type;
      Reply : Swagger.Value_Type;
   begin
      Client.Set_Accept ((1 => Swagger.Clients.APPLICATION_JSON));
      Client.Initialize (Req, (1 => Swagger.Clients.APPLICATION_JSON));
      .Models.Serialize (Req.Stream, "", Request_Time_Filter_Postcode_Sectors_Type);

      URI.Set_Path ("/v4/time-filter/postcode-sectors");
      Client.Call (Swagger.Clients.POST, URI, Req, Reply);
      .Models.Deserialize (Reply, "", Result);
   end Time_Filter_Postcode_Sectors;

   --  
   procedure Time_Filter_Postcodes
      (Client : in out Client_Type;
       Request_Time_Filter_Postcodes_Type : in .Models.RequestTimeFilterPostcodes_Type;
       Result : out .Models.ResponseTimeFilterPostcodes_Type) is
      URI   : Swagger.Clients.URI_Type;
      Req   : Swagger.Clients.Request_Type;
      Reply : Swagger.Value_Type;
   begin
      Client.Set_Accept ((1 => Swagger.Clients.APPLICATION_JSON));
      Client.Initialize (Req, (1 => Swagger.Clients.APPLICATION_JSON));
      .Models.Serialize (Req.Stream, "", Request_Time_Filter_Postcodes_Type);

      URI.Set_Path ("/v4/time-filter/postcodes");
      Client.Call (Swagger.Clients.POST, URI, Req, Reply);
      .Models.Deserialize (Reply, "", Result);
   end Time_Filter_Postcodes;

   --  
   procedure Time_Map
      (Client : in out Client_Type;
       Request_Time_Map_Type : in .Models.RequestTimeMap_Type;
       Result : out .Models.ResponseTimeMap_Type) is
      URI   : Swagger.Clients.URI_Type;
      Req   : Swagger.Clients.Request_Type;
      Reply : Swagger.Value_Type;
   begin
      Client.Set_Accept ((Swagger.Clients.APPLICATION_JSON,
                          Swagger.Clients.APPLICATION_VND.WKT+JSON,
                          Swagger.Clients.APPLICATION_VND.WKT_NO_HOLES+JSON,
                          Swagger.Clients.APPLICATION_VND.BOUNDING_BOXES+JSON));
      Client.Initialize (Req, (1 => Swagger.Clients.APPLICATION_JSON));
      .Models.Serialize (Req.Stream, "", Request_Time_Map_Type);

      URI.Set_Path ("/v4/time-map");
      Client.Call (Swagger.Clients.POST, URI, Req, Reply);
      .Models.Deserialize (Reply, "", Result);
   end Time_Map;
end .Clients;
