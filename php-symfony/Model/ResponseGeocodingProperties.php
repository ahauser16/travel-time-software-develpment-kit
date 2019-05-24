<?php
/**
 * ResponseGeocodingProperties
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
 * Class representing the ResponseGeocodingProperties model.
 *
 * @package OpenAPI\Server\Model
 * @author  OpenAPI Generator team
 */
class ResponseGeocodingProperties 
{
        /**
     * @var string
     * @SerializedName("name")
     * @Assert\NotNull()
     * @Assert\Type("string")
     * @Type("string")
     */
    protected $name;

    /**
     * @var string
     * @SerializedName("label")
     * @Assert\NotNull()
     * @Assert\Type("string")
     * @Type("string")
     */
    protected $label;

    /**
     * @var double|null
     * @SerializedName("score")
     * @Assert\Type("double")
     * @Type("double")
     */
    protected $score;

    /**
     * @var string|null
     * @SerializedName("house_number")
     * @Assert\Type("string")
     * @Type("string")
     */
    protected $houseNumber;

    /**
     * @var string|null
     * @SerializedName("street")
     * @Assert\Type("string")
     * @Type("string")
     */
    protected $street;

    /**
     * @var string|null
     * @SerializedName("region")
     * @Assert\Type("string")
     * @Type("string")
     */
    protected $region;

    /**
     * @var string|null
     * @SerializedName("region_code")
     * @Assert\Type("string")
     * @Type("string")
     */
    protected $regionCode;

    /**
     * @var string|null
     * @SerializedName("neighbourhood")
     * @Assert\Type("string")
     * @Type("string")
     */
    protected $neighbourhood;

    /**
     * @var string|null
     * @SerializedName("county")
     * @Assert\Type("string")
     * @Type("string")
     */
    protected $county;

    /**
     * @var string|null
     * @SerializedName("macroregion")
     * @Assert\Type("string")
     * @Type("string")
     */
    protected $macroregion;

    /**
     * @var string|null
     * @SerializedName("city")
     * @Assert\Type("string")
     * @Type("string")
     */
    protected $city;

    /**
     * @var string|null
     * @SerializedName("country")
     * @Assert\Type("string")
     * @Type("string")
     */
    protected $country;

    /**
     * @var string|null
     * @SerializedName("country_code")
     * @Assert\Type("string")
     * @Type("string")
     */
    protected $countryCode;

    /**
     * @var string|null
     * @SerializedName("continent")
     * @Assert\Type("string")
     * @Type("string")
     */
    protected $continent;

    /**
     * @var string|null
     * @SerializedName("postcode")
     * @Assert\Type("string")
     * @Type("string")
     */
    protected $postcode;

    /**
     * @var OpenAPI\Server\Model\ResponseMapInfoFeatures|null
     * @SerializedName("features")
     * @Assert\Type("OpenAPI\Server\Model\ResponseMapInfoFeatures")
     * @Type("OpenAPI\Server\Model\ResponseMapInfoFeatures")
     */
    protected $features;

    /**
     * Constructor
     * @param mixed[] $data Associated array of property values initializing the model
     */
    public function __construct(array $data = null)
    {
        $this->name = isset($data['name']) ? $data['name'] : null;
        $this->label = isset($data['label']) ? $data['label'] : null;
        $this->score = isset($data['score']) ? $data['score'] : null;
        $this->houseNumber = isset($data['houseNumber']) ? $data['houseNumber'] : null;
        $this->street = isset($data['street']) ? $data['street'] : null;
        $this->region = isset($data['region']) ? $data['region'] : null;
        $this->regionCode = isset($data['regionCode']) ? $data['regionCode'] : null;
        $this->neighbourhood = isset($data['neighbourhood']) ? $data['neighbourhood'] : null;
        $this->county = isset($data['county']) ? $data['county'] : null;
        $this->macroregion = isset($data['macroregion']) ? $data['macroregion'] : null;
        $this->city = isset($data['city']) ? $data['city'] : null;
        $this->country = isset($data['country']) ? $data['country'] : null;
        $this->countryCode = isset($data['countryCode']) ? $data['countryCode'] : null;
        $this->continent = isset($data['continent']) ? $data['continent'] : null;
        $this->postcode = isset($data['postcode']) ? $data['postcode'] : null;
        $this->features = isset($data['features']) ? $data['features'] : null;
    }

    /**
     * Gets name.
     *
     * @return string
     */
    public function getName()
    {
        return $this->name;
    }

    /**
     * Sets name.
     *
     * @param string $name
     *
     * @return $this
     */
    public function setName($name)
    {
        $this->name = $name;

        return $this;
    }

    /**
     * Gets label.
     *
     * @return string
     */
    public function getLabel()
    {
        return $this->label;
    }

    /**
     * Sets label.
     *
     * @param string $label
     *
     * @return $this
     */
    public function setLabel($label)
    {
        $this->label = $label;

        return $this;
    }

