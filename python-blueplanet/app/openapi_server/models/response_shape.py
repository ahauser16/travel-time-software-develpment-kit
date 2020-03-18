# coding: utf-8

from __future__ import absolute_import
from datetime import date, datetime  # noqa: F401

from typing import List, Dict  # noqa: F401

from app.openapi_server.models.base_model_ import Model
from app.openapi_server.models.coords import Coords  # noqa: F401,E501
from openapi_server import util


class ResponseShape(Model):
    """NOTE: This class is auto generated by the swagger code generator program.

    Do not edit the class manually.
    """

    def __init__(self, shell: List[Coords]=None, holes: List[List[Coords]]=None):  # noqa: E501
        """ResponseShape - a model defined in Swagger

        :param shell: The shell of this ResponseShape.  # noqa: E501
        :type shell: List[Coords]
        :param holes: The holes of this ResponseShape.  # noqa: E501
        :type holes: List[List[Coords]]
        """
        self.swagger_types = {
            'shell': List[Coords],
            'holes': List[List[Coords]]
        }

        self.attribute_map = {
            'shell': 'shell',
            'holes': 'holes'
        }

        self._shell = shell
        self._holes = holes

    @classmethod
    def from_dict(cls, dikt) -> 'ResponseShape':
        """Returns the dict as a model

        :param dikt: A dict.
        :type: dict
        :return: The ResponseShape of this ResponseShape.  # noqa: E501
        :rtype: ResponseShape
        """
        return util.deserialize_model(dikt, cls)

    @property
    def shell(self) -> List[Coords]:
        """Gets the shell of this ResponseShape.


        :return: The shell of this ResponseShape.
        :rtype: List[Coords]
        """
        return self._shell

    @shell.setter
    def shell(self, shell: List[Coords]):
        """Sets the shell of this ResponseShape.


        :param shell: The shell of this ResponseShape.
        :type shell: List[Coords]
        """
        if shell is None:
            raise ValueError("Invalid value for `shell`, must not be `None`")  # noqa: E501

        self._shell = shell

    @property
    def holes(self) -> List[List[Coords]]:
        """Gets the holes of this ResponseShape.


        :return: The holes of this ResponseShape.
        :rtype: List[List[Coords]]
        """
        return self._holes

    @holes.setter
    def holes(self, holes: List[List[Coords]]):
        """Sets the holes of this ResponseShape.


        :param holes: The holes of this ResponseShape.
        :type holes: List[List[Coords]]
        """
        if holes is None:
            raise ValueError("Invalid value for `holes`, must not be `None`")  # noqa: E501

        self._holes = holes
