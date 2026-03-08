#include "distance.h"
#include <cmath>
#include <stdexcept>

double compute_distance(const std::vector<double>& a, const std::vector<double>& b, DistanceMetric metric) {
    if (a.size() != b.size()) {
    throw std::invalid_argument("Dimension mismatch in distance computation");
    }
    double result = 0.0;
    switch(metric){
        case DistanceMetric::EUCLIDEAN:
                    for (size_t i = 0; i < a.size(); ++i) {
                    double diff = a[i] - b[i];
                    result += diff * diff;
                    }
                    return std::sqrt(result);
        case DistanceMetric::MANHATTAN:
                    for (size_t i = 0; i < a.size(); ++i) {
                    result += std::abs(a[i] - b[i]);
                    }
                    return result;
        default:
                    throw std::invalid_argument("Unknown distance metric");
    }
}

