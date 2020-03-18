//
// DefaultAPI.swift
//
// Generated by openapi-generator
// https://openapi-generator.tech
//

import Foundation



open class DefaultAPI {
    /**

     - parameter lat: (query)  
     - parameter lng: (query)  
     - parameter withinCountry: (query)  (optional)
     - parameter completion: completion handler to receive the data and the error objects
     */
    open class func geocodingReverseSearch(lat: Double, lng: Double, withinCountry: String? = nil, completion: @escaping ((_ data: ResponseGeocoding?,_ error: Error?) -> Void)) {
        geocodingReverseSearchWithRequestBuilder(lat: lat, lng: lng, withinCountry: withinCountry).execute { (response, error) -> Void in
            completion(response?.body, error)
        }
    }

    /**
     - GET /v4/geocoding/reverse
     - API Key:
       - type: apiKey X-Api-Key 
       - name: ApiKey
     - API Key:
       - type: apiKey X-Application-Id 
       - name: ApplicationId
     - externalDocs: class ExternalDocumentation {
    description: null
    url: http://docs.traveltimeplatform.com/reference/geocoding-reverse
}
     - parameter lat: (query)  
     - parameter lng: (query)  
     - parameter withinCountry: (query)  (optional)
     - returns: RequestBuilder<ResponseGeocoding> 
     */
    open class func geocodingReverseSearchWithRequestBuilder(lat: Double, lng: Double, withinCountry: String? = nil) -> RequestBuilder<ResponseGeocoding> {
        let path = "/v4/geocoding/reverse"
        let URLString = OpenAPIClientAPI.basePath + path
        let parameters: [String:Any]? = nil
        
        var url = URLComponents(string: URLString)
        url?.queryItems = APIHelper.mapValuesToQueryItems([
            "lat": lat.encodeToJSON(), 
            "lng": lng.encodeToJSON(), 
            "within.country": withinCountry?.encodeToJSON()
        ])

        let requestBuilder: RequestBuilder<ResponseGeocoding>.Type = OpenAPIClientAPI.requestBuilderFactory.getBuilder()

        return requestBuilder.init(method: "GET", URLString: (url?.string ?? URLString), parameters: parameters, isBody: false)
    }

    /**

     - parameter query: (query)  
     - parameter focusLat: (query)  (optional)
     - parameter focusLng: (query)  (optional)
     - parameter withinCountry: (query)  (optional)
     - parameter completion: completion handler to receive the data and the error objects
     */
    open class func geocodingSearch(query: String, focusLat: Double? = nil, focusLng: Double? = nil, withinCountry: String? = nil, completion: @escaping ((_ data: ResponseGeocoding?,_ error: Error?) -> Void)) {
        geocodingSearchWithRequestBuilder(query: query, focusLat: focusLat, focusLng: focusLng, withinCountry: withinCountry).execute { (response, error) -> Void in
            completion(response?.body, error)
        }
    }

    /**
     - GET /v4/geocoding/search
     - API Key:
       - type: apiKey X-Api-Key 
       - name: ApiKey
     - API Key:
       - type: apiKey X-Application-Id 
       - name: ApplicationId
     - externalDocs: class ExternalDocumentation {
    description: null
    url: http://docs.traveltimeplatform.com/reference/geocoding-search
}
     - parameter query: (query)  
     - parameter focusLat: (query)  (optional)
     - parameter focusLng: (query)  (optional)
     - parameter withinCountry: (query)  (optional)
     - returns: RequestBuilder<ResponseGeocoding> 
     */
    open class func geocodingSearchWithRequestBuilder(query: String, focusLat: Double? = nil, focusLng: Double? = nil, withinCountry: String? = nil) -> RequestBuilder<ResponseGeocoding> {
        let path = "/v4/geocoding/search"
        let URLString = OpenAPIClientAPI.basePath + path
        let parameters: [String:Any]? = nil
        
