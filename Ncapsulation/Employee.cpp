#include<iostream>
using namespace std;

class Employee{
    private:
        int id;
        string firstName;
        string lastName;
        int salary;
    public:
        Employee(int id,string fisrtName,string lastName,int salary){
            this->id = id;
            this->firstName = fisrtName;
            this->lastName = lastName;
            this->salary = salary;
        }
        int getId(){
            return id;
        }
        void setId(int id){
            this->id = id;
        }
        string getFirstName(){
            return firstName;
        }
        void setFirstName(string firstName){
            this->firstName = firstName;
        }
        string getLastName(){
            return lastName;
        }
        void setLastName(string lastName){
            this->lastName = lastName;
        }
        int getSalary(){
            return salary;
        }
        void setSalary(int salary){
            this->salary = salary;
        }
        string getFullName(){
            return firstName+" "+lastName;
        }
};
int main(){
    Employee e(2180,"Nguyen","Hung",50000000);
    cout<<e.getFullName();
    return 0;
}