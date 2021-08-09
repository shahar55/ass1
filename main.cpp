#include <iostream>
#include <cmath>
#include "flower.hpp"
#include "classifiedFlower.hpp"
#include "CSVHandler.hpp"
#include "createunClassedFlowers.hpp"
#include "createClassedFlowers.hpp"
#include "knnGenerate.hpp"
int main(){
    CSVReader c;
    std::vector<std::vector<std::string>> classedString = c.readCSV("../resources/classified.csv");
    std::vector<std::vector<std::string>> unClassedString = c.readCSV("../resources/Unclassified.csv");
    std::vector<const ClassifiedFlower> c1 =  createClassedFlowersFromVector (classedString);
    std::vector<UnclassifiedFlower> c2 =  createUnClassedFlowersFromVector (unClassedString);
    KNNGenerate k;
    std::vector<const ClassifiedFlower> l = k.kthClosest(c2[0],c1,5);
    std::cout<<l.size()<<std::endl;
    for (ClassifiedFlower f : l) {
        std::cout<<f.getName()<<std::endl;
    }
    return 0;
}