# coding: utf-8

from __future__ import absolute_import
from datetime import date, datetime  # noqa: F401

from typing import List, Dict  # noqa: F401

from openapi_server.models.base_model_ import Model
from openapi_server.models.response_routes_location import ResponseRoutesLocation
from openapi_server import util

from openapi_server.models.response_routes_location import ResponseRoutesLocation  # noqa: E501

class ResponseRoutesResult(Model):
    """NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).

    Do not edit the class manually.
    """

    def __init__(self, search_id=None, locations=None, unreachable=None):  # noqa: E501
        """ResponseRoutesResult - a model defined in OpenAPI

        :param search_id: The search_id of this ResponseRoutesResult.  # noqa: E501
        :type search_id: str
        :param locations: The locations of this ResponseRoutesResult.  # noqa: E501
        :type locations: List[ResponseRoutesLocation]
        :param unreachable: The unreachable of this ResponseRoutesResult.  # noqa: E501
        :type unreachable: List[str]
        """
        self.openapi_types = {
            'search_id': str,
            'locations': List[ResponseRoutesLocation],
            'unreachable': List[str]
        }

        self.attribute_map = {
            'search_id': 'search_id',
            'locations': 'locations',
            'unreachable': 'unreachable'
        }

        self._search_id = search_id
        self._locations = locations
        self._unreachable = unreachable

    @classmethod
    def from_dict(cls, dikt) -> 'ResponseRoutesResult':
        """Returns the dict as a model

        :param dikt: A dict.
        :type: dict
        :return: The ResponseRoutesResult of this ResponseRoutesResult.  # noqa: E501
        :rtype: ResponseRoutesResult
        """
        return util.deserialize_model(dikt, cls)

    @property
    def search_id(self):
        """Gets the search_id of this ResponseRoutesResult.


        :return: The search_id of this ResponseRoutesResult.
        :rtype: str
        """
        return self._search_id

    @search_id.setter
    def search_id(self, search_id):
        """Sets the search_id of this ResponseRoutesResult.


        :param search_id: The search_id of this ResponseRoutesResult.
        :type search_id: str
        """
        if search_id is None:
            raise ValueError("Invalid value for `search_id`, must not be `None`")  # noqa: E501

        self._search_id = search_id

    @property
    def locations(self):
        """Gets the locations of this ResponseRoutesResult.


        :return: The locations of this ResponseRoutesResult.
        :rtype: List[ResponseRoutesLocation]
        """
        return self._locations

    @locations.setter
    def locations(self, locations):
        """Sets the locations of this ResponseRoutesResult.


        :param locations: The locations of this ResponseRoutesResult.
        :type locations: List[ResponseRoutesLocation]
        """
        if locations is None:
            raise ValueError("Invalid value for `locations`, must not be `None`")  # noqa: E501

        self._locations = locations

    @property
    def unreachable(self):
        """Gets the unreachable of this ResponseRoutesResult.


        :return: The unreachable of this ResponseRoutesResult.
        :rtype: List[str]
        """
        return self._unreachable

    @unreachable.setter
    def unreachable(self, unreachable):
        """Sets the unreachable of this ResponseRoutesResult.


        :param unreachable: The unreachable of this ResponseRoutesResult.
        :type unreachable: List[str]
        """
        if unreachable is None:
            raise ValueError("Invalid value for `unreachable`, must not be `None`")  # noqa: E501

        self._unreachable = unreachable
