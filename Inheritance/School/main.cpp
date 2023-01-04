#include<iostream>
using namespace std;
#include "Person.cpp"
#include "Student.cpp"
#include "Teacher.cpp"
int main(){
    Student Hung("Nguyen Hung",19,"Thanh pho Ho Chi Minh",9.0);
    Teacher Ngan("Ngan",19,"Binh Dinh",35000000);
    Hung.display();
    Ngan.display();
    return 0;
}