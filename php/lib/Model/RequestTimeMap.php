<?php
/**
 * RequestTimeMap
 *
 * PHP version 5
 *
 * @category Class
 * @package  OpenAPI\Client
 * @author   OpenAPI Generator team
 * @link     https://openapi-generator.tech
 */

/**
 * TravelTime Platform API
 *
 * No description provided (generated by Openapi Generator https://github.com/openapitools/openapi-generator)
 *
 * The version of the OpenAPI document: 1.0.0
 * Contact: support@igeolise.com
 * Generated by: https://openapi-generator.tech
 * OpenAPI Generator version: 4.0.0
 */

/**
 * NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

namespace OpenAPI\Client\Model;

use \ArrayAccess;
use \OpenAPI\Client\ObjectSerializer;

/**
 * RequestTimeMap Class Doc Comment
 *
 * @category Class
 * @package  OpenAPI\Client
 * @author   OpenAPI Generator team
 * @link     https://openapi-generator.tech
 */
class RequestTimeMap implements ModelInterface, ArrayAccess
{
    const DISCRIMINATOR = null;

    /**
      * The original name of the model.
      *
      * @var string
      */
    protected static $openAPIModelName = 'RequestTimeMap';

    /**
      * Array of property to type mappings. Used for (de)serialization
      *
      * @var string[]
      */
    protected static $openAPITypes = [
        'departure_searches' => '\OpenAPI\Client\Model\RequestTimeMapDepartureSearch[]',
        'arrival_searches' => '\OpenAPI\Client\Model\RequestTimeMapArrivalSearch[]',
        'unions' => '\OpenAPI\Client\Model\RequestUnionOnIntersection[]',
        'intersections' => '\OpenAPI\Client\Model\RequestUnionOnIntersection[]'
    ];

    /**
      * Array of property to format mappings. Used for (de)serialization
      *
      * @var string[]
      */
    protected static $openAPIFormats = [
        'departure_searches' => null,
        'arrival_searches' => null,
        'unions' => null,
        'intersections' => null
    ];

    /**
     * Array of property to type mappings. Used for (de)serialization
     *
     * @return array
     */
    public static function openAPITypes()
    {
        return self::$openAPITypes;
    }

    /**
     * Array of property to format mappings. Used for (de)serialization
     *
     * @return array
     */
    public static function openAPIFormats()
    {
        return self::$openAPIFormats;
    }

    /**
     * Array of attributes where the key is the local name,
     * and the value is the original name
     *
     * @var string[]
     */
    protected static $attributeMap = [
        'departure_searches' => 'departure_searches',
        'arrival_searches' => 'arrival_searches',
        'unions' => 'unions',
        'intersections' => 'intersections'
    ];

    /**
     * Array of attributes to setter functions (for deserialization of responses)
     *
     * @var string[]
     */
    protected static $setters = [
        'departure_searches' => 'setDepartureSearches',
        'arrival_searches' => 'setArrivalSearches',
        'unions' => 'setUnions',
        'intersections' => 'setIntersections'
    ];

    /**
     * Array of attributes to getter functions (for serialization of requests)
     *
     * @var string[]
     */
    protected static $getters = [
        'departure_searches' => 'getDepartureSearches',
        'arrival_searches' => 'getArrivalSearches',
        'unions' => 'getUnions',
        'intersections' => 'getIntersections'
    ];

    /**
     * Array of attributes where the key is the local name,
     * and the value is the original name
     *
     * @return array
     */
    public static function attributeMap()
    {
        return self::$attributeMap;
    }

    /**
     * Array of attributes to setter functions (for deserialization of responses)
     *
     * @return array
     */
    public static function setters()
    {
        return self::$setters;
    }

    /**
     * Array of attributes to getter functions (for serialization of requests)
     *
     * @return array
     */
    public static function getters()
    {
        return self::$getters;
    }

    /**
     * The original name of the model.
     *
     * @return string
     */
    public function getModelName()
    {
        return self::$openAPIModelName;
    }

    

    

    /**
     * Associative array for storing property values
     *
     * @var mixed[]
     */
    protected $container = [];

