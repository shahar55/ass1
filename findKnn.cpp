#include <fstream>
#include <vector>
#include <string>
#include <iostream>
#include <sstream>
#include "findKnn.hpp"
using namespace std;
std::vector<ClassifiedFlower> findKnn(unclassifiedFlower& test, std :: vector<ClassifiedFlower>& data, int k) {
    ClassifiedFlower near = data[0];
    std :: vector<ClassifiedFlower> knn;
    int minIdis = 99999;
    if (k >= data.size()) {
        return;
    }
    for (int  i = 0; i < k; i++)
    {
        near = data[i];
        for (int j = i; i < data.size(); j++) {
            if (data[j].getEuclideanDistance(test) <= minIdis) {
                minIdis = data[j].getEuclideanDistance(test);
                near = data[j];
            }
        }
        swap(data[i], near);
        knn.push_back(data[i]);
        minIdis = 99999;
    }
    return
    
}
void swap(ClassifiedFlower& x, ClassifiedFlower& y) {
    ClassifiedFlower z = x;
    x = y;
    y = z;
}