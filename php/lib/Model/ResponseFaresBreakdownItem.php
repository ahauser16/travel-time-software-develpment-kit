<?php
/**
 * ResponseFaresBreakdownItem
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
 * ResponseFaresBreakdownItem Class Doc Comment
 *
 * @category Class
 * @package  OpenAPI\Client
 * @author   OpenAPI Generator team
 * @link     https://openapi-generator.tech
 */
class ResponseFaresBreakdownItem implements ModelInterface, ArrayAccess
{
    const DISCRIMINATOR = null;

    /**
      * The original name of the model.
      *
      * @var string
      */
    protected static $openAPIModelName = 'ResponseFaresBreakdownItem';

    /**
      * Array of property to type mappings. Used for (de)serialization
      *
      * @var string[]
      */
    protected static $openAPITypes = [
        'modes' => '\OpenAPI\Client\Model\ResponseTransportationMode[]',
        'route_part_ids' => 'int[]',
        'tickets' => '\OpenAPI\Client\Model\ResponseFareTicket[]'
    ];

    /**
      * Array of property to format mappings. Used for (de)serialization
      *
      * @var string[]
      */
    protected static $openAPIFormats = [
        'modes' => null,
        'route_part_ids' => null,
        'tickets' => null
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
        'modes' => 'modes',
        'route_part_ids' => 'route_part_ids',
        'tickets' => 'tickets'
    ];

    /**
     * Array of attributes to setter functions (for deserialization of responses)
     *
     * @var string[]
     */
    protected static $setters = [
        'modes' => 'setModes',
        'route_part_ids' => 'setRoutePartIds',
        'tickets' => 'setTickets'
    ];

    /**
     * Array of attributes to getter functions (for serialization of requests)
     *
     * @var string[]
     */
    protected static $getters = [
        'modes' => 'getModes',
        'route_part_ids' => 'getRoutePartIds',
        'tickets' => 'getTickets'
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
        $this->container['modes'] = isset($data['modes']) ? $data['modes'] : null;
        $this->container['route_part_ids'] = isset($data['route_part_ids']) ? $data['route_part_ids'] : null;
        $this->container['tickets'] = isset($data['tickets']) ? $data['tickets'] : null;
    }

    /**
     * Show all the invalid properties with reasons.
     *
     * @return array invalid properties with reasons
     */
    public function listInvalidProperties()
    {
        $invalidProperties = [];

        if ($this->container['modes'] === null) {
            $invalidProperties[] = "'modes' can't be null";
        }
        if ($this->container['route_part_ids'] === null) {
            $invalidProperties[] = "'route_part_ids' can't be null";
        }
        if ($this->container['tickets'] === null) {
            $invalidProperties[] = "'tickets' can't be null";
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
     * Gets modes
     *
     * @return \OpenAPI\Client\Model\ResponseTransportationMode[]
     */
    public function getModes()
    {
        return $this->container['modes'];
    }

    /**
     * Sets modes
     *
     * @param \OpenAPI\Client\Model\ResponseTransportationMode[] $modes modes
     *
     * @return $this
     */
    public function setModes($modes)
    {
        $this->container['modes'] = $modes;

        return $this;
    }

    /**
     * Gets route_part_ids
     *
     * @return int[]
     */
    public function getRoutePartIds()
    {
        return $this->container['route_part_ids'];
    }

    /**
     * Sets route_part_ids
     *
     * @param int[] $route_part_ids route_part_ids
     *
     * @return $this
     */
    public function setRoutePartIds($route_part_ids)
    {
        $this->container['route_part_ids'] = $route_part_ids;

        return $this;
    }

    /**
     * Gets tickets
     *
     * @return \OpenAPI\Client\Model\ResponseFareTicket[]
     */
    public function getTickets()
    {
        return $this->container['tickets'];
    }

    /**
     * Sets tickets
     *
     * @param \OpenAPI\Client\Model\ResponseFareTicket[] $tickets tickets
     *
     * @return $this
     */
    public function setTickets($tickets)
    {
        $this->container['tickets'] = $tickets;

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


