/* 
 * class CSVHandler.
 *
 *  Created on: 9/08/2021
 *      Authors: shahar abitbol, ido barkai.
 */

#pragma once
#include <string>
#include <vector>
class CSVHandler {
    private:
        std::string fileName;

        // private: spilt line according to "," char.
        std::vector<std::string> splitLine(std::string line);
    
    public:

        // constructor.
        CSVHandler();

        // read a CSV file and return string vector.
        std::vector<std::vector<std::string>> readCSV(char const* fileName);

        // write types of flowers to CSV file.
        void writeCSV(std::vector<std::string> stringFlowerData);


};