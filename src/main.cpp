#include <iostream>
#include "distance.h"

int main() {

    std::vector<double> a = {10,20};
    std::vector<double> b = {13,24};

    double d =
    compute_distance(a,b,
    DistanceMetric::EUCLIDEAN);

    std::cout<<"Distance: "<<d<<"\n";

}

