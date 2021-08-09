#pragma once
class Flower{
    protected:
        double cupLeafWidth;
        double cupLeafLength;
        double petalWidth;
        double petalLength;
    
    public:
        Flower(double cupLeafWidth,double cupLeafLength,double petalWidth,double petalLength);
        double getEuclideanDistance(const Flower& other);
};