#include<iostream>
using namespace std;
#pragma once
class Employee{
    private:
        string name;
        int paymentPerHour;
    public:
        Employee(string name,int paymentPerHour){
            this->name = name;
            this->paymentPerHour = paymentPerHour;
        }
        string getName(){
            return name;
        }
        void setName(string name){
            this->name = name;
        }
        int getPaymentPerHour(){
            return paymentPerHour;
        }
        void setPaymentPerHour(int paymentPerHour){
            this->paymentPerHour = paymentPerHour;
        }
        virtual int calculateSalary() = 0;
};