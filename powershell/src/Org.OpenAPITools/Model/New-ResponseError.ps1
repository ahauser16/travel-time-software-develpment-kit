function New-ResponseError {
    [CmdletBinding()]
    Param (
        [Parameter(Position = 0, ValueFromPipelineByPropertyName = $true)]
        [System.Nullable[Int32]]
        ${httpUnderscorestatus},
        [Parameter(Position = 1, ValueFromPipelineByPropertyName = $true)]
        [System.Nullable[Int32]]
        ${errorUnderscorecode},
        [Parameter(Position = 2, ValueFromPipelineByPropertyName = $true)]
        [String]
        ${description},
        [Parameter(Position = 3, ValueFromPipelineByPropertyName = $true)]
        [String]
        ${documentationUnderscorelink},
        [Parameter(Position = 4, ValueFromPipelineByPropertyName = $true)]
        [{String, String[]}]
        ${additionalUnderscoreinfo}
    )

    Process {
        'Creating object: Org.OpenAPITools.Model.ResponseError' | Write-Verbose
        $PSBoundParameters | Out-DebugParameter | Write-Debug

        New-Object -TypeName Org.OpenAPITools.Model.ResponseError -ArgumentList @(
            ${httpUnderscorestatus},
            ${errorUnderscorecode},
            ${description},
            ${documentationUnderscorelink},
            ${additionalUnderscoreinfo}
        )
    }
}
