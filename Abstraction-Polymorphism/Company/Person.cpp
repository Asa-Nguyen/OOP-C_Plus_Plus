#include<iostream>
using namespace std;
#pragma once
class Person{
    private:
        string name;
        string address;
    public:
        Person(string name,string address){
            this->name = name;
            this->address = address;
        }
        string getName(){
            return name;
        }
        void setName(string name){
            this->name = name;
        }
        string getAddress(){
            return address;
        }
        void setAddress(string address){
            this->address = address;
        }
        void display(){
            cout<<"Name: "<<name<<endl;
            cout<<"Address: "<<address<<endl;
        }
};