<?php
/**
 * RequestTimeFilterPostcodeDistrictsDepartureSearch
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
 * Class representing the RequestTimeFilterPostcodeDistrictsDepartureSearch model.
 *
 * @package OpenAPI\Server\Model
 * @author  OpenAPI Generator team
 */
class RequestTimeFilterPostcodeDistrictsDepartureSearch 
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
     * @SerializedName("departure_time")
     * @Assert\NotNull()
     * @Assert\DateTime()
     * @Type("DateTime")
     */
    protected $departureTime;

    /**
     * @var double
     * @SerializedName("reachable_postcodes_threshold")
     * @Assert\NotNull()
     * @Assert\Type("double")
     * @Type("double")
     */
    protected $reachablePostcodesThreshold;

    /**
     * @var OpenAPI\Server\Model\RequestTimeFilterPostcodeDistrictsProperty[]
     * @SerializedName("properties")
     * @Assert\NotNull()
     * @Assert\All({
     *   @Assert\Type("OpenAPI\Server\Model\RequestTimeFilterPostcodeDistrictsProperty")
     * })
     * @Type("array<OpenAPI\Server\Model\RequestTimeFilterPostcodeDistrictsProperty>")
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
        $this->departureTime = isset($data['departureTime']) ? $data['departureTime'] : null;
        $this->reachablePostcodesThreshold = isset($data['reachablePostcodesThreshold']) ? $data['reachablePostcodesThreshold'] : null;
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
    public function getTransportation()
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
    public function setTransportation(RequestTransportation $transportation)
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
     * Gets departureTime.
     *
     * @return \DateTime
     */
    public function getDepartureTime()
    {
        return $this->departureTime;
    }

    /**
     * Sets departureTime.
     *
     * @param \DateTime $departureTime
     *
     * @return $this
     */
    public function setDepartureTime(\DateTime $departureTime)
    {
        $this->departureTime = $departureTime;

        return $this;
    }

    /**
     * Gets reachablePostcodesThreshold.
     *
     * @return double
     */
    public function getReachablePostcodesThreshold()
    {
        return $this->reachablePostcodesThreshold;
    }

    /**
     * Sets reachablePostcodesThreshold.
     *
     * @param double $reachablePostcodesThreshold
     *
     * @return $this
     */
    public function setReachablePostcodesThreshold($reachablePostcodesThreshold)
    {
        $this->reachablePostcodesThreshold = $reachablePostcodesThreshold;

        return $this;
    }

    /**
     * Gets properties.
     *
     * @return OpenAPI\Server\Model\RequestTimeFilterPostcodeDistrictsProperty[]
     */
    public function getProperties()
    {
        return $this->properties;
    }

    /**
     * Sets properties.
     *
     * @param OpenAPI\Server\Model\RequestTimeFilterPostcodeDistrictsProperty[] $properties
     *
     * @return $this
     */
    public function setProperties(array $properties)
    {
        $this->properties = $properties;

        return $this;
    }

    /**
     * Gets range.
     *
     * @return OpenAPI\Server\Model\RequestRangeFull|null
     */
    public function getRange()
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
    public function setRange(RequestRangeFull $range = null)
    {
        $this->range = $range;

        return $this;
    }
}


