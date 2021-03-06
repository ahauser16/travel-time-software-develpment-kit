function New-ResponseSupportedLocation {
    [CmdletBinding()]
    Param (
        [Parameter(Position = 0, ValueFromPipelineByPropertyName = $true, Mandatory = $true)]
        [String]
        ${id},
        [Parameter(Position = 1, ValueFromPipelineByPropertyName = $true, Mandatory = $true)]
        [String]
        ${mapUnderscorename}
    )

    Process {
        'Creating object: Org.OpenAPITools.Model.ResponseSupportedLocation' | Write-Verbose
        $PSBoundParameters | Out-DebugParameter | Write-Debug

        New-Object -TypeName Org.OpenAPITools.Model.ResponseSupportedLocation -ArgumentList @(
            ${id},
            ${mapUnderscorename}
        )
    }
}
