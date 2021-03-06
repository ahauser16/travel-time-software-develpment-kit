# coding: utf-8

from datetime import date, datetime

from typing import List, Dict, Type

from openapi_server.models.base_model_ import Model
from openapi_server.models.request_range_full import RequestRangeFull
from openapi_server.models.request_time_filter_postcode_districts_property import RequestTimeFilterPostcodeDistrictsProperty
from openapi_server.models.request_transportation import RequestTransportation
from openapi_server import util


class RequestTimeFilterPostcodeDistrictsDepartureSearch(Model):
    """NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).

    Do not edit the class manually.
    """

    def __init__(self, id: str=None, transportation: RequestTransportation=None, travel_time: int=None, departure_time: datetime=None, reachable_postcodes_threshold: float=None, properties: List[RequestTimeFilterPostcodeDistrictsProperty]=None, range: RequestRangeFull=None):
        """RequestTimeFilterPostcodeDistrictsDepartureSearch - a model defined in OpenAPI

        :param id: The id of this RequestTimeFilterPostcodeDistrictsDepartureSearch.
        :param transportation: The transportation of this RequestTimeFilterPostcodeDistrictsDepartureSearch.
        :param travel_time: The travel_time of this RequestTimeFilterPostcodeDistrictsDepartureSearch.
        :param departure_time: The departure_time of this RequestTimeFilterPostcodeDistrictsDepartureSearch.
        :param reachable_postcodes_threshold: The reachable_postcodes_threshold of this RequestTimeFilterPostcodeDistrictsDepartureSearch.
        :param properties: The properties of this RequestTimeFilterPostcodeDistrictsDepartureSearch.
        :param range: The range of this RequestTimeFilterPostcodeDistrictsDepartureSearch.
        """
        self.openapi_types = {
            'id': str,
            'transportation': RequestTransportation,
            'travel_time': int,
            'departure_time': datetime,
            'reachable_postcodes_threshold': float,
            'properties': List[RequestTimeFilterPostcodeDistrictsProperty],
            'range': RequestRangeFull
        }

        self.attribute_map = {
            'id': 'id',
            'transportation': 'transportation',
            'travel_time': 'travel_time',
            'departure_time': 'departure_time',
            'reachable_postcodes_threshold': 'reachable_postcodes_threshold',
            'properties': 'properties',
            'range': 'range'
        }

        self._id = id
        self._transportation = transportation
        self._travel_time = travel_time
        self._departure_time = departure_time
        self._reachable_postcodes_threshold = reachable_postcodes_threshold
        self._properties = properties
        self._range = range

    @classmethod
    def from_dict(cls, dikt: dict) -> 'RequestTimeFilterPostcodeDistrictsDepartureSearch':
        """Returns the dict as a model

        :param dikt: A dict.
        :return: The RequestTimeFilterPostcodeDistrictsDepartureSearch of this RequestTimeFilterPostcodeDistrictsDepartureSearch.
        """
        return util.deserialize_model(dikt, cls)

    @property
    def id(self):
        """Gets the id of this RequestTimeFilterPostcodeDistrictsDepartureSearch.


        :return: The id of this RequestTimeFilterPostcodeDistrictsDepartureSearch.
        :rtype: str
        """
        return self._id

    @id.setter
    def id(self, id):
        """Sets the id of this RequestTimeFilterPostcodeDistrictsDepartureSearch.


        :param id: The id of this RequestTimeFilterPostcodeDistrictsDepartureSearch.
        :type id: str
        """
        if id is None:
            raise ValueError("Invalid value for `id`, must not be `None`")

        self._id = id

    @property
    def transportation(self):
        """Gets the transportation of this RequestTimeFilterPostcodeDistrictsDepartureSearch.


        :return: The transportation of this RequestTimeFilterPostcodeDistrictsDepartureSearch.
        :rtype: RequestTransportation
        """
        return self._transportation

    @transportation.setter
    def transportation(self, transportation):
        """Sets the transportation of this RequestTimeFilterPostcodeDistrictsDepartureSearch.


        :param transportation: The transportation of this RequestTimeFilterPostcodeDistrictsDepartureSearch.
        :type transportation: RequestTransportation
        """
        if transportation is None:
            raise ValueError("Invalid value for `transportation`, must not be `None`")

        self._transportation = transportation

    @property
    def travel_time(self):
        """Gets the travel_time of this RequestTimeFilterPostcodeDistrictsDepartureSearch.


        :return: The travel_time of this RequestTimeFilterPostcodeDistrictsDepartureSearch.
        :rtype: int
        """
        return self._travel_time

    @travel_time.setter
    def travel_time(self, travel_time):
        """Sets the travel_time of this RequestTimeFilterPostcodeDistrictsDepartureSearch.


        :param travel_time: The travel_time of this RequestTimeFilterPostcodeDistrictsDepartureSearch.
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
        """Gets the departure_time of this RequestTimeFilterPostcodeDistrictsDepartureSearch.


        :return: The departure_time of this RequestTimeFilterPostcodeDistrictsDepartureSearch.
        :rtype: datetime
        """
        return self._departure_time

    @departure_time.setter
    def departure_time(self, departure_time):
        """Sets the departure_time of this RequestTimeFilterPostcodeDistrictsDepartureSearch.


        :param departure_time: The departure_time of this RequestTimeFilterPostcodeDistrictsDepartureSearch.
        :type departure_time: datetime
        """
        if departure_time is None:
            raise ValueError("Invalid value for `departure_time`, must not be `None`")

        self._departure_time = departure_time

    @property
    def reachable_postcodes_threshold(self):
        """Gets the reachable_postcodes_threshold of this RequestTimeFilterPostcodeDistrictsDepartureSearch.


        :return: The reachable_postcodes_threshold of this RequestTimeFilterPostcodeDistrictsDepartureSearch.
        :rtype: float
        """
        return self._reachable_postcodes_threshold

    @reachable_postcodes_threshold.setter
    def reachable_postcodes_threshold(self, reachable_postcodes_threshold):
        """Sets the reachable_postcodes_threshold of this RequestTimeFilterPostcodeDistrictsDepartureSearch.


        :param reachable_postcodes_threshold: The reachable_postcodes_threshold of this RequestTimeFilterPostcodeDistrictsDepartureSearch.
        :type reachable_postcodes_threshold: float
        """
        if reachable_postcodes_threshold is None:
            raise ValueError("Invalid value for `reachable_postcodes_threshold`, must not be `None`")

        self._reachable_postcodes_threshold = reachable_postcodes_threshold

    @property
    def properties(self):
        """Gets the properties of this RequestTimeFilterPostcodeDistrictsDepartureSearch.


        :return: The properties of this RequestTimeFilterPostcodeDistrictsDepartureSearch.
        :rtype: List[RequestTimeFilterPostcodeDistrictsProperty]
        """
        return self._properties

    @properties.setter
    def properties(self, properties):
        """Sets the properties of this RequestTimeFilterPostcodeDistrictsDepartureSearch.


        :param properties: The properties of this RequestTimeFilterPostcodeDistrictsDepartureSearch.
        :type properties: List[RequestTimeFilterPostcodeDistrictsProperty]
        """
        if properties is None:
            raise ValueError("Invalid value for `properties`, must not be `None`")

        self._properties = properties

    @property
    def range(self):
        """Gets the range of this RequestTimeFilterPostcodeDistrictsDepartureSearch.


        :return: The range of this RequestTimeFilterPostcodeDistrictsDepartureSearch.
        :rtype: RequestRangeFull
        """
        return self._range

    @range.setter
    def range(self, range):
        """Sets the range of this RequestTimeFilterPostcodeDistrictsDepartureSearch.


        :param range: The range of this RequestTimeFilterPostcodeDistrictsDepartureSearch.
        :type range: RequestRangeFull
        """

        self._range = range
