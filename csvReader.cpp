#include "csvReader.hpp"
#include <fstream>
#include <vector>
#include <string>
#include <iostream>
#include <sstream>
std::vector<std::vector<std::string>> CSVReader::readCSV(char const* fileName) {
    std::ifstream inputFile(fileName);
    if (!inputFile.is_open()) std::cout << "ERROR: File Open\n";
    std::vector<std::vector<std::string>> data;
    std::string line;
    while (getline(inputFile,line)) {
        std::vector<std::string> tmp;
        tmp = splitLine(line);
        data.push_back(tmp);
    }
    return data;
}

std::vector<std::string> CSVReader::splitLine(std::string line){
    std::vector<std::string> cells;
	std::stringstream s(line);
    std::string word;
    while (getline(s,word,',')) {
        cells.push_back(word);
    }
    return cells;
}

void CSVReader::writeCSV(std::vector<std::string> stringFlowerData) {
    std::ofstream outputFile("output.csv");
    for (std::string s : stringFlowerData) {
        outputFile<<s;
        outputFile<<'\n';
    }
}

CSVReader::CSVReader() {
}