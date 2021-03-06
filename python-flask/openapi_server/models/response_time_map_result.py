# coding: utf-8

from __future__ import absolute_import
from datetime import date, datetime  # noqa: F401

from typing import List, Dict  # noqa: F401

from openapi_server.models.base_model_ import Model
from openapi_server.models.response_shape import ResponseShape
from openapi_server.models.response_time_map_properties import ResponseTimeMapProperties
from openapi_server import util

from openapi_server.models.response_shape import ResponseShape  # noqa: E501
from openapi_server.models.response_time_map_properties import ResponseTimeMapProperties  # noqa: E501

class ResponseTimeMapResult(Model):
    """NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).

    Do not edit the class manually.
    """

    def __init__(self, search_id=None, shapes=None, properties=None):  # noqa: E501
        """ResponseTimeMapResult - a model defined in OpenAPI

        :param search_id: The search_id of this ResponseTimeMapResult.  # noqa: E501
        :type search_id: str
        :param shapes: The shapes of this ResponseTimeMapResult.  # noqa: E501
        :type shapes: List[ResponseShape]
        :param properties: The properties of this ResponseTimeMapResult.  # noqa: E501
        :type properties: ResponseTimeMapProperties
        """
        self.openapi_types = {
            'search_id': str,
            'shapes': List[ResponseShape],
            'properties': ResponseTimeMapProperties
        }

        self.attribute_map = {
            'search_id': 'search_id',
            'shapes': 'shapes',
            'properties': 'properties'
        }

        self._search_id = search_id
        self._shapes = shapes
        self._properties = properties

    @classmethod
    def from_dict(cls, dikt) -> 'ResponseTimeMapResult':
        """Returns the dict as a model

        :param dikt: A dict.
        :type: dict
        :return: The ResponseTimeMapResult of this ResponseTimeMapResult.  # noqa: E501
        :rtype: ResponseTimeMapResult
        """
        return util.deserialize_model(dikt, cls)

    @property
    def search_id(self):
        """Gets the search_id of this ResponseTimeMapResult.


        :return: The search_id of this ResponseTimeMapResult.
        :rtype: str
        """
        return self._search_id

    @search_id.setter
    def search_id(self, search_id):
        """Sets the search_id of this ResponseTimeMapResult.


        :param search_id: The search_id of this ResponseTimeMapResult.
        :type search_id: str
        """
        if search_id is None:
            raise ValueError("Invalid value for `search_id`, must not be `None`")  # noqa: E501

        self._search_id = search_id

    @property
    def shapes(self):
        """Gets the shapes of this ResponseTimeMapResult.


        :return: The shapes of this ResponseTimeMapResult.
        :rtype: List[ResponseShape]
        """
        return self._shapes

    @shapes.setter
    def shapes(self, shapes):
        """Sets the shapes of this ResponseTimeMapResult.


        :param shapes: The shapes of this ResponseTimeMapResult.
        :type shapes: List[ResponseShape]
        """
        if shapes is None:
            raise ValueError("Invalid value for `shapes`, must not be `None`")  # noqa: E501

        self._shapes = shapes

    @property
    def properties(self):
        """Gets the properties of this ResponseTimeMapResult.


        :return: The properties of this ResponseTimeMapResult.
        :rtype: ResponseTimeMapProperties
        """
        return self._properties

    @properties.setter
    def properties(self, properties):
        """Sets the properties of this ResponseTimeMapResult.


        :param properties: The properties of this ResponseTimeMapResult.
        :type properties: ResponseTimeMapProperties
        """
        if properties is None:
            raise ValueError("Invalid value for `properties`, must not be `None`")  # noqa: E501

        self._properties = properties
