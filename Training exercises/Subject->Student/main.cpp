#include "Student.cpp"
#include "Subject.cpp"
void Input(vector<Subject>&s,vector<Student>&st){
    char c = '1';
    int count = 0;
    for (int i = 0; i < s.size(); i++)
    {
        s[i].setNameSub("OOP"+c);
        s[i].setPoint(9.9 - count);
        s[i].setNumberCredit(3+count);
        s[i].setMoney(300 + count);
        count++;
        c+=1;
        st[i].setId(2180607588+count);
        st[i].setName("Hung"+c);
        st[i].setS(s);
    }
    
}
void Outpout(vector<Student>st){
    for(auto i : st){
        i.display();
        cout<<"\n";
    }
}
int main(){
    int n;
    cin>>n;
    vector<Subject>s(n);
    vector<Student>st(n);
    Input(s,st);
    Outpout(st);
}