class Flower {
    private:
        int cupLeafWidth;
        int cupLeafLength;
        int petalWidth;
        int petalLength;
    
    public:
        virtual double getEuclideanDistance(const Flower& f) = 0;
}