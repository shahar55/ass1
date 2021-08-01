#pragma once
#include "classifiedFlower.hpp"
#include "unclassifiedFlower.hpp"
#include <vector>

class KNNGenerate{
    public:
        std::vector<ClassifiedFlower> kthClosest(UnclassifiedFlower f,std::vector<ClassifiedFlower> flowers,int k);
        void fillDistances(std::vector<ClassifiedFlower> v,UnclassifiedFlower c);
};