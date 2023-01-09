#include "Person.cpp"
#include "EmployeeFT.cpp"
#include "EmployeePT.cpp"
int main()
{
	vector<Person*> s;
	Person* a[5];
	a[0] = new EmployeeFT("a", 18, "HN", "09842", "nam", 30, 309200);
	a[1] = new EmployeePT("b", 18, "HN", "09842", "nam", 7, 30000);
	a[2] = new EmployeeFT("c", 18, "HN", "09842", "nam", 30, 1200);
	a[3] = new EmployeePT("d", 18, "HB", "09842", "nam", 6, 1200);
	a[4] = new EmployeeFT("e", 18, "NB", "09842", "nam", 30, 130200);
	s.push_back(a[0]);
	s.push_back(a[1]);
	s.push_back(a[2]);
	s.push_back(a[3]);
	s.push_back(a[4]);
	vector<Person*> per(Person::findPerson(s));
    for (int i = 0; i < per.size(); i++)
    {
        per[i]->display();
        cout<<"\n";
    }
    
}