#include<iostream>
using namespace std;
#pragma once
class Customer{
    private:
        int id;
        string name;
        int discount;
    public:
        Customer(){

        }
        Customer(int id,string name,int discount){
            this->id = id;
            this->name = name;
            this->discount = discount;
        }
        int getId(){
            return id;
        }
        void setId(int id){
            this->id = id;
        }
        string getName(){
            return name;
        }
        void setName(string name){
            this->name = name;
        }
        int getDiscount(){
            return discount;
        }
        void setDiscount(int discount){
            this->discount = discount;
        }

};