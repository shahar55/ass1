#pragma once
#include <string>
#include "flower.hpp"
class ClassifiedFlower:public Flower{
    std::string name;
    public:
        ClassifiedFlower(int x1,int x2,int x3,int x4,char const* s);
        std::string getName();
};