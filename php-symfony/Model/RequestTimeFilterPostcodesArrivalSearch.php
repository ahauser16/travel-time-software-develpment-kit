<?php
/**
 * RequestTimeFilterPostcodesArrivalSearch
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
 * Class representing the RequestTimeFilterPostcodesArrivalSearch model.
 *
 * @package OpenAPI\Server\Model
 * @author  OpenAPI Generator team
 */
class RequestTimeFilterPostcodesArrivalSearch 
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
     * @var OpenAPI\Server\Model\RequestTransportation
     * @SerializedName("transportation")
     * @Assert\NotNull()
     * @Assert\Type("OpenAPI\Server\Model\RequestTransportation")
     * @Type("OpenAPI\Server\Model\RequestTransportation")
     */
    protected $transportation;

    /**
     * @var int
     * @SerializedName("travel_time")
     * @Assert\NotNull()
     * @Assert\Type("int")
     * @Type("int")
     * @Assert\GreaterThanOrEqual(60)
     * @Assert\LessThanOrEqual(60)
     */
    protected $travelTime;

    /**
     * @var \DateTime
     * @SerializedName("arrival_time")
     * @Assert\NotNull()
     * @Assert\DateTime()
     * @Type("DateTime")
     */
    protected $arrivalTime;

    /**
     * @var OpenAPI\Server\Model\RequestTimeFilterPostcodesProperty[]
     * @SerializedName("properties")
     * @Assert\NotNull()
     * @Assert\All({
     *   @Assert\Type("OpenAPI\Server\Model\RequestTimeFilterPostcodesProperty")
     * })
     * @Type("array<OpenAPI\Server\Model\RequestTimeFilterPostcodesProperty>")
     */
    protected $properties;

    /**
     * @var OpenAPI\Server\Model\RequestRangeFull|null
     * @SerializedName("range")
     * @Assert\Type("OpenAPI\Server\Model\RequestRangeFull")
     * @Type("OpenAPI\Server\Model\RequestRangeFull")
     */
    protected $range;

    /**
     * Constructor
     * @param mixed[] $data Associated array of property values initializing the model
     */
    public function __construct(array $data = null)
    {
        $this->id = isset($data['id']) ? $data['id'] : null;
        $this->transportation = isset($data['transportation']) ? $data['transportation'] : null;
        $this->travelTime = isset($data['travelTime']) ? $data['travelTime'] : null;
        $this->arrivalTime = isset($data['arrivalTime']) ? $data['arrivalTime'] : null;
        $this->properties = isset($data['properties']) ? $data['properties'] : null;
        $this->range = isset($data['range']) ? $data['range'] : null;
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
     * Gets transportation.
     *
     * @return OpenAPI\Server\Model\RequestTransportation
     */
    public function getTransportation(): RequestTransportation
    {
        return $this->transportation;
    }

    /**
     * Sets transportation.
     *
     * @param OpenAPI\Server\Model\RequestTransportation $transportation
     *
     * @return $this
     */
    public function setTransportation(RequestTransportation $transportation): RequestTransportation
    {
        $this->transportation = $transportation;

        return $this;
    }

    /**
     * Gets travelTime.
     *
     * @return int
     */
    public function getTravelTime()
    {
        return $this->travelTime;
    }

    /**
     * Sets travelTime.
     *
     * @param int $travelTime
     *
     * @return $this
     */
    public function setTravelTime($travelTime)
    {
        $this->travelTime = $travelTime;

        return $this;
    }

    /**
     * Gets arrivalTime.
     *
     * @return \DateTime
     */
    public function getArrivalTime(): \DateTime
    {
        return $this->arrivalTime;
    }

    /**
     * Sets arrivalTime.
     *
     * @param \DateTime $arrivalTime
     *
     * @return $this
     */
    public function setArrivalTime(\DateTime $arrivalTime): \DateTime
    {
        $this->arrivalTime = $arrivalTime;

        return $this;
    }

    /**
     * Gets properties.
     *
     * @return OpenAPI\Server\Model\RequestTimeFilterPostcodesProperty[]
     */
    public function getProperties(): array
    {
        return $this->properties;
    }

    /**
     * Sets properties.
     *
     * @param OpenAPI\Server\Model\RequestTimeFilterPostcodesProperty[] $properties
     *
     * @return $this
     */
    public function setProperties(array $properties): array
    {
        $this->properties = $properties;

        return $this;
    }

    /**
     * Gets range.
     *
     * @return OpenAPI\Server\Model\RequestRangeFull|null
     */
    public function getRange(): ?RequestRangeFull
    {
        return $this->range;
    }

    /**
     * Sets range.
     *
     * @param OpenAPI\Server\Model\RequestRangeFull|null $range
     *
     * @return $this
     */
    public function setRange(RequestRangeFull $range = null): ?RequestRangeFull
    {
        $this->range = $range;

        return $this;
    }
}


