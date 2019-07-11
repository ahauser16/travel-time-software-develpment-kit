# coding: utf-8

from datetime import date, datetime

from typing import List, Dict, Type

from traveltimeplatform.models.base_model_ import Model
from traveltimeplatform.models.request_time_filter_postcode_sectors_arrival_search import RequestTimeFilterPostcodeSectorsArrivalSearch
from traveltimeplatform.models.request_time_filter_postcode_sectors_departure_search import RequestTimeFilterPostcodeSectorsDepartureSearch
from traveltimeplatform import util


class RequestTimeFilterPostcodeSectors(Model):
    """NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).

    Do not edit the class manually.
    """

    def __init__(self, departure_searches: List[RequestTimeFilterPostcodeSectorsDepartureSearch]=None, arrival_searches: List[RequestTimeFilterPostcodeSectorsArrivalSearch]=None):
        """RequestTimeFilterPostcodeSectors - a model defined in OpenAPI

        :param departure_searches: The departure_searches of this RequestTimeFilterPostcodeSectors.
        :param arrival_searches: The arrival_searches of this RequestTimeFilterPostcodeSectors.
        """
        self.openapi_types = {
            'departure_searches': List[RequestTimeFilterPostcodeSectorsDepartureSearch],
            'arrival_searches': List[RequestTimeFilterPostcodeSectorsArrivalSearch]
        }

        self.attribute_map = {
            'departure_searches': 'departure_searches',
            'arrival_searches': 'arrival_searches'
        }

        self._departure_searches = departure_searches
        self._arrival_searches = arrival_searches

    @classmethod
    def from_dict(cls, dikt: dict) -> 'RequestTimeFilterPostcodeSectors':
        """Returns the dict as a model

        :param dikt: A dict.
        :return: The RequestTimeFilterPostcodeSectors of this RequestTimeFilterPostcodeSectors.
        """
        return util.deserialize_model(dikt, cls)

    @property
    def departure_searches(self):
        """Gets the departure_searches of this RequestTimeFilterPostcodeSectors.


        :return: The departure_searches of this RequestTimeFilterPostcodeSectors.
        :rtype: List[RequestTimeFilterPostcodeSectorsDepartureSearch]
        """
        return self._departure_searches

    @departure_searches.setter
    def departure_searches(self, departure_searches):
        """Sets the departure_searches of this RequestTimeFilterPostcodeSectors.


        :param departure_searches: The departure_searches of this RequestTimeFilterPostcodeSectors.
        :type departure_searches: List[RequestTimeFilterPostcodeSectorsDepartureSearch]
        """

        self._departure_searches = departure_searches

    @property
    def arrival_searches(self):
        """Gets the arrival_searches of this RequestTimeFilterPostcodeSectors.


        :return: The arrival_searches of this RequestTimeFilterPostcodeSectors.
        :rtype: List[RequestTimeFilterPostcodeSectorsArrivalSearch]
        """
        return self._arrival_searches

    @arrival_searches.setter
    def arrival_searches(self, arrival_searches):
        """Sets the arrival_searches of this RequestTimeFilterPostcodeSectors.


        :param arrival_searches: The arrival_searches of this RequestTimeFilterPostcodeSectors.
        :type arrival_searches: List[RequestTimeFilterPostcodeSectorsArrivalSearch]
        """

        self._arrival_searches = arrival_searches