<?php
/**
 * RequestTimeFilterPostcodeDistrictsDepartureSearch
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
 * OpenAPI Generator version: 4.3.0-SNAPSHOT
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
 * RequestTimeFilterPostcodeDistrictsDepartureSearch Class Doc Comment
 *
 * @category Class
 * @package  OpenAPI\Client
 * @author   OpenAPI Generator team
 * @link     https://openapi-generator.tech
 */
class RequestTimeFilterPostcodeDistrictsDepartureSearch implements ModelInterface, ArrayAccess
{
    const DISCRIMINATOR = null;

    /**
      * The original name of the model.
      *
      * @var string
      */
    protected static $openAPIModelName = 'RequestTimeFilterPostcodeDistrictsDepartureSearch';

    /**
      * Array of property to type mappings. Used for (de)serialization
      *
      * @var string[]
      */
    protected static $openAPITypes = [
        'id' => 'string',
        'transportation' => '\OpenAPI\Client\Model\RequestTransportation',
        'travel_time' => 'int',
        'departure_time' => '\DateTime',
        'reachable_postcodes_threshold' => 'double',
        'properties' => '\OpenAPI\Client\Model\RequestTimeFilterPostcodeDistrictsProperty[]',
        'range' => '\OpenAPI\Client\Model\RequestRangeFull'
    ];

    /**
      * Array of property to format mappings. Used for (de)serialization
      *
      * @var string[]
      */
    protected static $openAPIFormats = [
        'id' => null,
        'transportation' => null,
        'travel_time' => null,
        'departure_time' => 'date-time',
        'reachable_postcodes_threshold' => 'double',
        'properties' => null,
        'range' => null
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
        'id' => 'id',
        'transportation' => 'transportation',
        'travel_time' => 'travel_time',
        'departure_time' => 'departure_time',
        'reachable_postcodes_threshold' => 'reachable_postcodes_threshold',
        'properties' => 'properties',
        'range' => 'range'
    ];

    /**
     * Array of attributes to setter functions (for deserialization of responses)
     *
     * @var string[]
     */
    protected static $setters = [
        'id' => 'setId',
        'transportation' => 'setTransportation',
        'travel_time' => 'setTravelTime',
        'departure_time' => 'setDepartureTime',
        'reachable_postcodes_threshold' => 'setReachablePostcodesThreshold',
        'properties' => 'setProperties',
        'range' => 'setRange'
    ];

    /**
     * Array of attributes to getter functions (for serialization of requests)
     *
     * @var string[]
     */
    protected static $getters = [
        'id' => 'getId',
        'transportation' => 'getTransportation',
        'travel_time' => 'getTravelTime',
        'departure_time' => 'getDepartureTime',
        'reachable_postcodes_threshold' => 'getReachablePostcodesThreshold',
        'properties' => 'getProperties',
        'range' => 'getRange'
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
        $this->container['id'] = isset($data['id']) ? $data['id'] : null;
        $this->container['transportation'] = isset($data['transportation']) ? $data['transportation'] : null;
        $this->container['travel_time'] = isset($data['travel_time']) ? $data['travel_time'] : null;
        $this->container['departure_time'] = isset($data['departure_time']) ? $data['departure_time'] : null;
        $this->container['reachable_postcodes_threshold'] = isset($data['reachable_postcodes_threshold']) ? $data['reachable_postcodes_threshold'] : null;
        $this->container['properties'] = isset($data['properties']) ? $data['properties'] : null;
        $this->container['range'] = isset($data['range']) ? $data['range'] : null;
    }

