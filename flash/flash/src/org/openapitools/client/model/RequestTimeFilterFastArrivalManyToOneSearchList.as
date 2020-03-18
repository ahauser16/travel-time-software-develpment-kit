package org.openapitools.client.model {

import org.openapitools.common.ListWrapper;
import org.openapitools.client.model.RequestArrivalTimePeriod;
import org.openapitools.client.model.RequestTimeFilterFastProperty;
import org.openapitools.client.model.RequestTransportationFast;

    public class RequestTimeFilterFastArrivalManyToOneSearchList implements ListWrapper {
        // This declaration below of _RequestTimeFilterFastArrivalManyToOneSearch_obj_class is to force flash compiler to include this class
        private var _requestTimeFilterFastArrivalManyToOneSearch_obj_class: org.openapitools.client.model.RequestTimeFilterFastArrivalManyToOneSearch = null;
        [XmlElements(name="requestTimeFilterFastArrivalManyToOneSearch", type="org.openapitools.client.model.RequestTimeFilterFastArrivalManyToOneSearch")]
        public var requestTimeFilterFastArrivalManyToOneSearch: Array = new Array();

        public function getList(): Array{
            return requestTimeFilterFastArrivalManyToOneSearch;
        }

}

}
