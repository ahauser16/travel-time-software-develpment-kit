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
from openapi_client.models.response_fares import ResponseFares  # noqa: E501
from openapi_client.rest import ApiException

class TestResponseFares(unittest.TestCase):
    """ResponseFares unit test stubs"""

    def setUp(self):
        pass

    def tearDown(self):
        pass

    def make_instance(self, include_optional):
        """Test ResponseFares
            include_option is a boolean, when False only required
            params are included, when True both required and
            optional params are included """
        # model = openapi_client.models.response_fares.ResponseFares()  # noqa: E501
        if include_optional :
            return ResponseFares(
                breakdown = [
                    openapi_client.models.response_fares_breakdown_item.ResponseFaresBreakdownItem(
                        modes = [
                            'car'
                            ], 
                        route_part_ids = [
                            56
                            ], 
                        tickets = [
                            openapi_client.models.response_fare_ticket.ResponseFareTicket(
                                type = 'single', 
                                price = 1.337, 
                                currency = '0', )
                            ], )
                    ], 
                tickets_total = [
                    openapi_client.models.response_fare_ticket.ResponseFareTicket(
                        type = 'single', 
                        price = 1.337, 
                        currency = '0', )
                    ]
            )
        else :
            return ResponseFares(
                breakdown = [
                    openapi_client.models.response_fares_breakdown_item.ResponseFaresBreakdownItem(
                        modes = [
                            'car'
                            ], 
                        route_part_ids = [
                            56
                            ], 
                        tickets = [
                            openapi_client.models.response_fare_ticket.ResponseFareTicket(
                                type = 'single', 
                                price = 1.337, 
                                currency = '0', )
                            ], )
                    ],
                tickets_total = [
                    openapi_client.models.response_fare_ticket.ResponseFareTicket(
                        type = 'single', 
                        price = 1.337, 
                        currency = '0', )
                    ],
        )

    def testResponseFares(self):
        """Test ResponseFares"""
        inst_req_only = self.make_instance(include_optional=False)
        inst_req_and_optional = self.make_instance(include_optional=True)


if __name__ == '__main__':
    unittest.main()
