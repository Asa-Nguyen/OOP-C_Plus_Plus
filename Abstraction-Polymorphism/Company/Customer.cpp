#include "Person.cpp"
class Customer : public Person{
    private:
        int balance;
    public:
        Customer(string name, string address,int balance) : Person(name,address)
        {
            this->balance = balance;
        }
        int getBalance(){
            return balance;
        }
        void setBalance(){
            this->balance = balance;
        }
        void display(){
            cout<<"Customer name: "<<Person::getName()<<"\n";
            cout<<"Customer address: "<<Person::getAddress()<<"\n";
            cout<<"Customer balance: "<<balance<<"\n";
        }
};