    /**
     * Show all the invalid properties with reasons.
     *
     * @return array invalid properties with reasons
     */
    public function listInvalidProperties()
    {
        $invalidProperties = [];

        if ($this->container['id'] === null) {
            $invalidProperties[] = "'id' can't be null";
        }
        if ($this->container['transportation'] === null) {
            $invalidProperties[] = "'transportation' can't be null";
        }
        if ($this->container['travel_time'] === null) {
            $invalidProperties[] = "'travel_time' can't be null";
        }
        if (($this->container['travel_time'] > 14400)) {
            $invalidProperties[] = "invalid value for 'travel_time', must be smaller than or equal to 14400.";
        }

        if (($this->container['travel_time'] < 60)) {
            $invalidProperties[] = "invalid value for 'travel_time', must be bigger than or equal to 60.";
        }

        if ($this->container['departure_time'] === null) {
            $invalidProperties[] = "'departure_time' can't be null";
        }
        if ($this->container['reachable_postcodes_threshold'] === null) {
            $invalidProperties[] = "'reachable_postcodes_threshold' can't be null";
        }
        if ($this->container['properties'] === null) {
            $invalidProperties[] = "'properties' can't be null";
        }
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
     * Gets id
     *
     * @return string
     */
    public function getId()
    {
        return $this->container['id'];
    }

    /**
     * Sets id
     *
     * @param string $id id
     *
     * @return $this
     */
    public function setId($id)
    {
        $this->container['id'] = $id;

        return $this;
    }

    /**
     * Gets transportation
     *
     * @return \OpenAPI\Client\Model\RequestTransportation
     */
    public function getTransportation()
    {
        return $this->container['transportation'];
    }

    /**
     * Sets transportation
     *
     * @param \OpenAPI\Client\Model\RequestTransportation $transportation transportation
     *
     * @return $this
     */
    public function setTransportation($transportation)
    {
        $this->container['transportation'] = $transportation;

        return $this;
    }

    /**
     * Gets travel_time
     *
     * @return int
     */
    public function getTravelTime()
    {
        return $this->container['travel_time'];
    }

    /**
     * Sets travel_time
     *
     * @param int $travel_time travel_time
     *
     * @return $this
     */
    public function setTravelTime($travel_time)
    {

        if (($travel_time > 14400)) {
            throw new \InvalidArgumentException('invalid value for $travel_time when calling RequestTimeFilterPostcodeDistrictsDepartureSearch., must be smaller than or equal to 14400.');
        }
        if (($travel_time < 60)) {
            throw new \InvalidArgumentException('invalid value for $travel_time when calling RequestTimeFilterPostcodeDistrictsDepartureSearch., must be bigger than or equal to 60.');
        }

        $this->container['travel_time'] = $travel_time;

        return $this;
    }

    /**
     * Gets departure_time
     *
     * @return \DateTime
     */
    public function getDepartureTime()
    {
        return $this->container['departure_time'];
    }

    /**
     * Sets departure_time
     *
     * @param \DateTime $departure_time departure_time
     *
     * @return $this
     */
    public function setDepartureTime($departure_time)
    {
        $this->container['departure_time'] = $departure_time;

        return $this;
    }

    /**
     * Gets reachable_postcodes_threshold
     *
     * @return double
     */
    public function getReachablePostcodesThreshold()
    {
        return $this->container['reachable_postcodes_threshold'];
    }

    /**
     * Sets reachable_postcodes_threshold
     *
     * @param double $reachable_postcodes_threshold reachable_postcodes_threshold
     *
     * @return $this
     */
    public function setReachablePostcodesThreshold($reachable_postcodes_threshold)
    {
        $this->container['reachable_postcodes_threshold'] = $reachable_postcodes_threshold;

        return $this;
    }

    /**
     * Gets properties
     *
     * @return \OpenAPI\Client\Model\RequestTimeFilterPostcodeDistrictsProperty[]
     */
    public function getProperties()
    {
        return $this->container['properties'];
    }

    /**
     * Sets properties
     *
     * @param \OpenAPI\Client\Model\RequestTimeFilterPostcodeDistrictsProperty[] $properties properties
     *
     * @return $this
     */
    public function setProperties($properties)
    {
        $this->container['properties'] = $properties;

        return $this;
    }

    /**
     * Gets range
     *
     * @return \OpenAPI\Client\Model\RequestRangeFull|null
     */
    public function getRange()
    {
        return $this->container['range'];
    }

    /**
     * Sets range
     *
     * @param \OpenAPI\Client\Model\RequestRangeFull|null $range range
     *
     * @return $this
     */
    public function setRange($range)
    {
        $this->container['range'] = $range;

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

    /**
     * Gets a header-safe presentation of the object
     *
     * @return string
     */
    public function toHeaderValue()
    {
        return json_encode(ObjectSerializer::sanitizeForSerialization($this));
    }
}


