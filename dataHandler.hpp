#pragma once
#include <string>
#include <vector>
#include "unclassifiedFlower.hpp"
#include "classifiedFlower.hpp"
class dataHandler {
    public:
        dataHandler();
        std::vector<ClassifiedFlower> createClassedFlowersFromVector (std::vector<std::vector<std::string>>& data);
        std::vector<UnclassifiedFlower> createUnClassedFlowersFromVector (std::vector<std::vector<std::string>>& data);

};