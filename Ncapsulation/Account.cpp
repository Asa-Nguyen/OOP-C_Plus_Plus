#include<iostream>
using namespace std;

class Account{
    private:
        int id;
        string name;
        int balance;
    public:
        Account(int id,string name){
            this->id = id;
            this->name = name;
        }
        Account(int id,string name,int balance){
            this->id = id;
            this->name = name;
            this->balance = balance;
        }
        int getId(){
            return id;
        }
        void setName(string name){
            this->name = name;
        }
        string getName(){
            return name;
        }
        int getBalance()
        {
            return balance;
        }
        void deposit(int amount){
            balance += amount;
        }
        void withdraw(int amount){
            if(balance>=amount)
                balance -= amount;
            else
                cout<<"That amount exceeds your current balance." << endl;
        }
        void display(){
            cout<<"Id: "<<id<<endl;
            cout<<"Name: "<<name<<endl;
            cout<<"Balance: "<<balance<<endl;
        }
};

int main()
{
    Account a(101,"Hung Nguyen",500000);
    a.deposit(300000);
    a.withdraw(700000);
    a.display();
    return 0;
}