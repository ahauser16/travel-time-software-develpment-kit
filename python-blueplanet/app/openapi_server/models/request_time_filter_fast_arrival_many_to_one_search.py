# coding: utf-8

from __future__ import absolute_import
from datetime import date, datetime  # noqa: F401

from typing import List, Dict  # noqa: F401

from app.openapi_server.models.base_model_ import Model
from app.openapi_server.models.request_arrival_time_period import RequestArrivalTimePeriod  # noqa: F401,E501
from app.openapi_server.models.request_time_filter_fast_property import RequestTimeFilterFastProperty  # noqa: F401,E501
from app.openapi_server.models.request_transportation_fast import RequestTransportationFast  # noqa: F401,E501
from openapi_server import util


class RequestTimeFilterFastArrivalManyToOneSearch(Model):
    """NOTE: This class is auto generated by the swagger code generator program.

    Do not edit the class manually.
    """

    def __init__(self, id: str=None, arrival_location_id: str=None, departure_location_ids: List[str]=None, transportation: RequestTransportationFast=None, travel_time: int=None, arrival_time_period: RequestArrivalTimePeriod=None, properties: List[RequestTimeFilterFastProperty]=None):  # noqa: E501
        """RequestTimeFilterFastArrivalManyToOneSearch - a model defined in Swagger

        :param id: The id of this RequestTimeFilterFastArrivalManyToOneSearch.  # noqa: E501
        :type id: str
        :param arrival_location_id: The arrival_location_id of this RequestTimeFilterFastArrivalManyToOneSearch.  # noqa: E501
        :type arrival_location_id: str
        :param departure_location_ids: The departure_location_ids of this RequestTimeFilterFastArrivalManyToOneSearch.  # noqa: E501
        :type departure_location_ids: List[str]
        :param transportation: The transportation of this RequestTimeFilterFastArrivalManyToOneSearch.  # noqa: E501
        :type transportation: RequestTransportationFast
        :param travel_time: The travel_time of this RequestTimeFilterFastArrivalManyToOneSearch.  # noqa: E501
        :type travel_time: int
        :param arrival_time_period: The arrival_time_period of this RequestTimeFilterFastArrivalManyToOneSearch.  # noqa: E501
        :type arrival_time_period: RequestArrivalTimePeriod
        :param properties: The properties of this RequestTimeFilterFastArrivalManyToOneSearch.  # noqa: E501
        :type properties: List[RequestTimeFilterFastProperty]
        """
        self.swagger_types = {
            'id': str,
            'arrival_location_id': str,
            'departure_location_ids': List[str],
            'transportation': RequestTransportationFast,
            'travel_time': int,
            'arrival_time_period': RequestArrivalTimePeriod,
            'properties': List[RequestTimeFilterFastProperty]
        }

        self.attribute_map = {
            'id': 'id',
            'arrival_location_id': 'arrival_location_id',
            'departure_location_ids': 'departure_location_ids',
            'transportation': 'transportation',
            'travel_time': 'travel_time',
            'arrival_time_period': 'arrival_time_period',
            'properties': 'properties'
        }

        self._id = id
        self._arrival_location_id = arrival_location_id
        self._departure_location_ids = departure_location_ids
        self._transportation = transportation
        self._travel_time = travel_time
        self._arrival_time_period = arrival_time_period
        self._properties = properties

    @classmethod
    def from_dict(cls, dikt) -> 'RequestTimeFilterFastArrivalManyToOneSearch':
        """Returns the dict as a model

        :param dikt: A dict.
        :type: dict
        :return: The RequestTimeFilterFastArrivalManyToOneSearch of this RequestTimeFilterFastArrivalManyToOneSearch.  # noqa: E501
        :rtype: RequestTimeFilterFastArrivalManyToOneSearch
        """
        return util.deserialize_model(dikt, cls)

    @property
    def id(self) -> str:
        """Gets the id of this RequestTimeFilterFastArrivalManyToOneSearch.


        :return: The id of this RequestTimeFilterFastArrivalManyToOneSearch.
        :rtype: str
        """
        return self._id

    @id.setter
    def id(self, id: str):
        """Sets the id of this RequestTimeFilterFastArrivalManyToOneSearch.


        :param id: The id of this RequestTimeFilterFastArrivalManyToOneSearch.
        :type id: str
        """
        if id is None:
            raise ValueError("Invalid value for `id`, must not be `None`")  # noqa: E501

        self._id = id

    @property
    def arrival_location_id(self) -> str:
        """Gets the arrival_location_id of this RequestTimeFilterFastArrivalManyToOneSearch.


        :return: The arrival_location_id of this RequestTimeFilterFastArrivalManyToOneSearch.
        :rtype: str
        """
        return self._arrival_location_id

    @arrival_location_id.setter
    def arrival_location_id(self, arrival_location_id: str):
        """Sets the arrival_location_id of this RequestTimeFilterFastArrivalManyToOneSearch.


        :param arrival_location_id: The arrival_location_id of this RequestTimeFilterFastArrivalManyToOneSearch.
        :type arrival_location_id: str
        """
        if arrival_location_id is None:
            raise ValueError("Invalid value for `arrival_location_id`, must not be `None`")  # noqa: E501

        self._arrival_location_id = arrival_location_id

    @property
    def departure_location_ids(self) -> List[str]:
        """Gets the departure_location_ids of this RequestTimeFilterFastArrivalManyToOneSearch.


        :return: The departure_location_ids of this RequestTimeFilterFastArrivalManyToOneSearch.
        :rtype: List[str]
        """
        return self._departure_location_ids

    @departure_location_ids.setter
    def departure_location_ids(self, departure_location_ids: List[str]):
        """Sets the departure_location_ids of this RequestTimeFilterFastArrivalManyToOneSearch.


        :param departure_location_ids: The departure_location_ids of this RequestTimeFilterFastArrivalManyToOneSearch.
        :type departure_location_ids: List[str]
        """
        if departure_location_ids is None:
            raise ValueError("Invalid value for `departure_location_ids`, must not be `None`")  # noqa: E501

        self._departure_location_ids = departure_location_ids

    @property
    def transportation(self) -> RequestTransportationFast:
        """Gets the transportation of this RequestTimeFilterFastArrivalManyToOneSearch.


        :return: The transportation of this RequestTimeFilterFastArrivalManyToOneSearch.
        :rtype: RequestTransportationFast
        """
        return self._transportation

    @transportation.setter
    def transportation(self, transportation: RequestTransportationFast):
        """Sets the transportation of this RequestTimeFilterFastArrivalManyToOneSearch.


        :param transportation: The transportation of this RequestTimeFilterFastArrivalManyToOneSearch.
        :type transportation: RequestTransportationFast
        """
        if transportation is None:
            raise ValueError("Invalid value for `transportation`, must not be `None`")  # noqa: E501

        self._transportation = transportation

    @property
    def travel_time(self) -> int:
        """Gets the travel_time of this RequestTimeFilterFastArrivalManyToOneSearch.


        :return: The travel_time of this RequestTimeFilterFastArrivalManyToOneSearch.
        :rtype: int
        """
        return self._travel_time

    @travel_time.setter
    def travel_time(self, travel_time: int):
        """Sets the travel_time of this RequestTimeFilterFastArrivalManyToOneSearch.


        :param travel_time: The travel_time of this RequestTimeFilterFastArrivalManyToOneSearch.
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
    def arrival_time_period(self) -> RequestArrivalTimePeriod:
        """Gets the arrival_time_period of this RequestTimeFilterFastArrivalManyToOneSearch.


        :return: The arrival_time_period of this RequestTimeFilterFastArrivalManyToOneSearch.
        :rtype: RequestArrivalTimePeriod
        """
        return self._arrival_time_period

    @arrival_time_period.setter
    def arrival_time_period(self, arrival_time_period: RequestArrivalTimePeriod):
        """Sets the arrival_time_period of this RequestTimeFilterFastArrivalManyToOneSearch.


        :param arrival_time_period: The arrival_time_period of this RequestTimeFilterFastArrivalManyToOneSearch.
        :type arrival_time_period: RequestArrivalTimePeriod
        """
        if arrival_time_period is None:
            raise ValueError("Invalid value for `arrival_time_period`, must not be `None`")  # noqa: E501

        self._arrival_time_period = arrival_time_period

    @property
    def properties(self) -> List[RequestTimeFilterFastProperty]:
        """Gets the properties of this RequestTimeFilterFastArrivalManyToOneSearch.


        :return: The properties of this RequestTimeFilterFastArrivalManyToOneSearch.
        :rtype: List[RequestTimeFilterFastProperty]
        """
        return self._properties

    @properties.setter
    def properties(self, properties: List[RequestTimeFilterFastProperty]):
        """Sets the properties of this RequestTimeFilterFastArrivalManyToOneSearch.


        :param properties: The properties of this RequestTimeFilterFastArrivalManyToOneSearch.
        :type properties: List[RequestTimeFilterFastProperty]
        """
        if properties is None:
            raise ValueError("Invalid value for `properties`, must not be `None`")  # noqa: E501

        self._properties = properties
