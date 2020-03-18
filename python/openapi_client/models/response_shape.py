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

from openapi_client.configuration import Configuration


class ResponseShape(object):
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
        'shell': 'list[Coords]',
        'holes': 'list[list[Coords]]'
    }

    attribute_map = {
        'shell': 'shell',
        'holes': 'holes'
    }

    def __init__(self, shell=None, holes=None, local_vars_configuration=None):  # noqa: E501
        """ResponseShape - a model defined in OpenAPI"""  # noqa: E501
        if local_vars_configuration is None:
            local_vars_configuration = Configuration()
        self.local_vars_configuration = local_vars_configuration

        self._shell = None
        self._holes = None
        self.discriminator = None

        self.shell = shell
        self.holes = holes

    @property
    def shell(self):
        """Gets the shell of this ResponseShape.  # noqa: E501


        :return: The shell of this ResponseShape.  # noqa: E501
        :rtype: list[Coords]
        """
        return self._shell

    @shell.setter
    def shell(self, shell):
        """Sets the shell of this ResponseShape.


        :param shell: The shell of this ResponseShape.  # noqa: E501
        :type: list[Coords]
        """
        if self.local_vars_configuration.client_side_validation and shell is None:  # noqa: E501
            raise ValueError("Invalid value for `shell`, must not be `None`")  # noqa: E501

        self._shell = shell

    @property
    def holes(self):
        """Gets the holes of this ResponseShape.  # noqa: E501


        :return: The holes of this ResponseShape.  # noqa: E501
        :rtype: list[list[Coords]]
        """
        return self._holes

    @holes.setter
    def holes(self, holes):
        """Sets the holes of this ResponseShape.


        :param holes: The holes of this ResponseShape.  # noqa: E501
        :type: list[list[Coords]]
        """
        if self.local_vars_configuration.client_side_validation and holes is None:  # noqa: E501
            raise ValueError("Invalid value for `holes`, must not be `None`")  # noqa: E501

        self._holes = holes

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
        if not isinstance(other, ResponseShape):
            return False

        return self.to_dict() == other.to_dict()

    def __ne__(self, other):
        """Returns true if both objects are not equal"""
        if not isinstance(other, ResponseShape):
            return True

        return self.to_dict() != other.to_dict()
