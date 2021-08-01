#include <iostream>
#include <cmath>
#include "flower.hpp"
#include "classifiedFlower.hpp"
#include "csvReader.hpp"
#include "createunClassedFlowers.hpp"
#include "createClassedFlowers.hpp"
#include "knnGenerate.hpp"
int main(){
    CSVReader c;
    std::vector<std::vector<std::string>> s1 = c.readCSV("../resources/classified.csv");
    std::vector<std::vector<std::string>> s2 = c.readCSV("../resources/Unclassified.csv");
    std::vector<ClassifiedFlower> c1 =  createClassedFlowersFromVector (s1);
    std::vector<UnclassifiedFlower> c2 =  createUnClassedFlowersFromVector (s2);
    KNNGenerate k;
    std::vector<ClassifiedFlower> l = k.kthClosest(c2[0],c1,5);
    std::cout<<l.size()<<std::endl;
    for (ClassifiedFlower f : l) {
        std::cout<<f.getName()<<std::endl;
    }
    return 0;
}