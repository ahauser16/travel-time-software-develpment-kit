<?php
/**
 * ResponseTimeFilterPostcodeSector
 *
 * PHP version 5
 *
 * @category Class
 * @package  OpenAPI\Server\Model
 * @author   OpenAPI Generator team
 * @link     https://github.com/openapitools/openapi-generator
 */

/**
 * TravelTime Platform API
 *
 * No description provided (generated by Openapi Generator https://github.com/openapitools/openapi-generator)
 *
 * The version of the OpenAPI document: 1.0.0
 * Contact: support@igeolise.com
 * Generated by: https://github.com/openapitools/openapi-generator.git
 *
 */

/**
 * NOTE: This class is auto generated by the openapi generator program.
 * https://github.com/openapitools/openapi-generator
 * Do not edit the class manually.
 */

namespace OpenAPI\Server\Model;

use Symfony\Component\Validator\Constraints as Assert;
use JMS\Serializer\Annotation\Type;
use JMS\Serializer\Annotation\SerializedName;

/**
 * Class representing the ResponseTimeFilterPostcodeSector model.
 *
 * @package OpenAPI\Server\Model
 * @author  OpenAPI Generator team
 */
class ResponseTimeFilterPostcodeSector 
{
        /**
     * @var String
     * @SerializedName("code")
     * @Assert\NotNull()
     * @Assert\Type("String")
     * @Type("String")
     */
    protected $code;

    /**
     * @var OpenAPI\Server\Model\ResponseTimeFilterPostcodeSectorProperties
     * @SerializedName("properties")
     * @Assert\NotNull()
     * @Assert\Type("OpenAPI\Server\Model\ResponseTimeFilterPostcodeSectorProperties")
     * @Type("OpenAPI\Server\Model\ResponseTimeFilterPostcodeSectorProperties")
     */
    protected $properties;

    /**
     * Constructor
     * @param mixed[] $data Associated array of property values initializing the model
     */
    public function __construct(array $data = null)
    {
        $this->code = isset($data['code']) ? $data['code'] : null;
        $this->properties = isset($data['properties']) ? $data['properties'] : null;
    }

    /**
     * Gets code.
     *
     * @return String
     */
    public function getCode()
    {
        return $this->code;
    }

    /**
     * Sets code.
     *
     * @param String $code
     *
     * @return $this
     */
    public function setCode($code)
    {
        $this->code = $code;

        return $this;
    }

    /**
     * Gets properties.
     *
     * @return OpenAPI\Server\Model\ResponseTimeFilterPostcodeSectorProperties
     */
    public function getProperties()
    {
        return $this->properties;
    }

    /**
     * Sets properties.
     *
     * @param OpenAPI\Server\Model\ResponseTimeFilterPostcodeSectorProperties $properties
     *
     * @return $this
     */
    public function setProperties(ResponseTimeFilterPostcodeSectorProperties $properties)
    {
        $this->properties = $properties;

        return $this;
    }
}


