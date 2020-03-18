# coding: utf-8

"""
    TravelTime Platform API

    No description provided (generated by Openapi Generator https://github.com/openapitools/openapi-generator)  # noqa: E501

    The version of the OpenAPI document: 1.0.0
    Contact: support@igeolise.com
    Generated by: https://openapi-generator.tech
"""


from __future__ import absolute_import

import unittest
import datetime

import openapi_client
from openapi_client.models.request_time_filter_postcode_sectors import RequestTimeFilterPostcodeSectors  # noqa: E501
from openapi_client.rest import ApiException

class TestRequestTimeFilterPostcodeSectors(unittest.TestCase):
    """RequestTimeFilterPostcodeSectors unit test stubs"""

    def setUp(self):
        pass

    def tearDown(self):
        pass

    def make_instance(self, include_optional):
        """Test RequestTimeFilterPostcodeSectors
            include_option is a boolean, when False only required
            params are included, when True both required and
            optional params are included """
        # model = openapi_client.models.request_time_filter_postcode_sectors.RequestTimeFilterPostcodeSectors()  # noqa: E501
        if include_optional :
            return RequestTimeFilterPostcodeSectors(
                departure_searches = [
                    openapi_client.models.request_time_filter_postcode_sectors_departure_search.RequestTimeFilterPostcodeSectorsDepartureSearch(
                        id = '0', 
                        transportation = openapi_client.models.request_transportation.RequestTransportation(
                            type = 'cycling', 
                            pt_change_delay = 56, 
                            walking_time = 56, 
                            driving_time_to_station = 56, 
                            parking_time = 56, 
                            boarding_time = 56, ), 
                        travel_time = 60, 
                        departure_time = datetime.datetime.strptime('2013-10-20 19:20:30.00', '%Y-%m-%d %H:%M:%S.%f'), 
                        reachable_postcodes_threshold = 1.337, 
                        properties = [
                            'travel_time_reachable'
                            ], 
                        range = openapi_client.models.request_range_full.RequestRangeFull(
                            enabled = True, 
                            max_results = 1, 
                            width = 1, ), )
                    ], 
                arrival_searches = [
                    openapi_client.models.request_time_filter_postcode_sectors_arrival_search.RequestTimeFilterPostcodeSectorsArrivalSearch(
                        id = '0', 
                        transportation = openapi_client.models.request_transportation.RequestTransportation(
                            type = 'cycling', 
                            pt_change_delay = 56, 
                            walking_time = 56, 
                            driving_time_to_station = 56, 
                            parking_time = 56, 
                            boarding_time = 56, ), 
                        travel_time = 60, 
                        arrival_time = datetime.datetime.strptime('2013-10-20 19:20:30.00', '%Y-%m-%d %H:%M:%S.%f'), 
                        reachable_postcodes_threshold = 1.337, 
                        properties = [
                            'travel_time_reachable'
                            ], 
                        range = openapi_client.models.request_range_full.RequestRangeFull(
                            enabled = True, 
                            max_results = 1, 
                            width = 1, ), )
                    ]
            )
        else :
            return RequestTimeFilterPostcodeSectors(
        )

    def testRequestTimeFilterPostcodeSectors(self):
        """Test RequestTimeFilterPostcodeSectors"""
        inst_req_only = self.make_instance(include_optional=False)
        inst_req_and_optional = self.make_instance(include_optional=True)


if __name__ == '__main__':
    unittest.main()
