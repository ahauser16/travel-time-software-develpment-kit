# coding: utf-8

from __future__ import absolute_import
from datetime import date, datetime  # noqa: F401

from typing import List, Dict  # noqa: F401

from traveltimeplatform.models.base_model_ import Model
from traveltimeplatform.models.response_map_info_features import ResponseMapInfoFeatures
from traveltimeplatform import util

from traveltimeplatform.models.response_map_info_features import ResponseMapInfoFeatures  # noqa: E501

class ResponseMapInfoMap(Model):
    """NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).

    Do not edit the class manually.
    """

    def __init__(self, name=None, features=None):  # noqa: E501
        """ResponseMapInfoMap - a model defined in OpenAPI

        :param name: The name of this ResponseMapInfoMap.  # noqa: E501
        :type name: str
        :param features: The features of this ResponseMapInfoMap.  # noqa: E501
        :type features: ResponseMapInfoFeatures
        """
        self.openapi_types = {
            'name': str,
            'features': ResponseMapInfoFeatures
        }

        self.attribute_map = {
            'name': 'name',
            'features': 'features'
        }

        self._name = name
        self._features = features

    @classmethod
    def from_dict(cls, dikt) -> 'ResponseMapInfoMap':
        """Returns the dict as a model

        :param dikt: A dict.
        :type: dict
        :return: The ResponseMapInfoMap of this ResponseMapInfoMap.  # noqa: E501
        :rtype: ResponseMapInfoMap
        """
        return util.deserialize_model(dikt, cls)

    @property
    def name(self):
        """Gets the name of this ResponseMapInfoMap.


        :return: The name of this ResponseMapInfoMap.
        :rtype: str
        """
        return self._name

    @name.setter
    def name(self, name):
        """Sets the name of this ResponseMapInfoMap.


        :param name: The name of this ResponseMapInfoMap.
        :type name: str
        """
        if name is None:
            raise ValueError("Invalid value for `name`, must not be `None`")  # noqa: E501

        self._name = name

    @property
    def features(self):
        """Gets the features of this ResponseMapInfoMap.


        :return: The features of this ResponseMapInfoMap.
        :rtype: ResponseMapInfoFeatures
        """
        return self._features

    @features.setter
    def features(self, features):
        """Sets the features of this ResponseMapInfoMap.


        :param features: The features of this ResponseMapInfoMap.
        :type features: ResponseMapInfoFeatures
        """
        if features is None:
            raise ValueError("Invalid value for `features`, must not be `None`")  # noqa: E501

        self._features = features
