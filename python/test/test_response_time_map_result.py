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
from openapi_client.models.response_time_map_result import ResponseTimeMapResult  # noqa: E501
from openapi_client.rest import ApiException

class TestResponseTimeMapResult(unittest.TestCase):
    """ResponseTimeMapResult unit test stubs"""

    def setUp(self):
        pass

    def tearDown(self):
        pass

    def make_instance(self, include_optional):
        """Test ResponseTimeMapResult
            include_option is a boolean, when False only required
            params are included, when True both required and
            optional params are included """
        # model = openapi_client.models.response_time_map_result.ResponseTimeMapResult()  # noqa: E501
        if include_optional :
            return ResponseTimeMapResult(
                search_id = '0', 
                shapes = [
                    openapi_client.models.response_shape.ResponseShape(
                        shell = [
                            openapi_client.models.coords.Coords(
                                lat = 1.337, 
                                lng = 1.337, )
                            ], 
                        holes = [
                            [
                                openapi_client.models.coords.Coords(
                                    lat = 1.337, 
                                    lng = 1.337, )
                                ]
                            ], )
                    ], 
                properties = openapi_client.models.response_time_map_properties.ResponseTimeMapProperties(
                    is_only_walking = True, )
            )
        else :
            return ResponseTimeMapResult(
                search_id = '0',
                shapes = [
                    openapi_client.models.response_shape.ResponseShape(
                        shell = [
                            openapi_client.models.coords.Coords(
                                lat = 1.337, 
                                lng = 1.337, )
                            ], 
                        holes = [
                            [
                                openapi_client.models.coords.Coords(
                                    lat = 1.337, 
                                    lng = 1.337, )
                                ]
                            ], )
                    ],
                properties = openapi_client.models.response_time_map_properties.ResponseTimeMapProperties(
                    is_only_walking = True, ),
        )

    def testResponseTimeMapResult(self):
        """Test ResponseTimeMapResult"""
        inst_req_only = self.make_instance(include_optional=False)
        inst_req_and_optional = self.make_instance(include_optional=True)


if __name__ == '__main__':
    unittest.main()
