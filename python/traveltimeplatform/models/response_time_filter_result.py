# coding: utf-8

"""
    TravelTime Platform API

    No description provided (generated by Openapi Generator https://github.com/openapitools/openapi-generator)  # noqa: E501

    The version of the OpenAPI document: 1.0.0
    Contact: support@igeolise.com
    Generated by: https://openapi-generator.tech
"""


import pprint
import re  # noqa: F401

import six


class ResponseTimeFilterResult(object):
    """NOTE: This class is auto generated by OpenAPI Generator.
    Ref: https://openapi-generator.tech

    Do not edit the class manually.
    """

    """
    Attributes:
      openapi_types (dict): The key is attribute name
                            and the value is attribute type.
      attribute_map (dict): The key is attribute name
                            and the value is json key in definition.
    """
    openapi_types = {
        'search_id': 'str',
        'locations': 'list[ResponseTimeFilterLocation]',
        'unreachable': 'list[str]'
    }

    attribute_map = {
        'search_id': 'search_id',
        'locations': 'locations',
        'unreachable': 'unreachable'
    }

    def __init__(self, search_id=None, locations=None, unreachable=None):  # noqa: E501
        """ResponseTimeFilterResult - a model defined in OpenAPI"""  # noqa: E501

        self._search_id = None
        self._locations = None
        self._unreachable = None
        self.discriminator = None

        self.search_id = search_id
        self.locations = locations
        self.unreachable = unreachable

    @property
    def search_id(self):
        """Gets the search_id of this ResponseTimeFilterResult.  # noqa: E501


        :return: The search_id of this ResponseTimeFilterResult.  # noqa: E501
        :rtype: str
        """
        return self._search_id

    @search_id.setter
    def search_id(self, search_id):
        """Sets the search_id of this ResponseTimeFilterResult.


        :param search_id: The search_id of this ResponseTimeFilterResult.  # noqa: E501
        :type: str
        """
        if search_id is None:
            raise ValueError("Invalid value for `search_id`, must not be `None`")  # noqa: E501

        self._search_id = search_id

    @property
    def locations(self):
        """Gets the locations of this ResponseTimeFilterResult.  # noqa: E501


        :return: The locations of this ResponseTimeFilterResult.  # noqa: E501
        :rtype: list[ResponseTimeFilterLocation]
        """
        return self._locations

    @locations.setter
    def locations(self, locations):
        """Sets the locations of this ResponseTimeFilterResult.


        :param locations: The locations of this ResponseTimeFilterResult.  # noqa: E501
        :type: list[ResponseTimeFilterLocation]
        """
        if locations is None:
            raise ValueError("Invalid value for `locations`, must not be `None`")  # noqa: E501

        self._locations = locations

    @property
    def unreachable(self):
        """Gets the unreachable of this ResponseTimeFilterResult.  # noqa: E501


        :return: The unreachable of this ResponseTimeFilterResult.  # noqa: E501
        :rtype: list[str]
        """
        return self._unreachable

    @unreachable.setter
    def unreachable(self, unreachable):
        """Sets the unreachable of this ResponseTimeFilterResult.


        :param unreachable: The unreachable of this ResponseTimeFilterResult.  # noqa: E501
        :type: list[str]
        """
        if unreachable is None:
            raise ValueError("Invalid value for `unreachable`, must not be `None`")  # noqa: E501

        self._unreachable = unreachable

    def to_dict(self):
        """Returns the model properties as a dict"""
        result = {}

        for attr, _ in six.iteritems(self.openapi_types):
            value = getattr(self, attr)
            if isinstance(value, list):
                result[attr] = list(map(
                    lambda x: x.to_dict() if hasattr(x, "to_dict") else x,
                    value
                ))
            elif hasattr(value, "to_dict"):
                result[attr] = value.to_dict()
            elif isinstance(value, dict):
                result[attr] = dict(map(
                    lambda item: (item[0], item[1].to_dict())
                    if hasattr(item[1], "to_dict") else item,
                    value.items()
                ))
            else:
                result[attr] = value

        return result

    def to_str(self):
        """Returns the string representation of the model"""
        return pprint.pformat(self.to_dict())

    def __repr__(self):
        """For `print` and `pprint`"""
        return self.to_str()

    def __eq__(self, other):
        """Returns true if both objects are equal"""
        if not isinstance(other, ResponseTimeFilterResult):
            return False

        return self.__dict__ == other.__dict__

    def __ne__(self, other):
        """Returns true if both objects are not equal"""
        return not self == other
