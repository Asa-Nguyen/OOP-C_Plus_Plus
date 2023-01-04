#include<iostream>
using namespace std;

class Rectangle{
    private:
        double length;
        double width;
    public:
        Rectangle(){

        }
        Rectangle(double length,double width){
            this->length = length;
            this->width = width;
        }
        
        double getLength(){
            return length;
        }

        void setLength(double length){
            this->length = length;
        }
        double getWidth(){
            return width;
        }
        void setWidth(double width){
            this->width = width;
        }
        double getArea(){
            return length*width;
        }
        double getPerimeter(){
            return 2*(length+width);
        }
};

int main(){
    Rectangle r(4,5);
    cout<<r.getArea();
    return 0;
}