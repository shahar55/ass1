#pragma once
#include <string>
#include <vector>
class CSVReader {
    private:
        std::string fileName;
        std::vector<std::string> splitLine(std::string line);
    
    public:
        CSVReader();
        std::vector<std::vector<std::string>> readCSV(char const* fileName);
        void writeCSV(std::vector<std::string> v);


};