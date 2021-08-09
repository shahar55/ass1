#include <fstream>
#include <vector>
#include <string>
#include <iostream>
#include <sstream>
#include "findKnn.hpp"
using namespace std;
std::vector<ClassifiedFlower> findKnn(UnclassifiedFlower& test, std :: vector<ClassifiedFlower>& data, int k) {
    ClassifiedFlower near = data[0];
    int minLindx = 0;
    std :: vector<ClassifiedFlower> knn;
    int minIdis = 99999;
    if (k >= data.size()) {
        return knn;
    }
    for (int  i = 0; i < k; i++)
    {
        near = data[i];
        minLindx = i;
        for (int j = i; j < data.size(); j++) {
            if (data[j].getEuclideanDistance(test) <= minIdis) {
                minIdis = data[j].getEuclideanDistance(test);
                near = data[j];
                minLindx = j;
            }
        }
        swap(data[i], data[minIdis]);
        knn.push_back(data[i]);
        minIdis = 99999;
    }
    return knn;
    
}
void swap(ClassifiedFlower& x, ClassifiedFlower& y) {
    ClassifiedFlower z = x;
    x = y;
    y = z;
}