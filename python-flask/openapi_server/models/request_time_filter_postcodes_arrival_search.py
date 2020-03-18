# coding: utf-8

from __future__ import absolute_import
from datetime import date, datetime  # noqa: F401

from typing import List, Dict  # noqa: F401

from openapi_server.models.base_model_ import Model
from openapi_server.models.request_range_full import RequestRangeFull
from openapi_server.models.request_time_filter_postcodes_property import RequestTimeFilterPostcodesProperty
from openapi_server.models.request_transportation import RequestTransportation
from openapi_server import util

from openapi_server.models.request_range_full import RequestRangeFull  # noqa: E501
from openapi_server.models.request_time_filter_postcodes_property import RequestTimeFilterPostcodesProperty  # noqa: E501
from openapi_server.models.request_transportation import RequestTransportation  # noqa: E501

class RequestTimeFilterPostcodesArrivalSearch(Model):
    """NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).

    Do not edit the class manually.
    """

    def __init__(self, id=None, transportation=None, travel_time=None, arrival_time=None, properties=None, range=None):  # noqa: E501
        """RequestTimeFilterPostcodesArrivalSearch - a model defined in OpenAPI

        :param id: The id of this RequestTimeFilterPostcodesArrivalSearch.  # noqa: E501
        :type id: str
        :param transportation: The transportation of this RequestTimeFilterPostcodesArrivalSearch.  # noqa: E501
        :type transportation: RequestTransportation
        :param travel_time: The travel_time of this RequestTimeFilterPostcodesArrivalSearch.  # noqa: E501
        :type travel_time: int
        :param arrival_time: The arrival_time of this RequestTimeFilterPostcodesArrivalSearch.  # noqa: E501
        :type arrival_time: datetime
        :param properties: The properties of this RequestTimeFilterPostcodesArrivalSearch.  # noqa: E501
        :type properties: List[RequestTimeFilterPostcodesProperty]
        :param range: The range of this RequestTimeFilterPostcodesArrivalSearch.  # noqa: E501
        :type range: RequestRangeFull
        """
        self.openapi_types = {
            'id': str,
            'transportation': RequestTransportation,
            'travel_time': int,
            'arrival_time': datetime,
            'properties': List[RequestTimeFilterPostcodesProperty],
            'range': RequestRangeFull
        }

        self.attribute_map = {
            'id': 'id',
            'transportation': 'transportation',
            'travel_time': 'travel_time',
            'arrival_time': 'arrival_time',
            'properties': 'properties',
            'range': 'range'
        }

        self._id = id
        self._transportation = transportation
        self._travel_time = travel_time
        self._arrival_time = arrival_time
        self._properties = properties
        self._range = range

    @classmethod
    def from_dict(cls, dikt) -> 'RequestTimeFilterPostcodesArrivalSearch':
        """Returns the dict as a model

        :param dikt: A dict.
        :type: dict
        :return: The RequestTimeFilterPostcodesArrivalSearch of this RequestTimeFilterPostcodesArrivalSearch.  # noqa: E501
        :rtype: RequestTimeFilterPostcodesArrivalSearch
        """
        return util.deserialize_model(dikt, cls)

    @property
    def id(self):
        """Gets the id of this RequestTimeFilterPostcodesArrivalSearch.


        :return: The id of this RequestTimeFilterPostcodesArrivalSearch.
        :rtype: str
        """
        return self._id

    @id.setter
    def id(self, id):
        """Sets the id of this RequestTimeFilterPostcodesArrivalSearch.


        :param id: The id of this RequestTimeFilterPostcodesArrivalSearch.
        :type id: str
        """
        if id is None:
            raise ValueError("Invalid value for `id`, must not be `None`")  # noqa: E501

        self._id = id

    @property
    def transportation(self):
        """Gets the transportation of this RequestTimeFilterPostcodesArrivalSearch.


        :return: The transportation of this RequestTimeFilterPostcodesArrivalSearch.
        :rtype: RequestTransportation
        """
        return self._transportation

    @transportation.setter
    def transportation(self, transportation):
        """Sets the transportation of this RequestTimeFilterPostcodesArrivalSearch.


        :param transportation: The transportation of this RequestTimeFilterPostcodesArrivalSearch.
        :type transportation: RequestTransportation
        """
        if transportation is None:
            raise ValueError("Invalid value for `transportation`, must not be `None`")  # noqa: E501

        self._transportation = transportation

    @property
    def travel_time(self):
        """Gets the travel_time of this RequestTimeFilterPostcodesArrivalSearch.


        :return: The travel_time of this RequestTimeFilterPostcodesArrivalSearch.
        :rtype: int
        """
        return self._travel_time

    @travel_time.setter
    def travel_time(self, travel_time):
        """Sets the travel_time of this RequestTimeFilterPostcodesArrivalSearch.


        :param travel_time: The travel_time of this RequestTimeFilterPostcodesArrivalSearch.
        :type travel_time: int
        """
        if travel_time is None:
            raise ValueError("Invalid value for `travel_time`, must not be `None`")  # noqa: E501
        if travel_time is not None and travel_time > 14400:  # noqa: E501
            raise ValueError("Invalid value for `travel_time`, must be a value less than or equal to `14400`")  # noqa: E501
        if travel_time is not None and travel_time < 60:  # noqa: E501
            raise ValueError("Invalid value for `travel_time`, must be a value greater than or equal to `60`")  # noqa: E501

        self._travel_time = travel_time

    @property
    def arrival_time(self):
        """Gets the arrival_time of this RequestTimeFilterPostcodesArrivalSearch.


        :return: The arrival_time of this RequestTimeFilterPostcodesArrivalSearch.
        :rtype: datetime
        """
        return self._arrival_time

    @arrival_time.setter
    def arrival_time(self, arrival_time):
        """Sets the arrival_time of this RequestTimeFilterPostcodesArrivalSearch.


        :param arrival_time: The arrival_time of this RequestTimeFilterPostcodesArrivalSearch.
        :type arrival_time: datetime
        """
        if arrival_time is None:
            raise ValueError("Invalid value for `arrival_time`, must not be `None`")  # noqa: E501

        self._arrival_time = arrival_time

    @property
    def properties(self):
        """Gets the properties of this RequestTimeFilterPostcodesArrivalSearch.


        :return: The properties of this RequestTimeFilterPostcodesArrivalSearch.
        :rtype: List[RequestTimeFilterPostcodesProperty]
        """
        return self._properties

    @properties.setter
    def properties(self, properties):
        """Sets the properties of this RequestTimeFilterPostcodesArrivalSearch.


        :param properties: The properties of this RequestTimeFilterPostcodesArrivalSearch.
        :type properties: List[RequestTimeFilterPostcodesProperty]
        """
        if properties is None:
            raise ValueError("Invalid value for `properties`, must not be `None`")  # noqa: E501

        self._properties = properties

    @property
    def range(self):
        """Gets the range of this RequestTimeFilterPostcodesArrivalSearch.


        :return: The range of this RequestTimeFilterPostcodesArrivalSearch.
        :rtype: RequestRangeFull
        """
        return self._range

    @range.setter
    def range(self, range):
        """Sets the range of this RequestTimeFilterPostcodesArrivalSearch.


        :param range: The range of this RequestTimeFilterPostcodesArrivalSearch.
        :type range: RequestRangeFull
        """

        self._range = range
