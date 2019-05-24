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


class ResponseTimeFilterProperties(object):
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
        'travel_time': 'int',
        'distance': 'int',
        'distance_breakdown': 'list[ResponseDistanceBreakdownItem]',
        'fares': 'ResponseFares',
        'route': 'ResponseRoute'
    }

    attribute_map = {
        'travel_time': 'travel_time',
        'distance': 'distance',
        'distance_breakdown': 'distance_breakdown',
        'fares': 'fares',
        'route': 'route'
    }

    def __init__(self, travel_time=None, distance=None, distance_breakdown=None, fares=None, route=None):  # noqa: E501
        """ResponseTimeFilterProperties - a model defined in OpenAPI"""  # noqa: E501

        self._travel_time = None
        self._distance = None
        self._distance_breakdown = None
        self._fares = None
        self._route = None
        self.discriminator = None

        if travel_time is not None:
            self.travel_time = travel_time
        if distance is not None:
            self.distance = distance
        if distance_breakdown is not None:
            self.distance_breakdown = distance_breakdown
        if fares is not None:
            self.fares = fares
        if route is not None:
            self.route = route

    @property
    def travel_time(self):
        """Gets the travel_time of this ResponseTimeFilterProperties.  # noqa: E501


        :return: The travel_time of this ResponseTimeFilterProperties.  # noqa: E501
        :rtype: int
        """
        return self._travel_time

    @travel_time.setter
    def travel_time(self, travel_time):
        """Sets the travel_time of this ResponseTimeFilterProperties.


        :param travel_time: The travel_time of this ResponseTimeFilterProperties.  # noqa: E501
        :type: int
        """

        self._travel_time = travel_time

    @property
    def distance(self):
        """Gets the distance of this ResponseTimeFilterProperties.  # noqa: E501


        :return: The distance of this ResponseTimeFilterProperties.  # noqa: E501
        :rtype: int
        """
        return self._distance

    @distance.setter
    def distance(self, distance):
        """Sets the distance of this ResponseTimeFilterProperties.


        :param distance: The distance of this ResponseTimeFilterProperties.  # noqa: E501
        :type: int
        """

        self._distance = distance

    @property
    def distance_breakdown(self):
        """Gets the distance_breakdown of this ResponseTimeFilterProperties.  # noqa: E501


        :return: The distance_breakdown of this ResponseTimeFilterProperties.  # noqa: E501
        :rtype: list[ResponseDistanceBreakdownItem]
        """
        return self._distance_breakdown

    @distance_breakdown.setter
    def distance_breakdown(self, distance_breakdown):
        """Sets the distance_breakdown of this ResponseTimeFilterProperties.


        :param distance_breakdown: The distance_breakdown of this ResponseTimeFilterProperties.  # noqa: E501
        :type: list[ResponseDistanceBreakdownItem]
        """

        self._distance_breakdown = distance_breakdown

    @property
    def fares(self):
        """Gets the fares of this ResponseTimeFilterProperties.  # noqa: E501


        :return: The fares of this ResponseTimeFilterProperties.  # noqa: E501
        :rtype: ResponseFares
        """
        return self._fares

    @fares.setter
    def fares(self, fares):
        """Sets the fares of this ResponseTimeFilterProperties.


        :param fares: The fares of this ResponseTimeFilterProperties.  # noqa: E501
        :type: ResponseFares
        """

        self._fares = fares

    @property
    def route(self):
        """Gets the route of this ResponseTimeFilterProperties.  # noqa: E501


        :return: The route of this ResponseTimeFilterProperties.  # noqa: E501
        :rtype: ResponseRoute
        """
        return self._route

    @route.setter
    def route(self, route):
        """Sets the route of this ResponseTimeFilterProperties.


        :param route: The route of this ResponseTimeFilterProperties.  # noqa: E501
        :type: ResponseRoute
        """

        self._route = route

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
        if not isinstance(other, ResponseTimeFilterProperties):
            return False

        return self.__dict__ == other.__dict__

    def __ne__(self, other):
        """Returns true if both objects are not equal"""
        return not self == other
