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
from openapi_client.models.request_transportation_fast import RequestTransportationFast  # noqa: E501
from openapi_client.rest import ApiException

class TestRequestTransportationFast(unittest.TestCase):
    """RequestTransportationFast unit test stubs"""

    def setUp(self):
        pass

    def tearDown(self):
        pass

    def make_instance(self, include_optional):
        """Test RequestTransportationFast
            include_option is a boolean, when False only required
            params are included, when True both required and
            optional params are included """
        # model = openapi_client.models.request_transportation_fast.RequestTransportationFast()  # noqa: E501
        if include_optional :
            return RequestTransportationFast(
                type = 'public_transport'
            )
        else :
            return RequestTransportationFast(
                type = 'public_transport',
        )

    def testRequestTransportationFast(self):
        """Test RequestTransportationFast"""
        inst_req_only = self.make_instance(include_optional=False)
        inst_req_and_optional = self.make_instance(include_optional=True)


if __name__ == '__main__':
    unittest.main()
