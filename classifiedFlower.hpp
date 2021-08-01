#pragma once
#include <string>
#include "flower.hpp"
#include "unclassifiedFlower.hpp"
class ClassifiedFlower:public Flower{
    std::string name;
    double distance;
    public:
        ClassifiedFlower(double x1,double x2,double x3,double x4,char const* s);
        std::string getName();
        void setDistance(UnclassifiedFlower& f);
        bool operator> (const ClassifiedFlower& f) const;
        double getDistance();
};