#include <iostream>
#include <cmath>
#include "flower.hpp"
#include "classifiedFlower.hpp"
#include "csvReader.hpp"
#include "createunClassedFlowers.hpp"
#include "createClassedFlowers.hpp"
#include "knnGenerate.hpp"
#include "findFlowerType.hpp"
int main(){
    CSVReader c;
    std::vector<std::vector<std::string>> s1 = c.readCSV("../resources/classified.csv");
    std::vector<std::vector<std::string>> s2 = c.readCSV("../resources/Unclassified.csv");
    std::vector<ClassifiedFlower> c1 =  createClassedFlowersFromVector (s1);
    std::vector<UnclassifiedFlower> c2 =  createUnClassedFlowersFromVector (s2);
    std::vector<std::string> types;
    KNNGenerate k;
    for (UnclassifiedFlower u:c2) {
        std::vector<ClassifiedFlower> l = k.kthClosest(u,c1,5);
        std::string type = findFlowerName(l);
        types.push_back(type);
    }
    c.writeCSV(types);
    return 0;
}