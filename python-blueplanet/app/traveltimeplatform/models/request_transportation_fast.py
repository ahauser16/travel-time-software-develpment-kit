# coding: utf-8

from __future__ import absolute_import
from datetime import date, datetime  # noqa: F401

from typing import List, Dict  # noqa: F401

from app.traveltimeplatform.models.base_model_ import Model
from traveltimeplatform import util


class RequestTransportationFast(Model):
    """NOTE: This class is auto generated by the swagger code generator program.

    Do not edit the class manually.
    """

    def __init__(self, type: str=None):  # noqa: E501
        """RequestTransportationFast - a model defined in Swagger

        :param type: The type of this RequestTransportationFast.  # noqa: E501
        :type type: str
        """
        self.swagger_types = {
            'type': str
        }

        self.attribute_map = {
            'type': 'type'
        }

        self._type = type

    @classmethod
    def from_dict(cls, dikt) -> 'RequestTransportationFast':
        """Returns the dict as a model

        :param dikt: A dict.
        :type: dict
        :return: The RequestTransportationFast of this RequestTransportationFast.  # noqa: E501
        :rtype: RequestTransportationFast
        """
        return util.deserialize_model(dikt, cls)

    @property
    def type(self) -> str:
        """Gets the type of this RequestTransportationFast.


        :return: The type of this RequestTransportationFast.
        :rtype: str
        """
        return self._type

    @type.setter
    def type(self, type: str):
        """Sets the type of this RequestTransportationFast.


        :param type: The type of this RequestTransportationFast.
        :type type: str
        """
        allowed_values = ["public_transport", "driving", "driving+public_transport"]  # noqa: E501
        if type not in allowed_values:
            raise ValueError(
                "Invalid value for `type` ({0}), must be one of {1}"
                .format(type, allowed_values)
            )

        self._type = type
