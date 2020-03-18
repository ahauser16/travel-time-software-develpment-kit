package org.openapitools.client.model {

import org.openapitools.common.ListWrapper;
import org.openapitools.client.model.RequestRangeFull;
import org.openapitools.client.model.RequestTimeFilterPostcodeSectorsProperty;
import org.openapitools.client.model.RequestTransportation;

    public class RequestTimeFilterPostcodeSectorsDepartureSearchList implements ListWrapper {
        // This declaration below of _RequestTimeFilterPostcodeSectorsDepartureSearch_obj_class is to force flash compiler to include this class
        private var _requestTimeFilterPostcodeSectorsDepartureSearch_obj_class: org.openapitools.client.model.RequestTimeFilterPostcodeSectorsDepartureSearch = null;
        [XmlElements(name="requestTimeFilterPostcodeSectorsDepartureSearch", type="org.openapitools.client.model.RequestTimeFilterPostcodeSectorsDepartureSearch")]
        public var requestTimeFilterPostcodeSectorsDepartureSearch: Array = new Array();

        public function getList(): Array{
            return requestTimeFilterPostcodeSectorsDepartureSearch;
        }

}

}
