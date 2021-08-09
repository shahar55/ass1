#pragma once
#include <string>
#include "flower.hpp"
#include "unclassifiedFlower.hpp"
class ClassifiedFlower:public Flower{
    std::string name;
    double distance;
    public:
        ClassifiedFlower(double cupLeafWidth,double cupLeafLength,double petalWidth,double petalLength, char const* type);
        std::string getName() const;
        void setDistance(UnclassifiedFlower& unNamedFlower);
        bool operator> (const ClassifiedFlower& namedFlower) const;
        double getDistance();
};