        var url = URLComponents(string: URLString)
        url?.queryItems = APIHelper.mapValuesToQueryItems([
            "query": query.encodeToJSON(), 
            "focus.lat": focusLat?.encodeToJSON(), 
            "focus.lng": focusLng?.encodeToJSON(), 
            "within.country": withinCountry?.encodeToJSON()
        ])

        let requestBuilder: RequestBuilder<ResponseGeocoding>.Type = OpenAPIClientAPI.requestBuilderFactory.getBuilder()

        return requestBuilder.init(method: "GET", URLString: (url?.string ?? URLString), parameters: parameters, isBody: false)
    }

    /**

     - parameter completion: completion handler to receive the data and the error objects
     */
    open class func mapInfo(completion: @escaping ((_ data: ResponseMapInfo?,_ error: Error?) -> Void)) {
        mapInfoWithRequestBuilder().execute { (response, error) -> Void in
            completion(response?.body, error)
        }
    }

    /**
     - GET /v4/map-info
     - API Key:
       - type: apiKey X-Api-Key 
       - name: ApiKey
     - API Key:
       - type: apiKey X-Application-Id 
       - name: ApplicationId
     - externalDocs: class ExternalDocumentation {
    description: null
    url: http://docs.traveltimeplatform.com/reference/map-info
}
     - returns: RequestBuilder<ResponseMapInfo> 
     */
    open class func mapInfoWithRequestBuilder() -> RequestBuilder<ResponseMapInfo> {
        let path = "/v4/map-info"
        let URLString = OpenAPIClientAPI.basePath + path
        let parameters: [String:Any]? = nil
        
        let url = URLComponents(string: URLString)

        let requestBuilder: RequestBuilder<ResponseMapInfo>.Type = OpenAPIClientAPI.requestBuilderFactory.getBuilder()

        return requestBuilder.init(method: "GET", URLString: (url?.string ?? URLString), parameters: parameters, isBody: false)
    }

    /**

     - parameter requestRoutes: (body)  
     - parameter completion: completion handler to receive the data and the error objects
     */
    open class func routes(requestRoutes: RequestRoutes, completion: @escaping ((_ data: ResponseRoutes?,_ error: Error?) -> Void)) {
        routesWithRequestBuilder(requestRoutes: requestRoutes).execute { (response, error) -> Void in
            completion(response?.body, error)
        }
    }

    /**
     - POST /v4/routes
     - API Key:
       - type: apiKey X-Api-Key 
       - name: ApiKey
     - API Key:
       - type: apiKey X-Application-Id 
       - name: ApplicationId
     - externalDocs: class ExternalDocumentation {
    description: null
    url: http://docs.traveltimeplatform.com/reference/routes
}
     - parameter requestRoutes: (body)  
     - returns: RequestBuilder<ResponseRoutes> 
     */
    open class func routesWithRequestBuilder(requestRoutes: RequestRoutes) -> RequestBuilder<ResponseRoutes> {
        let path = "/v4/routes"
        let URLString = OpenAPIClientAPI.basePath + path
        let parameters = JSONEncodingHelper.encodingParameters(forEncodableObject: requestRoutes)

        let url = URLComponents(string: URLString)

        let requestBuilder: RequestBuilder<ResponseRoutes>.Type = OpenAPIClientAPI.requestBuilderFactory.getBuilder()

        return requestBuilder.init(method: "POST", URLString: (url?.string ?? URLString), parameters: parameters, isBody: true)
    }

    /**

     - parameter requestSupportedLocations: (body)  
     - parameter completion: completion handler to receive the data and the error objects
     */
    open class func supportedLocations(requestSupportedLocations: RequestSupportedLocations, completion: @escaping ((_ data: ResponseSupportedLocations?,_ error: Error?) -> Void)) {
        supportedLocationsWithRequestBuilder(requestSupportedLocations: requestSupportedLocations).execute { (response, error) -> Void in
            completion(response?.body, error)
        }
    }

