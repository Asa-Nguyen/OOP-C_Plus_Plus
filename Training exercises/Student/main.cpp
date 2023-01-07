#include "Student.cpp"

void Input(vector<Student>&vt){
    string count = "0";
    double c = 0;
    for(int i=0;i<vt.size();i++){
        vt[i].setName("H"+count);
        vt[i].setMath(9-c);
        vt[i].setPhysic(8-c);
        vt[i].setChemistry(7-c);
        count+=1;
        c++;
    }
}

void Output(vector<Student>vt){
    for(auto i : vt)
        i.display();
        cout<<"\n";
}

int main(){
    int n;
    cin>>n;
    vector<Student>vt(n);
    Input(vt);
    Output(vt);
}