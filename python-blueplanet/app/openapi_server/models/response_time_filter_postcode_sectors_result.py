# coding: utf-8

from __future__ import absolute_import
from datetime import date, datetime  # noqa: F401

from typing import List, Dict  # noqa: F401

from app.openapi_server.models.base_model_ import Model
from app.openapi_server.models.response_time_filter_postcode_sector import ResponseTimeFilterPostcodeSector  # noqa: F401,E501
from openapi_server import util


class ResponseTimeFilterPostcodeSectorsResult(Model):
    """NOTE: This class is auto generated by the swagger code generator program.

    Do not edit the class manually.
    """

    def __init__(self, search_id: str=None, sectors: List[ResponseTimeFilterPostcodeSector]=None):  # noqa: E501
        """ResponseTimeFilterPostcodeSectorsResult - a model defined in Swagger

        :param search_id: The search_id of this ResponseTimeFilterPostcodeSectorsResult.  # noqa: E501
        :type search_id: str
        :param sectors: The sectors of this ResponseTimeFilterPostcodeSectorsResult.  # noqa: E501
        :type sectors: List[ResponseTimeFilterPostcodeSector]
        """
        self.swagger_types = {
            'search_id': str,
            'sectors': List[ResponseTimeFilterPostcodeSector]
        }

        self.attribute_map = {
            'search_id': 'search_id',
            'sectors': 'sectors'
        }

        self._search_id = search_id
        self._sectors = sectors

    @classmethod
    def from_dict(cls, dikt) -> 'ResponseTimeFilterPostcodeSectorsResult':
        """Returns the dict as a model

        :param dikt: A dict.
        :type: dict
        :return: The ResponseTimeFilterPostcodeSectorsResult of this ResponseTimeFilterPostcodeSectorsResult.  # noqa: E501
        :rtype: ResponseTimeFilterPostcodeSectorsResult
        """
        return util.deserialize_model(dikt, cls)

    @property
    def search_id(self) -> str:
        """Gets the search_id of this ResponseTimeFilterPostcodeSectorsResult.


        :return: The search_id of this ResponseTimeFilterPostcodeSectorsResult.
        :rtype: str
        """
        return self._search_id

    @search_id.setter
    def search_id(self, search_id: str):
        """Sets the search_id of this ResponseTimeFilterPostcodeSectorsResult.


        :param search_id: The search_id of this ResponseTimeFilterPostcodeSectorsResult.
        :type search_id: str
        """
        if search_id is None:
            raise ValueError("Invalid value for `search_id`, must not be `None`")  # noqa: E501

        self._search_id = search_id

    @property
    def sectors(self) -> List[ResponseTimeFilterPostcodeSector]:
        """Gets the sectors of this ResponseTimeFilterPostcodeSectorsResult.


        :return: The sectors of this ResponseTimeFilterPostcodeSectorsResult.
        :rtype: List[ResponseTimeFilterPostcodeSector]
        """
        return self._sectors

    @sectors.setter
    def sectors(self, sectors: List[ResponseTimeFilterPostcodeSector]):
        """Sets the sectors of this ResponseTimeFilterPostcodeSectorsResult.


        :param sectors: The sectors of this ResponseTimeFilterPostcodeSectorsResult.
        :type sectors: List[ResponseTimeFilterPostcodeSector]
        """
        if sectors is None:
            raise ValueError("Invalid value for `sectors`, must not be `None`")  # noqa: E501

        self._sectors = sectors
