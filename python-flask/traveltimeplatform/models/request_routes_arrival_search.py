# coding: utf-8

from __future__ import absolute_import
from datetime import date, datetime  # noqa: F401

from typing import List, Dict  # noqa: F401

from traveltimeplatform.models.base_model_ import Model
from traveltimeplatform.models.request_range_full import RequestRangeFull
from traveltimeplatform.models.request_routes_property import RequestRoutesProperty
from traveltimeplatform.models.request_transportation import RequestTransportation
from traveltimeplatform import util

from traveltimeplatform.models.request_range_full import RequestRangeFull  # noqa: E501
from traveltimeplatform.models.request_routes_property import RequestRoutesProperty  # noqa: E501
from traveltimeplatform.models.request_transportation import RequestTransportation  # noqa: E501

class RequestRoutesArrivalSearch(Model):
    """NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).

    Do not edit the class manually.
    """

    def __init__(self, id=None, departure_location_ids=None, arrival_location_id=None, transportation=None, arrival_time=None, properties=None, range=None):  # noqa: E501
        """RequestRoutesArrivalSearch - a model defined in OpenAPI

        :param id: The id of this RequestRoutesArrivalSearch.  # noqa: E501
        :type id: str
        :param departure_location_ids: The departure_location_ids of this RequestRoutesArrivalSearch.  # noqa: E501
        :type departure_location_ids: List[str]
        :param arrival_location_id: The arrival_location_id of this RequestRoutesArrivalSearch.  # noqa: E501
        :type arrival_location_id: str
        :param transportation: The transportation of this RequestRoutesArrivalSearch.  # noqa: E501
        :type transportation: RequestTransportation
        :param arrival_time: The arrival_time of this RequestRoutesArrivalSearch.  # noqa: E501
        :type arrival_time: datetime
        :param properties: The properties of this RequestRoutesArrivalSearch.  # noqa: E501
        :type properties: List[RequestRoutesProperty]
        :param range: The range of this RequestRoutesArrivalSearch.  # noqa: E501
        :type range: RequestRangeFull
        """
        self.openapi_types = {
            'id': str,
            'departure_location_ids': List[str],
            'arrival_location_id': str,
            'transportation': RequestTransportation,
            'arrival_time': datetime,
            'properties': List[RequestRoutesProperty],
            'range': RequestRangeFull
        }

        self.attribute_map = {
            'id': 'id',
            'departure_location_ids': 'departure_location_ids',
            'arrival_location_id': 'arrival_location_id',
            'transportation': 'transportation',
            'arrival_time': 'arrival_time',
            'properties': 'properties',
            'range': 'range'
        }

        self._id = id
        self._departure_location_ids = departure_location_ids
        self._arrival_location_id = arrival_location_id
        self._transportation = transportation
        self._arrival_time = arrival_time
        self._properties = properties
        self._range = range

    @classmethod
    def from_dict(cls, dikt) -> 'RequestRoutesArrivalSearch':
        """Returns the dict as a model

        :param dikt: A dict.
        :type: dict
        :return: The RequestRoutesArrivalSearch of this RequestRoutesArrivalSearch.  # noqa: E501
        :rtype: RequestRoutesArrivalSearch
        """
        return util.deserialize_model(dikt, cls)

    @property
    def id(self):
        """Gets the id of this RequestRoutesArrivalSearch.


        :return: The id of this RequestRoutesArrivalSearch.
        :rtype: str
        """
        return self._id

    @id.setter
    def id(self, id):
        """Sets the id of this RequestRoutesArrivalSearch.


        :param id: The id of this RequestRoutesArrivalSearch.
        :type id: str
        """
        if id is None:
            raise ValueError("Invalid value for `id`, must not be `None`")  # noqa: E501

        self._id = id

    @property
    def departure_location_ids(self):
        """Gets the departure_location_ids of this RequestRoutesArrivalSearch.


        :return: The departure_location_ids of this RequestRoutesArrivalSearch.
        :rtype: List[str]
        """
        return self._departure_location_ids

    @departure_location_ids.setter
    def departure_location_ids(self, departure_location_ids):
        """Sets the departure_location_ids of this RequestRoutesArrivalSearch.


        :param departure_location_ids: The departure_location_ids of this RequestRoutesArrivalSearch.
        :type departure_location_ids: List[str]
        """
        if departure_location_ids is None:
            raise ValueError("Invalid value for `departure_location_ids`, must not be `None`")  # noqa: E501

        self._departure_location_ids = departure_location_ids

    @property
    def arrival_location_id(self):
        """Gets the arrival_location_id of this RequestRoutesArrivalSearch.


        :return: The arrival_location_id of this RequestRoutesArrivalSearch.
        :rtype: str
        """
        return self._arrival_location_id

    @arrival_location_id.setter
    def arrival_location_id(self, arrival_location_id):
        """Sets the arrival_location_id of this RequestRoutesArrivalSearch.


        :param arrival_location_id: The arrival_location_id of this RequestRoutesArrivalSearch.
        :type arrival_location_id: str
        """
        if arrival_location_id is None:
            raise ValueError("Invalid value for `arrival_location_id`, must not be `None`")  # noqa: E501

        self._arrival_location_id = arrival_location_id

    @property
    def transportation(self):
        """Gets the transportation of this RequestRoutesArrivalSearch.


        :return: The transportation of this RequestRoutesArrivalSearch.
        :rtype: RequestTransportation
        """
        return self._transportation

    @transportation.setter
    def transportation(self, transportation):
        """Sets the transportation of this RequestRoutesArrivalSearch.


        :param transportation: The transportation of this RequestRoutesArrivalSearch.
        :type transportation: RequestTransportation
        """
        if transportation is None:
            raise ValueError("Invalid value for `transportation`, must not be `None`")  # noqa: E501

        self._transportation = transportation

    @property
    def arrival_time(self):
        """Gets the arrival_time of this RequestRoutesArrivalSearch.


        :return: The arrival_time of this RequestRoutesArrivalSearch.
        :rtype: datetime
        """
        return self._arrival_time

    @arrival_time.setter
    def arrival_time(self, arrival_time):
        """Sets the arrival_time of this RequestRoutesArrivalSearch.


        :param arrival_time: The arrival_time of this RequestRoutesArrivalSearch.
        :type arrival_time: datetime
        """
        if arrival_time is None:
            raise ValueError("Invalid value for `arrival_time`, must not be `None`")  # noqa: E501

        self._arrival_time = arrival_time

    @property
    def properties(self):
        """Gets the properties of this RequestRoutesArrivalSearch.


        :return: The properties of this RequestRoutesArrivalSearch.
        :rtype: List[RequestRoutesProperty]
        """
        return self._properties

    @properties.setter
    def properties(self, properties):
        """Sets the properties of this RequestRoutesArrivalSearch.


        :param properties: The properties of this RequestRoutesArrivalSearch.
        :type properties: List[RequestRoutesProperty]
        """
        if properties is None:
            raise ValueError("Invalid value for `properties`, must not be `None`")  # noqa: E501

        self._properties = properties

    @property
    def range(self):
        """Gets the range of this RequestRoutesArrivalSearch.


        :return: The range of this RequestRoutesArrivalSearch.
        :rtype: RequestRangeFull
        """
        return self._range

    @range.setter
    def range(self, range):
        """Sets the range of this RequestRoutesArrivalSearch.


        :param range: The range of this RequestRoutesArrivalSearch.
        :type range: RequestRangeFull
        """

        self._range = range
