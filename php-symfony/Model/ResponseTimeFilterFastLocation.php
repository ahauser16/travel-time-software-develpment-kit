<?php
/**
 * ResponseTimeFilterFastLocation
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
 * Class representing the ResponseTimeFilterFastLocation model.
 *
 * @package OpenAPI\Server\Model
 * @author  OpenAPI Generator team
 */
class ResponseTimeFilterFastLocation 
{
        /**
     * @var string
     * @SerializedName("id")
     * @Assert\NotNull()
     * @Assert\Type("string")
     * @Type("string")
     */
    protected $id;

    /**
     * @var OpenAPI\Server\Model\ResponseTimeFilterFastProperties[]
     * @SerializedName("properties")
     * @Assert\NotNull()
     * @Assert\All({
     *   @Assert\Type("OpenAPI\Server\Model\ResponseTimeFilterFastProperties")
     * })
     * @Type("array<OpenAPI\Server\Model\ResponseTimeFilterFastProperties>")
     */
    protected $properties;

    /**
     * Constructor
     * @param mixed[] $data Associated array of property values initializing the model
     */
    public function __construct(array $data = null)
    {
        $this->id = isset($data['id']) ? $data['id'] : null;
        $this->properties = isset($data['properties']) ? $data['properties'] : null;
    }

    /**
     * Gets id.
     *
     * @return string
     */
    public function getId()
    {
        return $this->id;
    }

    /**
     * Sets id.
     *
     * @param string $id
     *
     * @return $this
     */
    public function setId($id)
    {
        $this->id = $id;

        return $this;
    }

    /**
     * Gets properties.
     *
     * @return OpenAPI\Server\Model\ResponseTimeFilterFastProperties[]
     */
    public function getProperties(): array
    {
        return $this->properties;
    }

    /**
     * Sets properties.
     *
     * @param OpenAPI\Server\Model\ResponseTimeFilterFastProperties[] $properties
     *
     * @return $this
     */
    public function setProperties(array $properties): array
    {
        $this->properties = $properties;

        return $this;
    }
}