    /**
     * Constructor
     *
     * @param mixed[] $data Associated array of property values
     *                      initializing the model
     */
    public function __construct(array $data = null)
    {
        $this->container['departure_searches'] = isset($data['departure_searches']) ? $data['departure_searches'] : null;
        $this->container['arrival_searches'] = isset($data['arrival_searches']) ? $data['arrival_searches'] : null;
        $this->container['unions'] = isset($data['unions']) ? $data['unions'] : null;
        $this->container['intersections'] = isset($data['intersections']) ? $data['intersections'] : null;
    }

    /**
     * Show all the invalid properties with reasons.
     *
     * @return array invalid properties with reasons
     */
    public function listInvalidProperties()
    {
        $invalidProperties = [];

        return $invalidProperties;
    }

    /**
     * Validate all the properties in the model
     * return true if all passed
     *
     * @return bool True if all properties are valid
     */
    public function valid()
    {
        return count($this->listInvalidProperties()) === 0;
    }


    /**
     * Gets departure_searches
     *
     * @return \OpenAPI\Client\Model\RequestTimeMapDepartureSearch[]|null
     */
    public function getDepartureSearches()
    {
        return $this->container['departure_searches'];
    }

    /**
     * Sets departure_searches
     *
     * @param \OpenAPI\Client\Model\RequestTimeMapDepartureSearch[]|null $departure_searches departure_searches
     *
     * @return $this
     */
    public function setDepartureSearches($departure_searches)
    {
        $this->container['departure_searches'] = $departure_searches;

        return $this;
    }

    /**
     * Gets arrival_searches
     *
     * @return \OpenAPI\Client\Model\RequestTimeMapArrivalSearch[]|null
     */
    public function getArrivalSearches()
    {
        return $this->container['arrival_searches'];
    }

    /**
     * Sets arrival_searches
     *
     * @param \OpenAPI\Client\Model\RequestTimeMapArrivalSearch[]|null $arrival_searches arrival_searches
     *
     * @return $this
     */
    public function setArrivalSearches($arrival_searches)
    {
        $this->container['arrival_searches'] = $arrival_searches;

        return $this;
    }

    /**
     * Gets unions
     *
     * @return \OpenAPI\Client\Model\RequestUnionOnIntersection[]|null
     */
    public function getUnions()
    {
        return $this->container['unions'];
    }

    /**
     * Sets unions
     *
     * @param \OpenAPI\Client\Model\RequestUnionOnIntersection[]|null $unions unions
     *
     * @return $this
     */
    public function setUnions($unions)
    {
        $this->container['unions'] = $unions;

        return $this;
    }

    /**
     * Gets intersections
     *
     * @return \OpenAPI\Client\Model\RequestUnionOnIntersection[]|null
     */
    public function getIntersections()
    {
        return $this->container['intersections'];
    }

    /**
     * Sets intersections
     *
     * @param \OpenAPI\Client\Model\RequestUnionOnIntersection[]|null $intersections intersections
     *
     * @return $this
     */
    public function setIntersections($intersections)
    {
        $this->container['intersections'] = $intersections;

        return $this;
    }
    /**
     * Returns true if offset exists. False otherwise.
     *
     * @param integer $offset Offset
     *
     * @return boolean
     */
    public function offsetExists($offset)
    {
        return isset($this->container[$offset]);
    }

    /**
     * Gets offset.
     *
     * @param integer $offset Offset
     *
     * @return mixed
     */
    public function offsetGet($offset)
    {
        return isset($this->container[$offset]) ? $this->container[$offset] : null;
    }

    /**
     * Sets value based on offset.
     *
     * @param integer $offset Offset
     * @param mixed   $value  Value to be set
     *
     * @return void
     */
    public function offsetSet($offset, $value)
    {
        if (is_null($offset)) {
            $this->container[] = $value;
        } else {
            $this->container[$offset] = $value;
        }
    }

    /**
     * Unsets offset.
     *
     * @param integer $offset Offset
     *
     * @return void
     */
    public function offsetUnset($offset)
    {
        unset($this->container[$offset]);
    }

    /**
     * Gets the string presentation of the object
     *
     * @return string
     */
    public function __toString()
    {
        return json_encode(
            ObjectSerializer::sanitizeForSerialization($this),
            JSON_PRETTY_PRINT
        );
    }
}


