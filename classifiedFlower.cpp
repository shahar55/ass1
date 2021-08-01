#include "classifiedFlower.hpp"
#include <string>
ClassifiedFlower::ClassifiedFlower(double x1,double x2,double x3,double x4,char const* s):Flower(x1,x2,x3,x4){
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

double ClassifiedFlower::getDistance(){
    return distance;
} 
