<?php
/**
 * RequestTimeFilterFastArrivalManyToOneSearch
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
 * OpenAPI Generator version: 4.2.3
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
 * RequestTimeFilterFastArrivalManyToOneSearch Class Doc Comment
 *
 * @category Class
 * @package  OpenAPI\Client
 * @author   OpenAPI Generator team
 * @link     https://openapi-generator.tech
 */
class RequestTimeFilterFastArrivalManyToOneSearch implements ModelInterface, ArrayAccess
{
    const DISCRIMINATOR = null;

    /**
      * The original name of the model.
      *
      * @var string
      */
    protected static $openAPIModelName = 'RequestTimeFilterFastArrivalManyToOneSearch';

    /**
      * Array of property to type mappings. Used for (de)serialization
      *
      * @var string[]
      */
    protected static $openAPITypes = [
        'id' => 'string',
        'arrival_location_id' => 'string',
        'departure_location_ids' => 'string[]',
        'transportation' => '\OpenAPI\Client\Model\RequestTransportationFast',
        'travel_time' => 'int',
        'arrival_time_period' => '\OpenAPI\Client\Model\RequestArrivalTimePeriod',
        'properties' => '\OpenAPI\Client\Model\RequestTimeFilterFastProperty[]'
    ];

    /**
      * Array of property to format mappings. Used for (de)serialization
      *
      * @var string[]
      */
    protected static $openAPIFormats = [
        'id' => null,
        'arrival_location_id' => null,
        'departure_location_ids' => null,
        'transportation' => null,
        'travel_time' => null,
        'arrival_time_period' => null,
        'properties' => null
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
        'arrival_location_id' => 'arrival_location_id',
        'departure_location_ids' => 'departure_location_ids',
        'transportation' => 'transportation',
        'travel_time' => 'travel_time',
        'arrival_time_period' => 'arrival_time_period',
        'properties' => 'properties'
    ];

    /**
     * Array of attributes to setter functions (for deserialization of responses)
     *
     * @var string[]
     */
    protected static $setters = [
        'id' => 'setId',
        'arrival_location_id' => 'setArrivalLocationId',
        'departure_location_ids' => 'setDepartureLocationIds',
        'transportation' => 'setTransportation',
        'travel_time' => 'setTravelTime',
        'arrival_time_period' => 'setArrivalTimePeriod',
        'properties' => 'setProperties'
    ];

    /**
     * Array of attributes to getter functions (for serialization of requests)
     *
     * @var string[]
     */
    protected static $getters = [
        'id' => 'getId',
        'arrival_location_id' => 'getArrivalLocationId',
        'departure_location_ids' => 'getDepartureLocationIds',
        'transportation' => 'getTransportation',
        'travel_time' => 'getTravelTime',
        'arrival_time_period' => 'getArrivalTimePeriod',
        'properties' => 'getProperties'
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
        $this->container['arrival_location_id'] = isset($data['arrival_location_id']) ? $data['arrival_location_id'] : null;
        $this->container['departure_location_ids'] = isset($data['departure_location_ids']) ? $data['departure_location_ids'] : null;
        $this->container['transportation'] = isset($data['transportation']) ? $data['transportation'] : null;
        $this->container['travel_time'] = isset($data['travel_time']) ? $data['travel_time'] : null;
        $this->container['arrival_time_period'] = isset($data['arrival_time_period']) ? $data['arrival_time_period'] : null;
        $this->container['properties'] = isset($data['properties']) ? $data['properties'] : null;
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
        if ($this->container['arrival_location_id'] === null) {
            $invalidProperties[] = "'arrival_location_id' can't be null";
        }
        if ($this->container['departure_location_ids'] === null) {
            $invalidProperties[] = "'departure_location_ids' can't be null";
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

        if ($this->container['arrival_time_period'] === null) {
            $invalidProperties[] = "'arrival_time_period' can't be null";
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
     * Gets arrival_location_id
     *
     * @return string
     */
    public function getArrivalLocationId()
    {
        return $this->container['arrival_location_id'];
    }

    /**
     * Sets arrival_location_id
     *
     * @param string $arrival_location_id arrival_location_id
     *
     * @return $this
     */
    public function setArrivalLocationId($arrival_location_id)
    {
        $this->container['arrival_location_id'] = $arrival_location_id;

        return $this;
    }

    /**
     * Gets departure_location_ids
     *
     * @return string[]
     */
    public function getDepartureLocationIds()
    {
        return $this->container['departure_location_ids'];
    }

    /**
     * Sets departure_location_ids
     *
     * @param string[] $departure_location_ids departure_location_ids
     *
     * @return $this
     */
    public function setDepartureLocationIds($departure_location_ids)
    {
        $this->container['departure_location_ids'] = $departure_location_ids;

        return $this;
    }

    /**
     * Gets transportation
     *
     * @return \OpenAPI\Client\Model\RequestTransportationFast
     */
    public function getTransportation()
    {
        return $this->container['transportation'];
    }

    /**
     * Sets transportation
     *
     * @param \OpenAPI\Client\Model\RequestTransportationFast $transportation transportation
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
            throw new \InvalidArgumentException('invalid value for $travel_time when calling RequestTimeFilterFastArrivalManyToOneSearch., must be smaller than or equal to 14400.');
        }
        if (($travel_time < 60)) {
            throw new \InvalidArgumentException('invalid value for $travel_time when calling RequestTimeFilterFastArrivalManyToOneSearch., must be bigger than or equal to 60.');
        }

        $this->container['travel_time'] = $travel_time;

        return $this;
    }

    /**
     * Gets arrival_time_period
     *
     * @return \OpenAPI\Client\Model\RequestArrivalTimePeriod
     */
    public function getArrivalTimePeriod()
    {
        return $this->container['arrival_time_period'];
    }

    /**
     * Sets arrival_time_period
     *
     * @param \OpenAPI\Client\Model\RequestArrivalTimePeriod $arrival_time_period arrival_time_period
     *
     * @return $this
     */
    public function setArrivalTimePeriod($arrival_time_period)
    {
        $this->container['arrival_time_period'] = $arrival_time_period;

        return $this;
    }

    /**
     * Gets properties
     *
     * @return \OpenAPI\Client\Model\RequestTimeFilterFastProperty[]
     */
    public function getProperties()
    {
        return $this->container['properties'];
    }

    /**
     * Sets properties
     *
     * @param \OpenAPI\Client\Model\RequestTimeFilterFastProperty[] $properties properties
     *
     * @return $this
     */
    public function setProperties($properties)
    {
        $this->container['properties'] = $properties;

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


