#pragma once
#include <string>
#include "flower.hpp"
#include "unclassifiedFlower.hpp"
class ClassifiedFlower:public Flower{
    std::string name;
    int distance;
    public:
        ClassifiedFlower(int cupLeafWidth,int cupLeafLength,int petalWidth,int petalLength, char const* type);
        std::string getName();
        void setDistance(UnclassifiedFlower& unNamedFlower);
        bool operator> (const ClassifiedFlower& namedFlower) const;
};