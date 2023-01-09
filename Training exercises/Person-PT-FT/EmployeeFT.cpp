#include"Person.cpp"
#pragma once
class EmployeeFT : public Person{
    private:
        int day;
        long money;
    public:
        EmployeeFT(){}
        EmployeeFT(string name, int age, string add, string tel, string sex, int day, int money) : Person(name,age,add,tel,sex), day(day),money(money){}
        int getDay(){
            return day;
        }
        int getMoney(){
            return money;
        }
        long salary(){
            return long(day) * money;
        }
        void display(){
            cout << "Employee Full Time" << endl;
		    Person::display();
		    cout << "Day: " << day << endl;
		    cout << "Money: " << money << endl;
		    cout << "Salary: " << salary() << endl;
        }
        static vector<EmployeeFT> getMaxSalary(vector<EmployeeFT> ft)
	{
		long max = ft[0].salary();
		for (int i = 1; i < ft.size(); i++)
		{
			if (ft[i].salary() > max)
			{
				max = ft[i].salary();
			}
		}
		vector<EmployeeFT> v;
		for (int i = 0; i < ft.size(); i++)
		{
			if (ft[i].salary() == max)
			{
				v.push_back(ft[i]);
			}
		}
		return v;
	}
};