#pragma once
class Flower{
    protected:
        int cupLeafWidth;
        int cupLeafLength;
        int petalWidth;
        int petalLength;
    
    public:
        Flower(int cupLeafWidth,int cupLeafLength,int petalWidth,int petalLength);
        double getEuclideanDistance(const Flower& other);
};