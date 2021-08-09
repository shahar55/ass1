#pragma once
#include <string>
#include <vector>
class CSVHandler {
    private:
        std::string fileName;
        std::vector<std::string> splitLine(std::string line);
    
    public:
        CSVHandler();
        std::vector<std::vector<std::string>> readCSV(char const* fileName);
        void writeCSV(std::vector<std::string> stringFlowerData);


};