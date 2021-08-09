#include <fstream>
#include <vector>
#include <string>
#include <iostream>
#include <sstream>
#include "createClassedFlowers.hpp"
std::vector<ClassifiedFlower> createClassedFlowersFromVector (std::vector<std::vector<std::string>>& data) {
    std::vector<ClassifiedFlower> classFlowersData;
    for (unsigned i=0; i<data.size(); ++i) {
        classFlowersData.push_back(ClassifiedFlower(std::stod(data[i][0]), std::stod(data[i][1]), std::stod(data[i][2]), std::stod(data[i][3]), const_cast<char*>(data[i][4].c_str())))
        ; // create the classed flowers object from a given data vector.
    }
    return classFlowersData;
}