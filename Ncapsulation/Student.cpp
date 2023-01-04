#include<iostream>
using namespace std;

class Student{
    private:
        int id;
        string name;
        int age;
        string address;
        int score;
    public:
        Student(){

        }
        Student(int id,string name,int age, string address, int score){
            this->id = id;
            this->name = name;
            this->age = age;
            this->address = address;
            this->score = score;
        }
        int getId(){
            return id;
        }
        void setId(int id){
            this->id = id;
        }
        string getName(){
            return name;
        }
        void setName(string name){
            this->name = name;
        }
        int getAge(){
            return age;
        }
        void setAge(int age){
            this->age = age;
        }
        string getAddress(){
            return address;
        }
        void setAddress(string address){
            this->address = address;
        }
        int getScore(){
            if(score>10)
                return 10;
            else if(score<0)
                return 0;
            else
                return score;
        }
        void setScore(int score) {
		if (score < 0) {
			this->score = 0;
		} else if (score > 10) {
			this->score = 10;
		} else {
			this->score = score;
		}
	}
};

int main(){
    Student s(7588,"Hung Nguyen",19,"Binh Thuan",11);
    cout<<s.getScore();
    return 0;
}