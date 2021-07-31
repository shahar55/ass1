#include "knnGenerate.hpp"
#include "classifiedFlower.hpp"
#include "unclassifiedFlower.hpp"
#include <queue>

std::vector<ClassifiedFlower> KNNGenerate::kthClosest(UnclassifiedFlower f,std::vector<ClassifiedFlower> v,int k) {
    std::priority_queue<int, std::vector<ClassifiedFlower>> pq(v.begin(), v.begin() + k);
    std::vector<ClassifiedFlower> kth;
    // do for remaining array elements
    for (int i = k; i < v.size(); i++)
    {
        // if the current element is less than the root of the heap
        if (f.getEuclideanDistance(v[i]) < f.getEuclideanDistance(pq.top()))
        {
            // replace root with the current element
            kth.push_back(pq.top());
            pq.pop();
            pq.push(v[i]);
        }
    }
    return kth;
}

