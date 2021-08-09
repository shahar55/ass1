#include "knnGenerate.hpp"
#include "classifiedFlower.hpp"
#include "unclassifiedFlower.hpp"
#include <queue>

const void KNNGenerate::fillDistances(std::vector<const ClassifiedFlower> flowers,UnclassifiedFlower unNamedFlower) {
    for (ClassifiedFlower cf:flowers) {
        cf.setDistance(unNamedFlower);
    }
}

const std::vector<const ClassifiedFlower> KNNGenerate::kthClosest(UnclassifiedFlower unNamedFlower,std::vector<const ClassifiedFlower> flowers,int k) {
    fillDistances(flowers,unNamedFlower);
    std::priority_queue<int, std::vector<ClassifiedFlower>,std::greater<ClassifiedFlower>> pq(flowers.begin(), flowers.end());
    std::vector<const ClassifiedFlower> kth;
    // do for remaining array elements
    while (--k+1) {
        kth.push_back(pq.top());
        pq.pop();
    }
    return kth;
}




