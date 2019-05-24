# coding: utf-8

from datetime import date, datetime

from typing import List, Dict, Type

from traveltimeplatform.models.base_model_ import Model
from traveltimeplatform.models.coords import Coords
from traveltimeplatform.models.request_range_no_max_results import RequestRangeNoMaxResults
from traveltimeplatform.models.request_time_map_property import RequestTimeMapProperty
from traveltimeplatform.models.request_transportation import RequestTransportation
from traveltimeplatform import util


class RequestTimeMapDepartureSearch(Model):
    """NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).

    Do not edit the class manually.
    """

    def __init__(self, id: str=None, coords: Coords=None, transportation: RequestTransportation=None, travel_time: int=None, departure_time: datetime=None, properties: List[RequestTimeMapProperty]=None, range: RequestRangeNoMaxResults=None):
        """RequestTimeMapDepartureSearch - a model defined in OpenAPI

        :param id: The id of this RequestTimeMapDepartureSearch.
        :param coords: The coords of this RequestTimeMapDepartureSearch.
        :param transportation: The transportation of this RequestTimeMapDepartureSearch.
        :param travel_time: The travel_time of this RequestTimeMapDepartureSearch.
        :param departure_time: The departure_time of this RequestTimeMapDepartureSearch.
        :param properties: The properties of this RequestTimeMapDepartureSearch.
        :param range: The range of this RequestTimeMapDepartureSearch.
        """
        self.openapi_types = {
            'id': str,
            'coords': Coords,
            'transportation': RequestTransportation,
            'travel_time': int,
            'departure_time': datetime,
            'properties': List[RequestTimeMapProperty],
            'range': RequestRangeNoMaxResults
        }

        self.attribute_map = {
            'id': 'id',
            'coords': 'coords',
            'transportation': 'transportation',
            'travel_time': 'travel_time',
            'departure_time': 'departure_time',
            'properties': 'properties',
            'range': 'range'
        }

        self._id = id
        self._coords = coords
        self._transportation = transportation
        self._travel_time = travel_time
        self._departure_time = departure_time
        self._properties = properties
        self._range = range

    @classmethod
    def from_dict(cls, dikt: dict) -> 'RequestTimeMapDepartureSearch':
        """Returns the dict as a model

        :param dikt: A dict.
        :return: The RequestTimeMapDepartureSearch of this RequestTimeMapDepartureSearch.
        """
        return util.deserialize_model(dikt, cls)

    @property
    def id(self):
        """Gets the id of this RequestTimeMapDepartureSearch.


        :return: The id of this RequestTimeMapDepartureSearch.
        :rtype: str
        """
        return self._id

    @id.setter
    def id(self, id):
        """Sets the id of this RequestTimeMapDepartureSearch.


        :param id: The id of this RequestTimeMapDepartureSearch.
        :type id: str
        """
        if id is None:
            raise ValueError("Invalid value for `id`, must not be `None`")

        self._id = id

    @property
    def coords(self):
        """Gets the coords of this RequestTimeMapDepartureSearch.


        :return: The coords of this RequestTimeMapDepartureSearch.
        :rtype: Coords
        """
        return self._coords

    @coords.setter
    def coords(self, coords):
        """Sets the coords of this RequestTimeMapDepartureSearch.


        :param coords: The coords of this RequestTimeMapDepartureSearch.
        :type coords: Coords
        """
        if coords is None:
            raise ValueError("Invalid value for `coords`, must not be `None`")

        self._coords = coords

    @property
    def transportation(self):
        """Gets the transportation of this RequestTimeMapDepartureSearch.


        :return: The transportation of this RequestTimeMapDepartureSearch.
        :rtype: RequestTransportation
        """
        return self._transportation

    @transportation.setter
    def transportation(self, transportation):
        """Sets the transportation of this RequestTimeMapDepartureSearch.


        :param transportation: The transportation of this RequestTimeMapDepartureSearch.
        :type transportation: RequestTransportation
        """
        if transportation is None:
            raise ValueError("Invalid value for `transportation`, must not be `None`")

        self._transportation = transportation

    @property
    def travel_time(self):
        """Gets the travel_time of this RequestTimeMapDepartureSearch.


        :return: The travel_time of this RequestTimeMapDepartureSearch.
        :rtype: int
        """
        return self._travel_time

    @travel_time.setter
    def travel_time(self, travel_time):
        """Sets the travel_time of this RequestTimeMapDepartureSearch.


        :param travel_time: The travel_time of this RequestTimeMapDepartureSearch.
        :type travel_time: int
        """
        if travel_time is None:
            raise ValueError("Invalid value for `travel_time`, must not be `None`")
        if travel_time is not None and travel_time > 14400:
            raise ValueError("Invalid value for `travel_time`, must be a value less than or equal to `14400`")
        if travel_time is not None and travel_time < 60:
            raise ValueError("Invalid value for `travel_time`, must be a value greater than or equal to `60`")

        self._travel_time = travel_time

    @property
    def departure_time(self):
        """Gets the departure_time of this RequestTimeMapDepartureSearch.


        :return: The departure_time of this RequestTimeMapDepartureSearch.
        :rtype: datetime
        """
        return self._departure_time

    @departure_time.setter
    def departure_time(self, departure_time):
        """Sets the departure_time of this RequestTimeMapDepartureSearch.


        :param departure_time: The departure_time of this RequestTimeMapDepartureSearch.
        :type departure_time: datetime
        """
        if departure_time is None:
            raise ValueError("Invalid value for `departure_time`, must not be `None`")

        self._departure_time = departure_time

    @property
    def properties(self):
        """Gets the properties of this RequestTimeMapDepartureSearch.


        :return: The properties of this RequestTimeMapDepartureSearch.
        :rtype: List[RequestTimeMapProperty]
        """
        return self._properties

    @properties.setter
    def properties(self, properties):
        """Sets the properties of this RequestTimeMapDepartureSearch.


        :param properties: The properties of this RequestTimeMapDepartureSearch.
        :type properties: List[RequestTimeMapProperty]
        """

        self._properties = properties

    @property
    def range(self):
        """Gets the range of this RequestTimeMapDepartureSearch.


        :return: The range of this RequestTimeMapDepartureSearch.
        :rtype: RequestRangeNoMaxResults
        """
        return self._range

    @range.setter
    def range(self, range):
        """Sets the range of this RequestTimeMapDepartureSearch.


        :param range: The range of this RequestTimeMapDepartureSearch.
        :type range: RequestRangeNoMaxResults
        """

        self._range = range
