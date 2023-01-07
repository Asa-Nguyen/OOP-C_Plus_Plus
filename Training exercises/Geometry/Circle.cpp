#include "Geometry.cpp"
#define PI 3.14
class Circle{
    private:
        int r;
    public:
        Circle(){}
        Circle(int r) : r(r){};
        double perimeter(){
            return 2*PI*r;
        }
        double area(){
            return r*r*PI;
        }
};