    /**
     * Gets score.
     *
     * @return double|null
     */
    public function getScore()
    {
        return $this->score;
    }

    /**
     * Sets score.
     *
     * @param double|null $score
     *
     * @return $this
     */
    public function setScore($score = null)
    {
        $this->score = $score;

        return $this;
    }

    /**
     * Gets houseNumber.
     *
     * @return string|null
     */
    public function getHouseNumber()
    {
        return $this->houseNumber;
    }

    /**
     * Sets houseNumber.
     *
     * @param string|null $houseNumber
     *
     * @return $this
     */
    public function setHouseNumber($houseNumber = null)
    {
        $this->houseNumber = $houseNumber;

        return $this;
    }

    /**
     * Gets street.
     *
     * @return string|null
     */
    public function getStreet()
    {
        return $this->street;
    }

    /**
     * Sets street.
     *
     * @param string|null $street
     *
     * @return $this
     */
    public function setStreet($street = null)
    {
        $this->street = $street;

        return $this;
    }

    /**
     * Gets region.
     *
     * @return string|null
     */
    public function getRegion()
    {
        return $this->region;
    }

    /**
     * Sets region.
     *
     * @param string|null $region
     *
     * @return $this
     */
    public function setRegion($region = null)
    {
        $this->region = $region;

        return $this;
    }

    /**
     * Gets regionCode.
     *
     * @return string|null
     */
    public function getRegionCode()
    {
        return $this->regionCode;
    }

    /**
     * Sets regionCode.
     *
     * @param string|null $regionCode
     *
     * @return $this
     */
    public function setRegionCode($regionCode = null)
    {
        $this->regionCode = $regionCode;

        return $this;
    }

    /**
     * Gets neighbourhood.
     *
     * @return string|null
     */
    public function getNeighbourhood()
    {
        return $this->neighbourhood;
    }

    /**
     * Sets neighbourhood.
     *
     * @param string|null $neighbourhood
     *
     * @return $this
     */
    public function setNeighbourhood($neighbourhood = null)
    {
        $this->neighbourhood = $neighbourhood;

        return $this;
    }

    /**
     * Gets county.
     *
     * @return string|null
     */
    public function getCounty()
    {
        return $this->county;
    }

    /**
     * Sets county.
     *
     * @param string|null $county
     *
     * @return $this
     */
    public function setCounty($county = null)
    {
        $this->county = $county;

        return $this;
    }

    /**
     * Gets macroregion.
     *
     * @return string|null
     */
    public function getMacroregion()
    {
        return $this->macroregion;
    }

    /**
     * Sets macroregion.
     *
     * @param string|null $macroregion
     *
     * @return $this
     */
    public function setMacroregion($macroregion = null)
    {
        $this->macroregion = $macroregion;

        return $this;
    }

    /**
     * Gets city.
     *
     * @return string|null
     */
    public function getCity()
    {
        return $this->city;
    }

    /**
     * Sets city.
     *
     * @param string|null $city
     *
     * @return $this
     */
    public function setCity($city = null)
    {
        $this->city = $city;

        return $this;
    }

    /**
     * Gets country.
     *
     * @return string|null
     */
    public function getCountry()
    {
        return $this->country;
    }

    /**
     * Sets country.
     *
     * @param string|null $country
     *
     * @return $this
     */
    public function setCountry($country = null)
    {
        $this->country = $country;

        return $this;
    }

    /**
     * Gets countryCode.
     *
     * @return string|null
     */
    public function getCountryCode()
    {
        return $this->countryCode;
    }

    /**
     * Sets countryCode.
     *
     * @param string|null $countryCode
     *
     * @return $this
     */
    public function setCountryCode($countryCode = null)
    {
        $this->countryCode = $countryCode;

        return $this;
    }

    /**
     * Gets continent.
     *
     * @return string|null
     */
    public function getContinent()
    {
        return $this->continent;
    }

    /**
     * Sets continent.
     *
     * @param string|null $continent
     *
     * @return $this
     */
    public function setContinent($continent = null)
    {
        $this->continent = $continent;

        return $this;
    }

    /**
     * Gets postcode.
     *
     * @return string|null
     */
    public function getPostcode()
    {
        return $this->postcode;
    }

    /**
     * Sets postcode.
     *
     * @param string|null $postcode
     *
     * @return $this
     */
    public function setPostcode($postcode = null)
    {
        $this->postcode = $postcode;

        return $this;
    }

    /**
     * Gets features.
     *
     * @return OpenAPI\Server\Model\ResponseMapInfoFeatures|null
     */
    public function getFeatures()
    {
        return $this->features;
    }

    /**
     * Sets features.
     *
     * @param OpenAPI\Server\Model\ResponseMapInfoFeatures|null $features
     *
     * @return $this
     */
    public function setFeatures(ResponseMapInfoFeatures $features = null)
    {
        $this->features = $features;

        return $this;
    }
}


