# coding: utf-8

from datetime import date, datetime

from typing import List, Dict, Type

from traveltimeplatform.models.base_model_ import Model
from traveltimeplatform import util


class RequestTimeFilterPostcodeSectorsProperty(Model):
    """NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).

    Do not edit the class manually.
    """

    """
    allowed enum values
    """
    TRAVEL_TIME_REACHABLE = "travel_time_reachable"
    TRAVEL_TIME_ALL = "travel_time_all"
    COVERAGE = "coverage"

    def __init__(self):
        """RequestTimeFilterPostcodeSectorsProperty - a model defined in OpenAPI

        """
        self.openapi_types = {
        }

        self.attribute_map = {
        }

    @classmethod
    def from_dict(cls, dikt: dict) -> 'RequestTimeFilterPostcodeSectorsProperty':
        """Returns the dict as a model

        :param dikt: A dict.
        :return: The RequestTimeFilterPostcodeSectorsProperty of this RequestTimeFilterPostcodeSectorsProperty.
        """
        return util.deserialize_model(dikt, cls)