    /**
     - POST /v4/supported-locations
     - API Key:
       - type: apiKey X-Api-Key 
       - name: ApiKey
     - API Key:
       - type: apiKey X-Application-Id 
       - name: ApplicationId
     - externalDocs: class ExternalDocumentation {
    description: null
    url: http://docs.traveltimeplatform.com/reference/supported-locations
}
     - parameter requestSupportedLocations: (body)  
     - returns: RequestBuilder<ResponseSupportedLocations> 
     */
    open class func supportedLocationsWithRequestBuilder(requestSupportedLocations: RequestSupportedLocations) -> RequestBuilder<ResponseSupportedLocations> {
        let path = "/v4/supported-locations"
        let URLString = OpenAPIClientAPI.basePath + path
        let parameters = JSONEncodingHelper.encodingParameters(forEncodableObject: requestSupportedLocations)

        let url = URLComponents(string: URLString)

        let requestBuilder: RequestBuilder<ResponseSupportedLocations>.Type = OpenAPIClientAPI.requestBuilderFactory.getBuilder()

        return requestBuilder.init(method: "POST", URLString: (url?.string ?? URLString), parameters: parameters, isBody: true)
    }

    /**

     - parameter requestTimeFilter: (body)  
     - parameter completion: completion handler to receive the data and the error objects
     */
    open class func timeFilter(requestTimeFilter: RequestTimeFilter, completion: @escaping ((_ data: ResponseTimeFilter?,_ error: Error?) -> Void)) {
        timeFilterWithRequestBuilder(requestTimeFilter: requestTimeFilter).execute { (response, error) -> Void in
            completion(response?.body, error)
        }
    }

    /**
     - POST /v4/time-filter
     - API Key:
       - type: apiKey X-Api-Key 
       - name: ApiKey
     - API Key:
       - type: apiKey X-Application-Id 
       - name: ApplicationId
     - externalDocs: class ExternalDocumentation {
    description: null
    url: http://docs.traveltimeplatform.com/reference/time-filter
}
     - parameter requestTimeFilter: (body)  
     - returns: RequestBuilder<ResponseTimeFilter> 
     */
    open class func timeFilterWithRequestBuilder(requestTimeFilter: RequestTimeFilter) -> RequestBuilder<ResponseTimeFilter> {
        let path = "/v4/time-filter"
        let URLString = OpenAPIClientAPI.basePath + path
        let parameters = JSONEncodingHelper.encodingParameters(forEncodableObject: requestTimeFilter)

        let url = URLComponents(string: URLString)

        let requestBuilder: RequestBuilder<ResponseTimeFilter>.Type = OpenAPIClientAPI.requestBuilderFactory.getBuilder()

        return requestBuilder.init(method: "POST", URLString: (url?.string ?? URLString), parameters: parameters, isBody: true)
    }

    /**

     - parameter requestTimeFilterFast: (body)  
     - parameter completion: completion handler to receive the data and the error objects
     */
    open class func timeFilterFast(requestTimeFilterFast: RequestTimeFilterFast, completion: @escaping ((_ data: ResponseTimeFilterFast?,_ error: Error?) -> Void)) {
        timeFilterFastWithRequestBuilder(requestTimeFilterFast: requestTimeFilterFast).execute { (response, error) -> Void in
            completion(response?.body, error)
        }
    }

    /**
     - POST /v4/time-filter/fast
     - API Key:
       - type: apiKey X-Api-Key 
       - name: ApiKey
     - API Key:
       - type: apiKey X-Application-Id 
       - name: ApplicationId
     - externalDocs: class ExternalDocumentation {
    description: null
    url: http://docs.traveltimeplatform.com/reference/time-filter-fast
}
     - parameter requestTimeFilterFast: (body)  
     - returns: RequestBuilder<ResponseTimeFilterFast> 
     */
    open class func timeFilterFastWithRequestBuilder(requestTimeFilterFast: RequestTimeFilterFast) -> RequestBuilder<ResponseTimeFilterFast> {
        let path = "/v4/time-filter/fast"
        let URLString = OpenAPIClientAPI.basePath + path
        let parameters = JSONEncodingHelper.encodingParameters(forEncodableObject: requestTimeFilterFast)

