function New-RequestTimeFilterPostcodesDepartureSearch {
    [CmdletBinding()]
    Param (
        [Parameter(Position = 0, ValueFromPipelineByPropertyName = $true, Mandatory = $true)]
        [String]
        ${id},
        [Parameter(Position = 1, ValueFromPipelineByPropertyName = $true, Mandatory = $true)]
        [Org.OpenAPITools.Model.RequestTransportation]
        ${transportation},
        [Parameter(Position = 2, ValueFromPipelineByPropertyName = $true, Mandatory = $true)]
        [Int32]
        ${travelUnderscoretime},
        [Parameter(Position = 3, ValueFromPipelineByPropertyName = $true, Mandatory = $true)]
        [System.DateTime]
        ${departureUnderscoretime},
        [Parameter(Position = 4, ValueFromPipelineByPropertyName = $true, Mandatory = $true)]
        [Org.OpenAPITools.Model.RequestTimeFilterPostcodesProperty[]]
        ${properties},
        [Parameter(Position = 5, ValueFromPipelineByPropertyName = $true)]
        [Org.OpenAPITools.Model.RequestRangeFull]
        ${range}
    )

    Process {
        'Creating object: Org.OpenAPITools.Model.RequestTimeFilterPostcodesDepartureSearch' | Write-Verbose
        $PSBoundParameters | Out-DebugParameter | Write-Debug

        New-Object -TypeName Org.OpenAPITools.Model.RequestTimeFilterPostcodesDepartureSearch -ArgumentList @(
            ${id},
            ${transportation},
            ${travelUnderscoretime},
            ${departureUnderscoretime},
            ${properties},
            ${range}
        )
    }
}
