#include "classifiedFlower.hpp"
#include <string>
ClassifiedFlower::ClassifiedFlower(int x1,int x2,int x3,int x4,char const* s):Flower(x1,x2,x3,x4){
    name = s;
}
std::string ClassifiedFlower::getName(){
    return name;
}

void ClassifiedFlower::setDistance(UnclassifiedFlower& f) {
    distance = f.getEuclideanDistance(*this);
}

bool ClassifiedFlower::operator> (const ClassifiedFlower& f) const {
    return distance>f.distance;
}
