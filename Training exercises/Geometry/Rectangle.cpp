#include "Geometry.cpp"
using namespace std;
class Rectangle : public Geometry{
    private:
        int h;
        int w;
    public:
        Rectangle(){}
        Rectangle(int h,int w) :  h(h),w(w){}
        double perimeter(){
            return (w+h)*2;
        }
        double area(){
            return h*w;
        }
};