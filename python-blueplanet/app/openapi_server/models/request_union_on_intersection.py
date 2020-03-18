# coding: utf-8

from __future__ import absolute_import
from datetime import date, datetime  # noqa: F401

from typing import List, Dict  # noqa: F401

from app.openapi_server.models.base_model_ import Model
from openapi_server import util


class RequestUnionOnIntersection(Model):
    """NOTE: This class is auto generated by the swagger code generator program.

    Do not edit the class manually.
    """

    def __init__(self, id: str=None, search_ids: List[str]=None):  # noqa: E501
        """RequestUnionOnIntersection - a model defined in Swagger

        :param id: The id of this RequestUnionOnIntersection.  # noqa: E501
        :type id: str
        :param search_ids: The search_ids of this RequestUnionOnIntersection.  # noqa: E501
        :type search_ids: List[str]
        """
        self.swagger_types = {
            'id': str,
            'search_ids': List[str]
        }

        self.attribute_map = {
            'id': 'id',
            'search_ids': 'search_ids'
        }

        self._id = id
        self._search_ids = search_ids

    @classmethod
    def from_dict(cls, dikt) -> 'RequestUnionOnIntersection':
        """Returns the dict as a model

        :param dikt: A dict.
        :type: dict
        :return: The RequestUnionOnIntersection of this RequestUnionOnIntersection.  # noqa: E501
        :rtype: RequestUnionOnIntersection
        """
        return util.deserialize_model(dikt, cls)

    @property
    def id(self) -> str:
        """Gets the id of this RequestUnionOnIntersection.


        :return: The id of this RequestUnionOnIntersection.
        :rtype: str
        """
        return self._id

    @id.setter
    def id(self, id: str):
        """Sets the id of this RequestUnionOnIntersection.


        :param id: The id of this RequestUnionOnIntersection.
        :type id: str
        """
        if id is None:
            raise ValueError("Invalid value for `id`, must not be `None`")  # noqa: E501

        self._id = id

    @property
    def search_ids(self) -> List[str]:
        """Gets the search_ids of this RequestUnionOnIntersection.


        :return: The search_ids of this RequestUnionOnIntersection.
        :rtype: List[str]
        """
        return self._search_ids

    @search_ids.setter
    def search_ids(self, search_ids: List[str]):
        """Sets the search_ids of this RequestUnionOnIntersection.


        :param search_ids: The search_ids of this RequestUnionOnIntersection.
        :type search_ids: List[str]
        """
        if search_ids is None:
            raise ValueError("Invalid value for `search_ids`, must not be `None`")  # noqa: E501

        self._search_ids = search_ids
