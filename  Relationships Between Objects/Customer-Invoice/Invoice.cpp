#include<bits/stdc++.h>
#include "Customer.cpp"
class Invoice{
    private:
        int id;
        Customer customer;
        double amount;
    public:
        Invoice(int id,Customer customer, double amount){
            this->id = id;
            this->customer = customer;
            this->amount = amount;
        }
        int getId(){
            return id;
        }
        void setId(int id){
            this->id = id;
        }
        Customer getCustomer(){
            return customer;
        }
        void setCustomer(Customer customer){
            this->customer = customer;
        }
        double getAmount(){
            return amount;
        }
        void setAmount(double amount){
            this->amount = amount;
        }
        string getCustomerName(){
            return customer.getName();
        }
        double getAmountAfterDiscount(){
            return amount - amount * customer.getDiscount() / 100;
        }
};