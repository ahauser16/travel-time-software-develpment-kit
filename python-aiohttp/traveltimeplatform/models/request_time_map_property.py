# coding: utf-8

from datetime import date, datetime

from typing import List, Dict, Type

from traveltimeplatform.models.base_model_ import Model
from traveltimeplatform import util


class RequestTimeMapProperty(Model):
    """NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).

    Do not edit the class manually.
    """

    """
    allowed enum values
    """
    IS_ONLY_WALKING = "is_only_walking"

    def __init__(self):
        """RequestTimeMapProperty - a model defined in OpenAPI

        """
        self.openapi_types = {
        }

        self.attribute_map = {
        }

    @classmethod
    def from_dict(cls, dikt: dict) -> 'RequestTimeMapProperty':
        """Returns the dict as a model

        :param dikt: A dict.
        :return: The RequestTimeMapProperty of this RequestTimeMapProperty.
        """
        return util.deserialize_model(dikt, cls)
