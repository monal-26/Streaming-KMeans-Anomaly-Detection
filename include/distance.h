#pragma once
#include <vector>

enum class DistanceMetric {
    EUCLIDEAN,
    MANHATTAN
};

double compute_distance(const std::vector<double>& a,const std::vector<double>& b,DistanceMetric metric);