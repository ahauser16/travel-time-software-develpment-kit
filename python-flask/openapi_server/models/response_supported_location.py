# coding: utf-8

from __future__ import absolute_import
from datetime import date, datetime  # noqa: F401

from typing import List, Dict  # noqa: F401

from openapi_server.models.base_model_ import Model
from openapi_server import util


class ResponseSupportedLocation(Model):
    """NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).

    Do not edit the class manually.
    """

    def __init__(self, id=None, map_name=None):  # noqa: E501
        """ResponseSupportedLocation - a model defined in OpenAPI

        :param id: The id of this ResponseSupportedLocation.  # noqa: E501
        :type id: str
        :param map_name: The map_name of this ResponseSupportedLocation.  # noqa: E501
        :type map_name: str
        """
        self.openapi_types = {
            'id': str,
            'map_name': str
        }

        self.attribute_map = {
            'id': 'id',
            'map_name': 'map_name'
        }

        self._id = id
        self._map_name = map_name

    @classmethod
    def from_dict(cls, dikt) -> 'ResponseSupportedLocation':
        """Returns the dict as a model

        :param dikt: A dict.
        :type: dict
        :return: The ResponseSupportedLocation of this ResponseSupportedLocation.  # noqa: E501
        :rtype: ResponseSupportedLocation
        """
        return util.deserialize_model(dikt, cls)

    @property
    def id(self):
        """Gets the id of this ResponseSupportedLocation.


        :return: The id of this ResponseSupportedLocation.
        :rtype: str
        """
        return self._id

    @id.setter
    def id(self, id):
        """Sets the id of this ResponseSupportedLocation.


        :param id: The id of this ResponseSupportedLocation.
        :type id: str
        """
        if id is None:
            raise ValueError("Invalid value for `id`, must not be `None`")  # noqa: E501

        self._id = id

    @property
    def map_name(self):
        """Gets the map_name of this ResponseSupportedLocation.


        :return: The map_name of this ResponseSupportedLocation.
        :rtype: str
        """
        return self._map_name

    @map_name.setter
    def map_name(self, map_name):
        """Sets the map_name of this ResponseSupportedLocation.


        :param map_name: The map_name of this ResponseSupportedLocation.
        :type map_name: str
        """
        if map_name is None:
            raise ValueError("Invalid value for `map_name`, must not be `None`")  # noqa: E501

        self._map_name = map_name
