#include<iostream>
using namespace std;
#pragma once
class Employee{
    private:
        string name;
        int salary;
    public:
        Employee(string name,int salary){
            this->name = name;
            this->salary = salary;
        }
        string getName(){
            return name;
        }
        void setName(string name){
            this->name = name;
        }
        int getSalary(){
            return salary;
        }
        void setSalary(int salary){
            this->salary = salary;
        }
        void display(){
            cout<<"Name: "<<name<<endl;
            cout<<"Salary: "<<salary<<endl;
        }
};