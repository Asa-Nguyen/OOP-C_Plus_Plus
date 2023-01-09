#include<bits/stdc++.h>
using namespace std;
class Traingle : public Geometry{
    private:
        int a;
        int b;
        int c;
    public:
        Traingle(){}
        Traingle(int a , int b , int c) : a(a),b(b),c(c) {}
        double perimeter(){
            return a+b+c;
        }
        double area()
	    {
		    double p = (a + b + c) / 2.0;
		    return sqrt(p * (p - a) * (p - b) * (p - c));
	    }
};