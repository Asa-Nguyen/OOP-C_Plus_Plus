#include<iostream>
using namespace std;
#include<vector>
#pragma once

class Person
{
private:
    string name;
    int age;
    string add;
    string tel;
    string sex;
public:
    Person(){}
    Person(string name,int age, string add, string tel, string sex)
    : name(name),age(age), add(add), tel(tel), sex(sex)
    {}
    string getNmae(){
        return name;
    }
    int getAge(){
        return age;
    }
    string getAdd(){
        return add;
    }
    string getTel(){
        return tel;
    }
    string getSex(){
        return sex;
    }
    void display(){
        cout<<"Name: "<<name<<endl;
        cout<<"Age: "<<age<<endl;
        cout<<"Sex: "<<sex<<endl;
        cout<<"Add: "<<add<<endl;
        cout<<"Tel: "<<tel<<endl;
    }
    virtual long salary() = 0;
    static vector<Person*> findPerson(vector<Person*>p){
        vector<Person*>find;
        string find_add = "HH";
        for (int i = 0; i < p.size(); i++)
        {
            if (p[i]->add == find_add)            {
                find.push_back(p[i]);
            }
            
        }
        return p;
        
    }
};


