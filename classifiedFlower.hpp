#pragma once
#include <string>
#include "flower.hpp"
#include "unclassifiedFlower.hpp"
class ClassifiedFlower:public Flower{
    std::string name;
    int distance;
    public:
        ClassifiedFlower(int x1,int x2,int x3,int x4,char const* s);
        std::string getName();
        void setDistance(UnclassifiedFlower& f);
        bool operator> (const ClassifiedFlower& f) const;
};