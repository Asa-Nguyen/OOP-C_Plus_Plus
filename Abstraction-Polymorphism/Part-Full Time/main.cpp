#include "Employee.cpp"
#include "FullTimeEmployee.cpp"
#include "PartTimeEmployee.cpp"
int main(){
    Employee* employee1 = new PartTimeEmployee("Trung", 45000, 7);
	cout << "Name: " << employee1->getName() << endl;
	cout << "Salary per day: " << employee1->calculateSalary() << endl;

	Employee* employee2 = new FullTimeEmployee("Linh", 65000);
	cout << "Name: " << employee2->getName() << endl;
	cout << "Salary per day: " << employee2->calculateSalary() << endl;
	return 0;
}