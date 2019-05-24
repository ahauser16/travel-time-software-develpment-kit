# coding: utf-8

from __future__ import absolute_import
from datetime import date, datetime  # noqa: F401

from typing import List, Dict  # noqa: F401

from app.traveltimeplatform.models.base_model_ import Model
from app.traveltimeplatform.models.response_time_map_wkt_result import ResponseTimeMapWktResult  # noqa: F401,E501
from traveltimeplatform import util


class ResponseTimeMapWkt(Model):
    """NOTE: This class is auto generated by the swagger code generator program.

    Do not edit the class manually.
    """

    def __init__(self, results: List[ResponseTimeMapWktResult]=None):  # noqa: E501
        """ResponseTimeMapWkt - a model defined in Swagger

        :param results: The results of this ResponseTimeMapWkt.  # noqa: E501
        :type results: List[ResponseTimeMapWktResult]
        """
        self.swagger_types = {
            'results': List[ResponseTimeMapWktResult]
        }

        self.attribute_map = {
            'results': 'results'
        }

        self._results = results

    @classmethod
    def from_dict(cls, dikt) -> 'ResponseTimeMapWkt':
        """Returns the dict as a model

        :param dikt: A dict.
        :type: dict
        :return: The ResponseTimeMapWkt of this ResponseTimeMapWkt.  # noqa: E501
        :rtype: ResponseTimeMapWkt
        """
        return util.deserialize_model(dikt, cls)

    @property
    def results(self) -> List[ResponseTimeMapWktResult]:
        """Gets the results of this ResponseTimeMapWkt.


        :return: The results of this ResponseTimeMapWkt.
        :rtype: List[ResponseTimeMapWktResult]
        """
        return self._results

    @results.setter
    def results(self, results: List[ResponseTimeMapWktResult]):
        """Sets the results of this ResponseTimeMapWkt.


        :param results: The results of this ResponseTimeMapWkt.
        :type results: List[ResponseTimeMapWktResult]
        """
        if results is None:
            raise ValueError("Invalid value for `results`, must not be `None`")  # noqa: E501

        self._results = results
