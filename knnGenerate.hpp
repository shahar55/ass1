#pragma once
#include "classifiedFlower.hpp"
#include "unclassifiedFlower.hpp"
#include <vector>

class KNNGenerate{
    public:
        std::vector<ClassifiedFlower> kthClosest(UnclassifiedFlower unNamedFlower,std::vector<ClassifiedFlower> flowers,int k);
        void fillDistances(std::vector<ClassifiedFlower> flowers,UnclassifiedFlower unNamedFlower);
};