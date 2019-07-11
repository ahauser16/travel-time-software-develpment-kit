# coding: utf-8

from __future__ import absolute_import
from datetime import date, datetime  # noqa: F401

from typing import List, Dict  # noqa: F401

from app.traveltimeplatform.models.base_model_ import Model
from traveltimeplatform import util


class RequestTimeFilterPostcodesProperty(Model):
    """NOTE: This class is auto generated by the swagger code generator program.

    Do not edit the class manually.
    """

    """
    allowed enum values
    """
    TRAVEL_TIME = "travel_time"
    DISTANCE = "distance"

    def __init__(self):  # noqa: E501
        """RequestTimeFilterPostcodesProperty - a model defined in Swagger

        """
        self.swagger_types = {
        }

        self.attribute_map = {
        }

    @classmethod
    def from_dict(cls, dikt) -> 'RequestTimeFilterPostcodesProperty':
        """Returns the dict as a model

        :param dikt: A dict.
        :type: dict
        :return: The RequestTimeFilterPostcodesProperty of this RequestTimeFilterPostcodesProperty.  # noqa: E501
        :rtype: RequestTimeFilterPostcodesProperty
        """
        return util.deserialize_model(dikt, cls)