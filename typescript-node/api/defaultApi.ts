/**
 * TravelTime Platform API
 * No description provided (generated by Openapi Generator https://github.com/openapitools/openapi-generator)
 *
 * The version of the OpenAPI document: 1.0.0
 * Contact: support@igeolise.com
 *
 * NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

import localVarRequest = require('request');
import http = require('http');

/* tslint:disable:no-unused-locals */
import { RequestRoutes } from '../model/requestRoutes';
import { RequestSupportedLocations } from '../model/requestSupportedLocations';
import { RequestTimeFilter } from '../model/requestTimeFilter';
import { RequestTimeFilterFast } from '../model/requestTimeFilterFast';
import { RequestTimeFilterPostcodeDistricts } from '../model/requestTimeFilterPostcodeDistricts';
import { RequestTimeFilterPostcodeSectors } from '../model/requestTimeFilterPostcodeSectors';
import { RequestTimeFilterPostcodes } from '../model/requestTimeFilterPostcodes';
import { RequestTimeMap } from '../model/requestTimeMap';
import { ResponseError } from '../model/responseError';
import { ResponseGeocoding } from '../model/responseGeocoding';
import { ResponseMapInfo } from '../model/responseMapInfo';
import { ResponseRoutes } from '../model/responseRoutes';
import { ResponseSupportedLocations } from '../model/responseSupportedLocations';
import { ResponseTimeFilter } from '../model/responseTimeFilter';
import { ResponseTimeFilterFast } from '../model/responseTimeFilterFast';
import { ResponseTimeFilterPostcodeDistricts } from '../model/responseTimeFilterPostcodeDistricts';
import { ResponseTimeFilterPostcodeSectors } from '../model/responseTimeFilterPostcodeSectors';
import { ResponseTimeFilterPostcodes } from '../model/responseTimeFilterPostcodes';
import { ResponseTimeMap } from '../model/responseTimeMap';

import { ObjectSerializer, Authentication, VoidAuth } from '../model/models';
import { ApiKeyAuth } from '../model/models';
import { ApiKeyAuth } from '../model/models';

let defaultBasePath = 'https://api.traveltimeapp.com';

// ===============================================
// This file is autogenerated - Please do not edit
// ===============================================

export enum DefaultApiApiKeys {
    ApiKey,
    ApplicationId,
}

export class DefaultApi {
    protected _basePath = defaultBasePath;
    protected defaultHeaders : any = {};
    protected _useQuerystring : boolean = false;

    protected authentications = {
        'default': <Authentication>new VoidAuth(),
        'ApiKey': new ApiKeyAuth('header', 'X-Api-Key'),
        'ApplicationId': new ApiKeyAuth('header', 'X-Application-Id'),
    }

    constructor(basePath?: string);
    constructor(basePathOrUsername: string, password?: string, basePath?: string) {
        if (password) {
            if (basePath) {
                this.basePath = basePath;
            }
        } else {
            if (basePathOrUsername) {
                this.basePath = basePathOrUsername
            }
        }
    }

    set useQuerystring(value: boolean) {
        this._useQuerystring = value;
    }

    set basePath(basePath: string) {
        this._basePath = basePath;
    }

    get basePath() {
        return this._basePath;
    }

    public setDefaultAuthentication(auth: Authentication) {
        this.authentications.default = auth;
    }

    public setApiKey(key: DefaultApiApiKeys, value: string) {
        (this.authentications as any)[DefaultApiApiKeys[key]].apiKey = value;
    }

