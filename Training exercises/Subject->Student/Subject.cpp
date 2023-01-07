#pragma once
#include <iostream>
#include <vector>
using namespace std;

class Subject {
private:
	string nameSub;
	double point;
	int numberCredit;
	long money;
public:
	Subject() {}
	Subject(string name, double point, int n, long m) : nameSub(name), numberCredit(n), money(m), point(point) {}
	string getNameSub()
	{
		return nameSub;
	}
    void setNameSub(string nameSub){
        this->nameSub = nameSub;
    }
	int getNumberCredit()
	{
		return numberCredit;
	}
    void setNumberCredit(int numberCredit){
        this->numberCredit = numberCredit;
    }
	long getMoney()
	{
		return money;
	}
    void setMoney(int money){
        this->money = money;
    }
	double getPoint()
	{
		return point;
	}
    void setPoint(double Point){
        this->point = Point;
    }
	void display()
	{
		cout << "Name Subject: " << nameSub << endl;
		cout << "Number Credit: " << numberCredit << endl;
		cout << "Money Of One Credit: " << money << endl;
	}
};