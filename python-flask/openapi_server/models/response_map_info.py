# coding: utf-8

from __future__ import absolute_import
from datetime import date, datetime  # noqa: F401

from typing import List, Dict  # noqa: F401

from openapi_server.models.base_model_ import Model
from openapi_server.models.response_map_info_map import ResponseMapInfoMap
from openapi_server import util

from openapi_server.models.response_map_info_map import ResponseMapInfoMap  # noqa: E501

class ResponseMapInfo(Model):
    """NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).

    Do not edit the class manually.
    """

    def __init__(self, maps=None):  # noqa: E501
        """ResponseMapInfo - a model defined in OpenAPI

        :param maps: The maps of this ResponseMapInfo.  # noqa: E501
        :type maps: List[ResponseMapInfoMap]
        """
        self.openapi_types = {
            'maps': List[ResponseMapInfoMap]
        }

        self.attribute_map = {
            'maps': 'maps'
        }

        self._maps = maps

    @classmethod
    def from_dict(cls, dikt) -> 'ResponseMapInfo':
        """Returns the dict as a model

        :param dikt: A dict.
        :type: dict
        :return: The ResponseMapInfo of this ResponseMapInfo.  # noqa: E501
        :rtype: ResponseMapInfo
        """
        return util.deserialize_model(dikt, cls)

    @property
    def maps(self):
        """Gets the maps of this ResponseMapInfo.


        :return: The maps of this ResponseMapInfo.
        :rtype: List[ResponseMapInfoMap]
        """
        return self._maps

    @maps.setter
    def maps(self, maps):
        """Sets the maps of this ResponseMapInfo.


        :param maps: The maps of this ResponseMapInfo.
        :type maps: List[ResponseMapInfoMap]
        """
        if maps is None:
            raise ValueError("Invalid value for `maps`, must not be `None`")  # noqa: E501

        self._maps = maps
