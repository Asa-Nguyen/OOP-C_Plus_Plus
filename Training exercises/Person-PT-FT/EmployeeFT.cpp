#include"Person.cpp"
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
            Person::display();
            cout<<"Day: "<<day<<endl;
            cout<<"Money: "<<money<<endl;
            cout<<"Salary: "<<salary()<<endl;
        }
        vector<EmployeeFT> getMaxSalary(vector<EmployeeFT>e){
            vector<EmployeeFT>max_salary;
            long max = e[0].salary();
            for (int i = 0; i < e.size(); i++)
            {
                if(max<e[i].salary())
                    max = e[i].salary();
            }
            for (int i = 0; i < e.size(); i++)
            {
                if(e[i].salary()==max)
                    max_salary.push_back(e[i]);
            }
                return max_salary;
        }
};