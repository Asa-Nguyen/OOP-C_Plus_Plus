#include "Car.cpp"
#include "Transport.cpp"

void Input(vector<Transport>&t,vector<Car>&c){
    const char* cc = "Viet Nam";
    int count = 0;
    for (int i = 0; i < c.size(); i++)
    {
        c[i].setManufacturer("Ford");
        c[i].setName("Car" );
        c[i].setSpeed(400+count);
        c[i].setYear(2020+count);
        c[i].setNumberSeat(4+count);
        c[i].setEngineType("diesel"+*cc);
        cc++;
        count++;
    }
    
}

void Output(vector<Transport>t,vector<Car>c){
    // for(auto i : t){
    //     i.display();
    //     cout<<"\n";
    // }
    for(auto i : c){
        i.display();
        cout<<"\n";
    }
}

int main()
{
    int n;
    cin>>n;
    vector<Transport>t(n);
    vector<Car>c(n); 
    Input(t,c);
    Output(t,c);   
    return 0;
}