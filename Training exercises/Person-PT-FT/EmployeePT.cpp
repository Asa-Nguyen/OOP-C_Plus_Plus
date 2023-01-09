#include "Person.cpp"
class EmployeePT : public Person
{
private:
    int hour;
    long money;
public:
    EmployeePT(){}
    EmployeePT(string name,int age,string add,string tel,string sex,int hour,long money): Person(name,age,add,tel,sex),hour(hour),money(money){}
    int getHour(){
        return hour;
    }
    int getMoney()
    {
        return money;
    }
    long salary(){
        return money*long(hour);
    }
    void display(){
        cout<<"Employee Part Time"<<endl;
        Person::display();
        cout<<"Hour: "<<hour<<endl;
        cout<<"Money: "<<money<<endl;
        cout<<"Salary: "<<salary()<<endl;
    }
    vector<EmployeePT> getMaxSalary(vector<EmployeePT> e){
        vector<EmployeePT>max_salary;
        long max = e[0].salary();
        for (int i = 0; i < e.size(); i++)
        {
            if(max<e[0].salary())
                max = e[0].salary();
        }
        for (int i = 0; i < e.size(); i++)
        {
            if(e[i].salary()==max)
                max_salary.push_back(e[i]);
        }
            return max_salary;
    }
};