        let url = URLComponents(string: URLString)

        let requestBuilder: RequestBuilder<ResponseTimeFilterFast>.Type = OpenAPIClientAPI.requestBuilderFactory.getBuilder()

        return requestBuilder.init(method: "POST", URLString: (url?.string ?? URLString), parameters: parameters, isBody: true)
    }

    /**

     - parameter requestTimeFilterPostcodeDistricts: (body)  
     - parameter completion: completion handler to receive the data and the error objects
     */
    open class func timeFilterPostcodeDistricts(requestTimeFilterPostcodeDistricts: RequestTimeFilterPostcodeDistricts, completion: @escaping ((_ data: ResponseTimeFilterPostcodeDistricts?,_ error: Error?) -> Void)) {
        timeFilterPostcodeDistrictsWithRequestBuilder(requestTimeFilterPostcodeDistricts: requestTimeFilterPostcodeDistricts).execute { (response, error) -> Void in
            completion(response?.body, error)
        }
    }

    /**
     - POST /v4/time-filter/postcode-districts
     - API Key:
       - type: apiKey X-Api-Key 
       - name: ApiKey
     - API Key:
       - type: apiKey X-Application-Id 
       - name: ApplicationId
     - externalDocs: class ExternalDocumentation {
    description: null
    url: http://docs.traveltimeplatform.com/reference/postcode-search
}
     - parameter requestTimeFilterPostcodeDistricts: (body)  
     - returns: RequestBuilder<ResponseTimeFilterPostcodeDistricts> 
     */
    open class func timeFilterPostcodeDistrictsWithRequestBuilder(requestTimeFilterPostcodeDistricts: RequestTimeFilterPostcodeDistricts) -> RequestBuilder<ResponseTimeFilterPostcodeDistricts> {
        let path = "/v4/time-filter/postcode-districts"
        let URLString = OpenAPIClientAPI.basePath + path
        let parameters = JSONEncodingHelper.encodingParameters(forEncodableObject: requestTimeFilterPostcodeDistricts)

        let url = URLComponents(string: URLString)

        let requestBuilder: RequestBuilder<ResponseTimeFilterPostcodeDistricts>.Type = OpenAPIClientAPI.requestBuilderFactory.getBuilder()

        return requestBuilder.init(method: "POST", URLString: (url?.string ?? URLString), parameters: parameters, isBody: true)
    }

    /**

     - parameter requestTimeFilterPostcodeSectors: (body)  
     - parameter completion: completion handler to receive the data and the error objects
     */
    open class func timeFilterPostcodeSectors(requestTimeFilterPostcodeSectors: RequestTimeFilterPostcodeSectors, completion: @escaping ((_ data: ResponseTimeFilterPostcodeSectors?,_ error: Error?) -> Void)) {
        timeFilterPostcodeSectorsWithRequestBuilder(requestTimeFilterPostcodeSectors: requestTimeFilterPostcodeSectors).execute { (response, error) -> Void in
            completion(response?.body, error)
        }
    }

    /**
     - POST /v4/time-filter/postcode-sectors
     - API Key:
       - type: apiKey X-Api-Key 
       - name: ApiKey
     - API Key:
       - type: apiKey X-Application-Id 
       - name: ApplicationId
     - externalDocs: class ExternalDocumentation {
    description: null
    url: http://docs.traveltimeplatform.com/reference/postcode-sector-filter
}
     - parameter requestTimeFilterPostcodeSectors: (body)  
     - returns: RequestBuilder<ResponseTimeFilterPostcodeSectors> 
     */
    open class func timeFilterPostcodeSectorsWithRequestBuilder(requestTimeFilterPostcodeSectors: RequestTimeFilterPostcodeSectors) -> RequestBuilder<ResponseTimeFilterPostcodeSectors> {
        let path = "/v4/time-filter/postcode-sectors"
        let URLString = OpenAPIClientAPI.basePath + path
        let parameters = JSONEncodingHelper.encodingParameters(forEncodableObject: requestTimeFilterPostcodeSectors)

