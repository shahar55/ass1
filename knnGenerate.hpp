#pragma once
#include "classifiedFlower.hpp"
#include "unclassifiedFlower.hpp"
#include <vector>

class KNNGenerate{
    public:
        const std::vector<const ClassifiedFlower> kthClosest(UnclassifiedFlower unNamedFlower,std::vector<const ClassifiedFlower> flowers,int k);
        const void fillDistances(std::vector<const ClassifiedFlower> flowers,UnclassifiedFlower unNamedFlower);
};