<?php
declare(strict_types=1);

namespace App\DTO;

use Articus\DataTransfer\Annotation as DTA;

/**
 */
class ResponseTimeFilterPostcodesResult
{
    /**
     * @DTA\Data(field="search_id")
     * @DTA\Validator(name="Type", options={"type":"string"})
     * @var string
     */
    public $search_id;
    /**
     * @DTA\Data(field="postcodes")
     * TODO check validator and strategy are correct and can handle container item type
     * @DTA\Strategy(name="ObjectArray", options={"type":\App\DTO\ResponseTimeFilterPostcode::class})
     * @DTA\Validator(name="Collection", options={"validators":{
     *     {"name":"Dictionary", "options":{"type":\App\DTO\ResponseTimeFilterPostcode::class}}
     * }})
     * @var \App\DTO\ResponseTimeFilterPostcode[]
     */
    public $postcodes;
}