        let url = URLComponents(string: URLString)

        let requestBuilder: RequestBuilder<ResponseTimeFilterPostcodeSectors>.Type = OpenAPIClientAPI.requestBuilderFactory.getBuilder()

        return requestBuilder.init(method: "POST", URLString: (url?.string ?? URLString), parameters: parameters, isBody: true)
    }

    /**

     - parameter requestTimeFilterPostcodes: (body)  
     - parameter completion: completion handler to receive the data and the error objects
     */
    open class func timeFilterPostcodes(requestTimeFilterPostcodes: RequestTimeFilterPostcodes, completion: @escaping ((_ data: ResponseTimeFilterPostcodes?,_ error: Error?) -> Void)) {
        timeFilterPostcodesWithRequestBuilder(requestTimeFilterPostcodes: requestTimeFilterPostcodes).execute { (response, error) -> Void in
            completion(response?.body, error)
        }
    }

    /**
     - POST /v4/time-filter/postcodes
     - API Key:
       - type: apiKey X-Api-Key 
       - name: ApiKey
     - API Key:
       - type: apiKey X-Application-Id 
       - name: ApplicationId
     - externalDocs: class ExternalDocumentation {
    description: null
    url: http://docs.traveltimeplatform.com/reference/postcode-search
}
     - parameter requestTimeFilterPostcodes: (body)  
     - returns: RequestBuilder<ResponseTimeFilterPostcodes> 
     */
    open class func timeFilterPostcodesWithRequestBuilder(requestTimeFilterPostcodes: RequestTimeFilterPostcodes) -> RequestBuilder<ResponseTimeFilterPostcodes> {
        let path = "/v4/time-filter/postcodes"
        let URLString = OpenAPIClientAPI.basePath + path
        let parameters = JSONEncodingHelper.encodingParameters(forEncodableObject: requestTimeFilterPostcodes)

        let url = URLComponents(string: URLString)

        let requestBuilder: RequestBuilder<ResponseTimeFilterPostcodes>.Type = OpenAPIClientAPI.requestBuilderFactory.getBuilder()

        return requestBuilder.init(method: "POST", URLString: (url?.string ?? URLString), parameters: parameters, isBody: true)
    }

    /**

     - parameter requestTimeMap: (body)  
     - parameter completion: completion handler to receive the data and the error objects
     */
    open class func timeMap(requestTimeMap: RequestTimeMap, completion: @escaping ((_ data: ResponseTimeMap?,_ error: Error?) -> Void)) {
        timeMapWithRequestBuilder(requestTimeMap: requestTimeMap).execute { (response, error) -> Void in
            completion(response?.body, error)
        }
    }

    /**
     - POST /v4/time-map
     - API Key:
       - type: apiKey X-Api-Key 
       - name: ApiKey
     - API Key:
       - type: apiKey X-Application-Id 
       - name: ApplicationId
     - externalDocs: class ExternalDocumentation {
    description: null
    url: http://docs.traveltimeplatform.com/reference/time-map
}
     - parameter requestTimeMap: (body)  
     - returns: RequestBuilder<ResponseTimeMap> 
     */
    open class func timeMapWithRequestBuilder(requestTimeMap: RequestTimeMap) -> RequestBuilder<ResponseTimeMap> {
        let path = "/v4/time-map"
        let URLString = OpenAPIClientAPI.basePath + path
        let parameters = JSONEncodingHelper.encodingParameters(forEncodableObject: requestTimeMap)

        let url = URLComponents(string: URLString)

        let requestBuilder: RequestBuilder<ResponseTimeMap>.Type = OpenAPIClientAPI.requestBuilderFactory.getBuilder()

        return requestBuilder.init(method: "POST", URLString: (url?.string ?? URLString), parameters: parameters, isBody: true)
    }

}
