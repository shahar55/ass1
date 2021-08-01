#include "flower.hpp"
#include <cmath>
double Flower::getEuclideanDistance(const Flower& f) {
    double cupLeafLengthPow = pow(cupLeafLength-f.cupLeafLength,2);
    double cupLeafWidthPow = pow(cupLeafWidth-f.cupLeafWidth,2);
    double petalLengthPow = pow(petalLength-f.petalLength,2);
    double petalWidthPow = pow(petalWidth-f.petalWidth,2);
    return sqrt(cupLeafWidthPow+cupLeafLengthPow+petalWidthPow+petalLengthPow);
}

Flower::Flower(double cupLeafWidth,double cupLeafLength,double petalWidth,double petalLength):
cupLeafLength(cupLeafLength),cupLeafWidth(cupLeafWidth),petalLength(petalLength),petalWidth(petalWidth){}