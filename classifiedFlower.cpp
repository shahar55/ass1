#include "classifiedFlower.hpp"
#include <string>
ClassifiedFlower::ClassifiedFlower(int cupLeafWidth,int cupLeafLength,int petalWidth,int petalLength, char const* type):
Flower(cupLeafWidth, cupLeafLength, petalWidth, petalLength){
    name = type;
}
std::string ClassifiedFlower::getName(){
    return name;
}

void ClassifiedFlower::setDistance(UnclassifiedFlower& unNamedFlower) {
    distance = unNamedFlower.getEuclideanDistance(*this);
}

bool ClassifiedFlower::operator> (const ClassifiedFlower& namedFlower) const {
    return distance > namedFlower.distance;
}
