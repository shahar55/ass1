#include <iostream>
#include <cmath>
#include "flower.hpp"
#include "classifiedFlower.hpp"
#include "csvReader.hpp"
int main(){
    CSVReader c;
    std::vector<std::vector<std::string>> s = c.readCSV("../resources/classified.csv");
    for (std::vector<std::string> a: s) {
        for (std::string i: a) {
            std::cout<<i<<" ";
        }
        std::cout<<'\n';
    }
    return 0;
}