    /**
     * 
     * @param focusLat 
     * @param focusLng 
     * @param withinCountry 
     */
    public async geocodingReverseSearch (focusLat: number, focusLng: number, withinCountry?: string, options: {headers: {[name: string]: string}} = {headers: {}}) : Promise<{ response: http.ClientResponse; body: ResponseGeocoding;  }> {
        const localVarPath = this.basePath + '/v4/geocoding/reverse';
        let localVarQueryParameters: any = {};
        let localVarHeaderParams: any = (<any>Object).assign({}, this.defaultHeaders);
        let localVarFormParams: any = {};

        // verify required parameter 'focusLat' is not null or undefined
        if (focusLat === null || focusLat === undefined) {
            throw new Error('Required parameter focusLat was null or undefined when calling geocodingReverseSearch.');
        }

        // verify required parameter 'focusLng' is not null or undefined
        if (focusLng === null || focusLng === undefined) {
            throw new Error('Required parameter focusLng was null or undefined when calling geocodingReverseSearch.');
        }

        if (focusLat !== undefined) {
            localVarQueryParameters['focus.lat'] = ObjectSerializer.serialize(focusLat, "number");
        }

        if (focusLng !== undefined) {
            localVarQueryParameters['focus.lng'] = ObjectSerializer.serialize(focusLng, "number");
        }

        if (withinCountry !== undefined) {
            localVarQueryParameters['within.country'] = ObjectSerializer.serialize(withinCountry, "string");
        }

        (<any>Object).assign(localVarHeaderParams, options.headers);

        let localVarUseFormData = false;

        let localVarRequestOptions: localVarRequest.Options = {
            method: 'GET',
            qs: localVarQueryParameters,
            headers: localVarHeaderParams,
            uri: localVarPath,
            useQuerystring: this._useQuerystring,
            json: true,
        };

        this.authentications.ApiKey.applyToRequest(localVarRequestOptions);

        this.authentications.ApplicationId.applyToRequest(localVarRequestOptions);

        this.authentications.default.applyToRequest(localVarRequestOptions);

        if (Object.keys(localVarFormParams).length) {
            if (localVarUseFormData) {
                (<any>localVarRequestOptions).formData = localVarFormParams;
            } else {
                localVarRequestOptions.form = localVarFormParams;
            }
        }
        return new Promise<{ response: http.ClientResponse; body: ResponseGeocoding;  }>((resolve, reject) => {
            localVarRequest(localVarRequestOptions, (error, response, body) => {
                if (error) {
                    reject(error);
                } else {
                    body = ObjectSerializer.deserialize(body, "ResponseGeocoding");
                    if (response.statusCode && response.statusCode >= 200 && response.statusCode <= 299) {
                        resolve({ response: response, body: body });
                    } else {
                        reject({ response: response, body: body });
                    }
                }
            });
        });
    }
    /**
     * 
     * @param query 
     * @param withinCountry 
     * @param focusLat 
     * @param focusLng 
     */
    public async geocodingSearch (query: string, withinCountry?: string, focusLat?: number, focusLng?: number, options: {headers: {[name: string]: string}} = {headers: {}}) : Promise<{ response: http.ClientResponse; body: ResponseGeocoding;  }> {
        const localVarPath = this.basePath + '/v4/geocoding/search';
        let localVarQueryParameters: any = {};
        let localVarHeaderParams: any = (<any>Object).assign({}, this.defaultHeaders);
        let localVarFormParams: any = {};

        // verify required parameter 'query' is not null or undefined
        if (query === null || query === undefined) {
            throw new Error('Required parameter query was null or undefined when calling geocodingSearch.');
        }

        if (query !== undefined) {
            localVarQueryParameters['query'] = ObjectSerializer.serialize(query, "string");
        }

        if (withinCountry !== undefined) {
            localVarQueryParameters['within.country'] = ObjectSerializer.serialize(withinCountry, "string");
        }

        if (focusLat !== undefined) {
            localVarQueryParameters['focus.lat'] = ObjectSerializer.serialize(focusLat, "number");
        }

        if (focusLng !== undefined) {
            localVarQueryParameters['focus.lng'] = ObjectSerializer.serialize(focusLng, "number");
        }

        (<any>Object).assign(localVarHeaderParams, options.headers);

        let localVarUseFormData = false;

        let localVarRequestOptions: localVarRequest.Options = {
            method: 'GET',
            qs: localVarQueryParameters,
            headers: localVarHeaderParams,
            uri: localVarPath,
            useQuerystring: this._useQuerystring,
            json: true,
        };

        this.authentications.ApiKey.applyToRequest(localVarRequestOptions);

        this.authentications.ApplicationId.applyToRequest(localVarRequestOptions);

        this.authentications.default.applyToRequest(localVarRequestOptions);

        if (Object.keys(localVarFormParams).length) {
            if (localVarUseFormData) {
                (<any>localVarRequestOptions).formData = localVarFormParams;
            } else {
                localVarRequestOptions.form = localVarFormParams;
            }
        }
        return new Promise<{ response: http.ClientResponse; body: ResponseGeocoding;  }>((resolve, reject) => {
            localVarRequest(localVarRequestOptions, (error, response, body) => {
                if (error) {
                    reject(error);
                } else {
                    body = ObjectSerializer.deserialize(body, "ResponseGeocoding");
                    if (response.statusCode && response.statusCode >= 200 && response.statusCode <= 299) {
                        resolve({ response: response, body: body });
                    } else {
                        reject({ response: response, body: body });
                    }
                }
            });
        });
    }
    /**
     * 
     */
    public async mapInfo (options: {headers: {[name: string]: string}} = {headers: {}}) : Promise<{ response: http.ClientResponse; body: ResponseMapInfo;  }> {
        const localVarPath = this.basePath + '/v4/map-info';
        let localVarQueryParameters: any = {};
        let localVarHeaderParams: any = (<any>Object).assign({}, this.defaultHeaders);
        let localVarFormParams: any = {};

        (<any>Object).assign(localVarHeaderParams, options.headers);

        let localVarUseFormData = false;

        let localVarRequestOptions: localVarRequest.Options = {
            method: 'GET',
            qs: localVarQueryParameters,
            headers: localVarHeaderParams,
            uri: localVarPath,
            useQuerystring: this._useQuerystring,
            json: true,
        };

        this.authentications.ApiKey.applyToRequest(localVarRequestOptions);

        this.authentications.ApplicationId.applyToRequest(localVarRequestOptions);

        this.authentications.default.applyToRequest(localVarRequestOptions);

        if (Object.keys(localVarFormParams).length) {
            if (localVarUseFormData) {
                (<any>localVarRequestOptions).formData = localVarFormParams;
            } else {
                localVarRequestOptions.form = localVarFormParams;
            }
        }
        return new Promise<{ response: http.ClientResponse; body: ResponseMapInfo;  }>((resolve, reject) => {
            localVarRequest(localVarRequestOptions, (error, response, body) => {
                if (error) {
                    reject(error);
                } else {
                    body = ObjectSerializer.deserialize(body, "ResponseMapInfo");
                    if (response.statusCode && response.statusCode >= 200 && response.statusCode <= 299) {
                        resolve({ response: response, body: body });
                    } else {
                        reject({ response: response, body: body });
                    }
                }
            });
        });
    }
    /**
     * 
     * @param requestRoutes 
     */
    public async routes (requestRoutes: RequestRoutes, options: {headers: {[name: string]: string}} = {headers: {}}) : Promise<{ response: http.ClientResponse; body: ResponseRoutes;  }> {
        const localVarPath = this.basePath + '/v4/routes';
        let localVarQueryParameters: any = {};
        let localVarHeaderParams: any = (<any>Object).assign({}, this.defaultHeaders);
        let localVarFormParams: any = {};

        // verify required parameter 'requestRoutes' is not null or undefined
        if (requestRoutes === null || requestRoutes === undefined) {
            throw new Error('Required parameter requestRoutes was null or undefined when calling routes.');
        }

        (<any>Object).assign(localVarHeaderParams, options.headers);

        let localVarUseFormData = false;

        let localVarRequestOptions: localVarRequest.Options = {
            method: 'POST',
            qs: localVarQueryParameters,
            headers: localVarHeaderParams,
            uri: localVarPath,
            useQuerystring: this._useQuerystring,
            json: true,
            body: ObjectSerializer.serialize(requestRoutes, "RequestRoutes")
        };

        this.authentications.ApiKey.applyToRequest(localVarRequestOptions);

        this.authentications.ApplicationId.applyToRequest(localVarRequestOptions);

        this.authentications.default.applyToRequest(localVarRequestOptions);

        if (Object.keys(localVarFormParams).length) {
            if (localVarUseFormData) {
                (<any>localVarRequestOptions).formData = localVarFormParams;
            } else {
                localVarRequestOptions.form = localVarFormParams;
            }
        }
        return new Promise<{ response: http.ClientResponse; body: ResponseRoutes;  }>((resolve, reject) => {
            localVarRequest(localVarRequestOptions, (error, response, body) => {
                if (error) {
                    reject(error);
                } else {
                    body = ObjectSerializer.deserialize(body, "ResponseRoutes");
                    if (response.statusCode && response.statusCode >= 200 && response.statusCode <= 299) {
                        resolve({ response: response, body: body });
                    } else {
                        reject({ response: response, body: body });
                    }
                }
            });
        });
    }
    /**
     * 
     * @param requestSupportedLocations 
     */
    public async supportedLocations (requestSupportedLocations: RequestSupportedLocations, options: {headers: {[name: string]: string}} = {headers: {}}) : Promise<{ response: http.ClientResponse; body: ResponseSupportedLocations;  }> {
        const localVarPath = this.basePath + '/v4/supported-locations';
        let localVarQueryParameters: any = {};
        let localVarHeaderParams: any = (<any>Object).assign({}, this.defaultHeaders);
        let localVarFormParams: any = {};

        // verify required parameter 'requestSupportedLocations' is not null or undefined
        if (requestSupportedLocations === null || requestSupportedLocations === undefined) {
            throw new Error('Required parameter requestSupportedLocations was null or undefined when calling supportedLocations.');
        }

        (<any>Object).assign(localVarHeaderParams, options.headers);

        let localVarUseFormData = false;

        let localVarRequestOptions: localVarRequest.Options = {
            method: 'POST',
            qs: localVarQueryParameters,
            headers: localVarHeaderParams,
            uri: localVarPath,
            useQuerystring: this._useQuerystring,
            json: true,
            body: ObjectSerializer.serialize(requestSupportedLocations, "RequestSupportedLocations")
        };

        this.authentications.ApiKey.applyToRequest(localVarRequestOptions);

        this.authentications.ApplicationId.applyToRequest(localVarRequestOptions);

        this.authentications.default.applyToRequest(localVarRequestOptions);

        if (Object.keys(localVarFormParams).length) {
            if (localVarUseFormData) {
                (<any>localVarRequestOptions).formData = localVarFormParams;
            } else {
                localVarRequestOptions.form = localVarFormParams;
            }
        }
        return new Promise<{ response: http.ClientResponse; body: ResponseSupportedLocations;  }>((resolve, reject) => {
            localVarRequest(localVarRequestOptions, (error, response, body) => {
                if (error) {
                    reject(error);
                } else {
                    body = ObjectSerializer.deserialize(body, "ResponseSupportedLocations");
                    if (response.statusCode && response.statusCode >= 200 && response.statusCode <= 299) {
                        resolve({ response: response, body: body });
                    } else {
                        reject({ response: response, body: body });
                    }
                }
            });
        });
    }
    /**
     * 
     * @param requestTimeFilter 
     */
    public async timeFilter (requestTimeFilter: RequestTimeFilter, options: {headers: {[name: string]: string}} = {headers: {}}) : Promise<{ response: http.ClientResponse; body: ResponseTimeFilter;  }> {
        const localVarPath = this.basePath + '/v4/time-filter';
        let localVarQueryParameters: any = {};
        let localVarHeaderParams: any = (<any>Object).assign({}, this.defaultHeaders);
        let localVarFormParams: any = {};

        // verify required parameter 'requestTimeFilter' is not null or undefined
        if (requestTimeFilter === null || requestTimeFilter === undefined) {
            throw new Error('Required parameter requestTimeFilter was null or undefined when calling timeFilter.');
        }

        (<any>Object).assign(localVarHeaderParams, options.headers);

        let localVarUseFormData = false;

        let localVarRequestOptions: localVarRequest.Options = {
            method: 'POST',
            qs: localVarQueryParameters,
            headers: localVarHeaderParams,
            uri: localVarPath,
            useQuerystring: this._useQuerystring,
            json: true,
            body: ObjectSerializer.serialize(requestTimeFilter, "RequestTimeFilter")
        };

        this.authentications.ApiKey.applyToRequest(localVarRequestOptions);

        this.authentications.ApplicationId.applyToRequest(localVarRequestOptions);

        this.authentications.default.applyToRequest(localVarRequestOptions);

        if (Object.keys(localVarFormParams).length) {
            if (localVarUseFormData) {
                (<any>localVarRequestOptions).formData = localVarFormParams;
            } else {
                localVarRequestOptions.form = localVarFormParams;
            }
        }
        return new Promise<{ response: http.ClientResponse; body: ResponseTimeFilter;  }>((resolve, reject) => {
            localVarRequest(localVarRequestOptions, (error, response, body) => {
                if (error) {
                    reject(error);
                } else {
                    body = ObjectSerializer.deserialize(body, "ResponseTimeFilter");
                    if (response.statusCode && response.statusCode >= 200 && response.statusCode <= 299) {
                        resolve({ response: response, body: body });
                    } else {
                        reject({ response: response, body: body });
                    }
                }
            });
        });
    }
    /**
     * 
     * @param requestTimeFilterFast 
     */
    public async timeFilterFast (requestTimeFilterFast: RequestTimeFilterFast, options: {headers: {[name: string]: string}} = {headers: {}}) : Promise<{ response: http.ClientResponse; body: ResponseTimeFilterFast;  }> {
        const localVarPath = this.basePath + '/v4/time-filter/fast';
        let localVarQueryParameters: any = {};
        let localVarHeaderParams: any = (<any>Object).assign({}, this.defaultHeaders);
        let localVarFormParams: any = {};

        // verify required parameter 'requestTimeFilterFast' is not null or undefined
        if (requestTimeFilterFast === null || requestTimeFilterFast === undefined) {
            throw new Error('Required parameter requestTimeFilterFast was null or undefined when calling timeFilterFast.');
        }

        (<any>Object).assign(localVarHeaderParams, options.headers);

        let localVarUseFormData = false;

        let localVarRequestOptions: localVarRequest.Options = {
            method: 'POST',
            qs: localVarQueryParameters,
            headers: localVarHeaderParams,
            uri: localVarPath,
            useQuerystring: this._useQuerystring,
            json: true,
            body: ObjectSerializer.serialize(requestTimeFilterFast, "RequestTimeFilterFast")
        };

        this.authentications.ApiKey.applyToRequest(localVarRequestOptions);

        this.authentications.ApplicationId.applyToRequest(localVarRequestOptions);

        this.authentications.default.applyToRequest(localVarRequestOptions);

        if (Object.keys(localVarFormParams).length) {
            if (localVarUseFormData) {
                (<any>localVarRequestOptions).formData = localVarFormParams;
            } else {
                localVarRequestOptions.form = localVarFormParams;
            }
        }
        return new Promise<{ response: http.ClientResponse; body: ResponseTimeFilterFast;  }>((resolve, reject) => {
            localVarRequest(localVarRequestOptions, (error, response, body) => {
                if (error) {
                    reject(error);
                } else {
                    body = ObjectSerializer.deserialize(body, "ResponseTimeFilterFast");
                    if (response.statusCode && response.statusCode >= 200 && response.statusCode <= 299) {
                        resolve({ response: response, body: body });
                    } else {
                        reject({ response: response, body: body });
                    }
                }
            });
        });
    }
    /**
     * 
     * @param requestTimeFilterPostcodeDistricts 
     */
    public async timeFilterPostcodeDistricts (requestTimeFilterPostcodeDistricts: RequestTimeFilterPostcodeDistricts, options: {headers: {[name: string]: string}} = {headers: {}}) : Promise<{ response: http.ClientResponse; body: ResponseTimeFilterPostcodeDistricts;  }> {
        const localVarPath = this.basePath + '/v4/time-filter/postcode-districts';
        let localVarQueryParameters: any = {};
        let localVarHeaderParams: any = (<any>Object).assign({}, this.defaultHeaders);
        let localVarFormParams: any = {};

        // verify required parameter 'requestTimeFilterPostcodeDistricts' is not null or undefined
        if (requestTimeFilterPostcodeDistricts === null || requestTimeFilterPostcodeDistricts === undefined) {
            throw new Error('Required parameter requestTimeFilterPostcodeDistricts was null or undefined when calling timeFilterPostcodeDistricts.');
        }

        (<any>Object).assign(localVarHeaderParams, options.headers);

        let localVarUseFormData = false;

        let localVarRequestOptions: localVarRequest.Options = {
            method: 'POST',
            qs: localVarQueryParameters,
            headers: localVarHeaderParams,
            uri: localVarPath,
            useQuerystring: this._useQuerystring,
            json: true,
            body: ObjectSerializer.serialize(requestTimeFilterPostcodeDistricts, "RequestTimeFilterPostcodeDistricts")
        };

        this.authentications.ApiKey.applyToRequest(localVarRequestOptions);

        this.authentications.ApplicationId.applyToRequest(localVarRequestOptions);

        this.authentications.default.applyToRequest(localVarRequestOptions);

        if (Object.keys(localVarFormParams).length) {
            if (localVarUseFormData) {
                (<any>localVarRequestOptions).formData = localVarFormParams;
            } else {
                localVarRequestOptions.form = localVarFormParams;
            }
        }
        return new Promise<{ response: http.ClientResponse; body: ResponseTimeFilterPostcodeDistricts;  }>((resolve, reject) => {
            localVarRequest(localVarRequestOptions, (error, response, body) => {
                if (error) {
                    reject(error);
                } else {
                    body = ObjectSerializer.deserialize(body, "ResponseTimeFilterPostcodeDistricts");
                    if (response.statusCode && response.statusCode >= 200 && response.statusCode <= 299) {
                        resolve({ response: response, body: body });
                    } else {
                        reject({ response: response, body: body });
                    }
                }
            });
        });
    }
    /**
     * 
     * @param requestTimeFilterPostcodeSectors 
     */
    public async timeFilterPostcodeSectors (requestTimeFilterPostcodeSectors: RequestTimeFilterPostcodeSectors, options: {headers: {[name: string]: string}} = {headers: {}}) : Promise<{ response: http.ClientResponse; body: ResponseTimeFilterPostcodeSectors;  }> {
        const localVarPath = this.basePath + '/v4/time-filter/postcode-sectors';
        let localVarQueryParameters: any = {};
        let localVarHeaderParams: any = (<any>Object).assign({}, this.defaultHeaders);
        let localVarFormParams: any = {};

        // verify required parameter 'requestTimeFilterPostcodeSectors' is not null or undefined
        if (requestTimeFilterPostcodeSectors === null || requestTimeFilterPostcodeSectors === undefined) {
            throw new Error('Required parameter requestTimeFilterPostcodeSectors was null or undefined when calling timeFilterPostcodeSectors.');
        }

        (<any>Object).assign(localVarHeaderParams, options.headers);

        let localVarUseFormData = false;

        let localVarRequestOptions: localVarRequest.Options = {
            method: 'POST',
            qs: localVarQueryParameters,
            headers: localVarHeaderParams,
            uri: localVarPath,
            useQuerystring: this._useQuerystring,
            json: true,
            body: ObjectSerializer.serialize(requestTimeFilterPostcodeSectors, "RequestTimeFilterPostcodeSectors")
        };

        this.authentications.ApiKey.applyToRequest(localVarRequestOptions);

        this.authentications.ApplicationId.applyToRequest(localVarRequestOptions);

        this.authentications.default.applyToRequest(localVarRequestOptions);

        if (Object.keys(localVarFormParams).length) {
            if (localVarUseFormData) {
                (<any>localVarRequestOptions).formData = localVarFormParams;
            } else {
                localVarRequestOptions.form = localVarFormParams;
            }
        }
        return new Promise<{ response: http.ClientResponse; body: ResponseTimeFilterPostcodeSectors;  }>((resolve, reject) => {
            localVarRequest(localVarRequestOptions, (error, response, body) => {
                if (error) {
                    reject(error);
                } else {
                    body = ObjectSerializer.deserialize(body, "ResponseTimeFilterPostcodeSectors");
                    if (response.statusCode && response.statusCode >= 200 && response.statusCode <= 299) {
                        resolve({ response: response, body: body });
                    } else {
                        reject({ response: response, body: body });
                    }
                }
            });
        });
    }
    /**
     * 
     * @param requestTimeFilterPostcodes 
     */
    public async timeFilterPostcodes (requestTimeFilterPostcodes: RequestTimeFilterPostcodes, options: {headers: {[name: string]: string}} = {headers: {}}) : Promise<{ response: http.ClientResponse; body: ResponseTimeFilterPostcodes;  }> {
        const localVarPath = this.basePath + '/v4/time-filter/postcodes';
        let localVarQueryParameters: any = {};
        let localVarHeaderParams: any = (<any>Object).assign({}, this.defaultHeaders);
        let localVarFormParams: any = {};

        // verify required parameter 'requestTimeFilterPostcodes' is not null or undefined
        if (requestTimeFilterPostcodes === null || requestTimeFilterPostcodes === undefined) {
            throw new Error('Required parameter requestTimeFilterPostcodes was null or undefined when calling timeFilterPostcodes.');
        }

        (<any>Object).assign(localVarHeaderParams, options.headers);

        let localVarUseFormData = false;

        let localVarRequestOptions: localVarRequest.Options = {
            method: 'POST',
            qs: localVarQueryParameters,
            headers: localVarHeaderParams,
            uri: localVarPath,
            useQuerystring: this._useQuerystring,
            json: true,
            body: ObjectSerializer.serialize(requestTimeFilterPostcodes, "RequestTimeFilterPostcodes")
        };

        this.authentications.ApiKey.applyToRequest(localVarRequestOptions);

        this.authentications.ApplicationId.applyToRequest(localVarRequestOptions);

        this.authentications.default.applyToRequest(localVarRequestOptions);

        if (Object.keys(localVarFormParams).length) {
            if (localVarUseFormData) {
                (<any>localVarRequestOptions).formData = localVarFormParams;
            } else {
                localVarRequestOptions.form = localVarFormParams;
            }
        }
        return new Promise<{ response: http.ClientResponse; body: ResponseTimeFilterPostcodes;  }>((resolve, reject) => {
            localVarRequest(localVarRequestOptions, (error, response, body) => {
                if (error) {
                    reject(error);
                } else {
                    body = ObjectSerializer.deserialize(body, "ResponseTimeFilterPostcodes");
                    if (response.statusCode && response.statusCode >= 200 && response.statusCode <= 299) {
                        resolve({ response: response, body: body });
                    } else {
                        reject({ response: response, body: body });
                    }
                }
            });
        });
    }
    /**
     * 
     * @param requestTimeMap 
     */
    public async timeMap (requestTimeMap: RequestTimeMap, options: {headers: {[name: string]: string}} = {headers: {}}) : Promise<{ response: http.ClientResponse; body: ResponseTimeMap;  }> {
        const localVarPath = this.basePath + '/v4/time-map';
        let localVarQueryParameters: any = {};
        let localVarHeaderParams: any = (<any>Object).assign({}, this.defaultHeaders);
        let localVarFormParams: any = {};

        // verify required parameter 'requestTimeMap' is not null or undefined
        if (requestTimeMap === null || requestTimeMap === undefined) {
            throw new Error('Required parameter requestTimeMap was null or undefined when calling timeMap.');
        }

        (<any>Object).assign(localVarHeaderParams, options.headers);

        let localVarUseFormData = false;

        let localVarRequestOptions: localVarRequest.Options = {
            method: 'POST',
            qs: localVarQueryParameters,
            headers: localVarHeaderParams,
            uri: localVarPath,
            useQuerystring: this._useQuerystring,
            json: true,
            body: ObjectSerializer.serialize(requestTimeMap, "RequestTimeMap")
        };

        this.authentications.ApiKey.applyToRequest(localVarRequestOptions);

        this.authentications.ApplicationId.applyToRequest(localVarRequestOptions);

        this.authentications.default.applyToRequest(localVarRequestOptions);

        if (Object.keys(localVarFormParams).length) {
            if (localVarUseFormData) {
                (<any>localVarRequestOptions).formData = localVarFormParams;
            } else {
                localVarRequestOptions.form = localVarFormParams;
            }
        }
        return new Promise<{ response: http.ClientResponse; body: ResponseTimeMap;  }>((resolve, reject) => {
            localVarRequest(localVarRequestOptions, (error, response, body) => {
                if (error) {
                    reject(error);
                } else {
                    body = ObjectSerializer.deserialize(body, "ResponseTimeMap");
                    if (response.statusCode && response.statusCode >= 200 && response.statusCode <= 299) {
                        resolve({ response: response, body: body });
                    } else {
                        reject({ response: response, body: body });
                    }
                }
            });
        });
    }
}
