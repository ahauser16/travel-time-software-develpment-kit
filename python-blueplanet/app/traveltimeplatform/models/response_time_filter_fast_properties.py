# coding: utf-8

from __future__ import absolute_import
from datetime import date, datetime  # noqa: F401

from typing import List, Dict  # noqa: F401

from app.traveltimeplatform.models.base_model_ import Model
from app.traveltimeplatform.models.response_fares_fast import ResponseFaresFast  # noqa: F401,E501
from traveltimeplatform import util


class ResponseTimeFilterFastProperties(Model):
    """NOTE: This class is auto generated by the swagger code generator program.

    Do not edit the class manually.
    """

    def __init__(self, travel_time: int=None, fares: ResponseFaresFast=None):  # noqa: E501
        """ResponseTimeFilterFastProperties - a model defined in Swagger

        :param travel_time: The travel_time of this ResponseTimeFilterFastProperties.  # noqa: E501
        :type travel_time: int
        :param fares: The fares of this ResponseTimeFilterFastProperties.  # noqa: E501
        :type fares: ResponseFaresFast
        """
        self.swagger_types = {
            'travel_time': int,
            'fares': ResponseFaresFast
        }

        self.attribute_map = {
            'travel_time': 'travel_time',
            'fares': 'fares'
        }

        self._travel_time = travel_time
        self._fares = fares

    @classmethod
    def from_dict(cls, dikt) -> 'ResponseTimeFilterFastProperties':
        """Returns the dict as a model

        :param dikt: A dict.
        :type: dict
        :return: The ResponseTimeFilterFastProperties of this ResponseTimeFilterFastProperties.  # noqa: E501
        :rtype: ResponseTimeFilterFastProperties
        """
        return util.deserialize_model(dikt, cls)

    @property
    def travel_time(self) -> int:
        """Gets the travel_time of this ResponseTimeFilterFastProperties.


        :return: The travel_time of this ResponseTimeFilterFastProperties.
        :rtype: int
        """
        return self._travel_time

    @travel_time.setter
    def travel_time(self, travel_time: int):
        """Sets the travel_time of this ResponseTimeFilterFastProperties.


        :param travel_time: The travel_time of this ResponseTimeFilterFastProperties.
        :type travel_time: int
        """

        self._travel_time = travel_time

    @property
    def fares(self) -> ResponseFaresFast:
        """Gets the fares of this ResponseTimeFilterFastProperties.


        :return: The fares of this ResponseTimeFilterFastProperties.
        :rtype: ResponseFaresFast
        """
        return self._fares

    @fares.setter
    def fares(self, fares: ResponseFaresFast):
        """Sets the fares of this ResponseTimeFilterFastProperties.


        :param fares: The fares of this ResponseTimeFilterFastProperties.
        :type fares: ResponseFaresFast
        """

        self._fares = fares
