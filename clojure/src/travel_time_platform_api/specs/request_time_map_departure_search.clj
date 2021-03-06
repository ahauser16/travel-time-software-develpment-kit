(ns travel-time-platform-api.specs.request-time-map-departure-search
  (:require [clojure.spec.alpha :as s]
            [spec-tools.data-spec :as ds]
            [travel-time-platform-api.specs.coords :refer :all]
            [travel-time-platform-api.specs.request-transportation :refer :all]
            [travel-time-platform-api.specs.request-time-map-property :refer :all]
            [travel-time-platform-api.specs.request-range-no-max-results :refer :all]
            )
  (:import (java.io File)))


(def request-time-map-departure-search-data
  {
   (ds/req :id) string?
   (ds/req :coords) coords-spec
   (ds/req :transportation) request-transportation-spec
   (ds/req :travel_time) int?
   (ds/req :departure_time) inst?
   (ds/opt :properties) (s/coll-of request-time-map-property-spec)
   (ds/opt :range) request-range-no-max-results-spec
   })

(def request-time-map-departure-search-spec
  (ds/spec
    {:name ::request-time-map-departure-search
     :spec request-time-map-departure-search-data}))
