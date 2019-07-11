# coding: utf-8

from datetime import date, datetime

from typing import List, Dict, Type

from traveltimeplatform.models.base_model_ import Model
from traveltimeplatform.models.response_geocoding_geometry import ResponseGeocodingGeometry
from traveltimeplatform.models.response_geocoding_properties import ResponseGeocodingProperties
from traveltimeplatform import util


class ResponseGeocodingGeoJsonFeature(Model):
    """NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).

    Do not edit the class manually.
    """

    def __init__(self, type: str=None, geometry: ResponseGeocodingGeometry=None, properties: ResponseGeocodingProperties=None):
        """ResponseGeocodingGeoJsonFeature - a model defined in OpenAPI

        :param type: The type of this ResponseGeocodingGeoJsonFeature.
        :param geometry: The geometry of this ResponseGeocodingGeoJsonFeature.
        :param properties: The properties of this ResponseGeocodingGeoJsonFeature.
        """
        self.openapi_types = {
            'type': str,
            'geometry': ResponseGeocodingGeometry,
            'properties': ResponseGeocodingProperties
        }

        self.attribute_map = {
            'type': 'type',
            'geometry': 'geometry',
            'properties': 'properties'
        }

        self._type = type
        self._geometry = geometry
        self._properties = properties

    @classmethod
    def from_dict(cls, dikt: dict) -> 'ResponseGeocodingGeoJsonFeature':
        """Returns the dict as a model

        :param dikt: A dict.
        :return: The ResponseGeocodingGeoJsonFeature of this ResponseGeocodingGeoJsonFeature.
        """
        return util.deserialize_model(dikt, cls)

    @property
    def type(self):
        """Gets the type of this ResponseGeocodingGeoJsonFeature.


        :return: The type of this ResponseGeocodingGeoJsonFeature.
        :rtype: str
        """
        return self._type

    @type.setter
    def type(self, type):
        """Sets the type of this ResponseGeocodingGeoJsonFeature.


        :param type: The type of this ResponseGeocodingGeoJsonFeature.
        :type type: str
        """
        if type is None:
            raise ValueError("Invalid value for `type`, must not be `None`")

        self._type = type

    @property
    def geometry(self):
        """Gets the geometry of this ResponseGeocodingGeoJsonFeature.


        :return: The geometry of this ResponseGeocodingGeoJsonFeature.
        :rtype: ResponseGeocodingGeometry
        """
        return self._geometry

    @geometry.setter
    def geometry(self, geometry):
        """Sets the geometry of this ResponseGeocodingGeoJsonFeature.


        :param geometry: The geometry of this ResponseGeocodingGeoJsonFeature.
        :type geometry: ResponseGeocodingGeometry
        """
        if geometry is None:
            raise ValueError("Invalid value for `geometry`, must not be `None`")

        self._geometry = geometry

    @property
    def properties(self):
        """Gets the properties of this ResponseGeocodingGeoJsonFeature.


        :return: The properties of this ResponseGeocodingGeoJsonFeature.
        :rtype: ResponseGeocodingProperties
        """
        return self._properties

    @properties.setter
    def properties(self, properties):
        """Sets the properties of this ResponseGeocodingGeoJsonFeature.


        :param properties: The properties of this ResponseGeocodingGeoJsonFeature.
        :type properties: ResponseGeocodingProperties
        """
        if properties is None:
            raise ValueError("Invalid value for `properties`, must not be `None`")

        self._properties = properties