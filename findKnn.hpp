#pragma once
#include "classifiedFlower.hpp"
#include <fstream>
#include <vector>
#include <string>
#include <iostream>
#include <sstream>
#include "unclassifiedFlower.hpp"
std::vector<ClassifiedFlower> findKnn(UnclassifiedFlower& test, std :: vector<ClassifiedFlower>& data);
void swap(ClassifiedFlower& x, ClassifiedFlower& y);
