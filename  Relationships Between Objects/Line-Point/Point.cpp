#include<iostream>
using namespace std;
#pragma once
class Point{
    private:
        int x;
        int y;
    public:
        Point(){

        }
        Point(int x,int y){
            this->x = x;
            this->y = y;
        }
        int getX(){
            return x;
        }
        int getY(){
            return y;
        }
        void setX(int x){
            this->x = x;
        }
        void setY(int y){
            this->y = y;
        }
};