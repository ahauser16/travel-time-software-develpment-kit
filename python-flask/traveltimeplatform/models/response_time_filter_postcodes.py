# coding: utf-8

from __future__ import absolute_import
from datetime import date, datetime  # noqa: F401

from typing import List, Dict  # noqa: F401

from traveltimeplatform.models.base_model_ import Model
from traveltimeplatform.models.response_time_filter_postcodes_result import ResponseTimeFilterPostcodesResult
from traveltimeplatform import util

from traveltimeplatform.models.response_time_filter_postcodes_result import ResponseTimeFilterPostcodesResult  # noqa: E501

class ResponseTimeFilterPostcodes(Model):
    """NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).

    Do not edit the class manually.
    """

    def __init__(self, results=None):  # noqa: E501
        """ResponseTimeFilterPostcodes - a model defined in OpenAPI

        :param results: The results of this ResponseTimeFilterPostcodes.  # noqa: E501
        :type results: List[ResponseTimeFilterPostcodesResult]
        """
        self.openapi_types = {
            'results': List[ResponseTimeFilterPostcodesResult]
        }

        self.attribute_map = {
            'results': 'results'
        }

        self._results = results

    @classmethod
    def from_dict(cls, dikt) -> 'ResponseTimeFilterPostcodes':
        """Returns the dict as a model

        :param dikt: A dict.
        :type: dict
        :return: The ResponseTimeFilterPostcodes of this ResponseTimeFilterPostcodes.  # noqa: E501
        :rtype: ResponseTimeFilterPostcodes
        """
        return util.deserialize_model(dikt, cls)

    @property
    def results(self):
        """Gets the results of this ResponseTimeFilterPostcodes.


        :return: The results of this ResponseTimeFilterPostcodes.
        :rtype: List[ResponseTimeFilterPostcodesResult]
        """
        return self._results

    @results.setter
    def results(self, results):
        """Sets the results of this ResponseTimeFilterPostcodes.


        :param results: The results of this ResponseTimeFilterPostcodes.
        :type results: List[ResponseTimeFilterPostcodesResult]
        """
        if results is None:
            raise ValueError("Invalid value for `results`, must not be `None`")  # noqa: E501

        self._results = results
