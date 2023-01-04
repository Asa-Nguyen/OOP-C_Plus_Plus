#include "Person.cpp"
#include "Employee.cpp"
#include "Customer.cpp"
int main(){
    Person *Hung = new Employee("Nguyen Hung","TPHCM",5000);
    Person *Trinh = new Customer("My Trinh","Binh Dinh",1944);
    Employee Huy("Huy Nguyen","Dak Lak",8888);
    Hung->display();
    cout<<Huy.getSalary();
    return 0;
}