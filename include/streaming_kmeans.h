#pragma once

#include <vector>
#include <cstddef>
#include "distance.h"

class StreamingKMeans {
public:

    StreamingKMeans(size_t k,
                    size_t dimensions,
                    double threshold,
                    DistanceMetric metric);

    bool process_point(const std::vector<double>& point);

    size_t anomaly_count() const;

    size_t total_points() const;

private:

    size_t k_;
    size_t dimensions_;
    double threshold_;
    DistanceMetric metric_;

    std::vector<std::vector<double>> centroids_;
    std::vector<size_t> counts_;

    size_t anomalies_ = 0;
    size_t total_points_ = 0;

};