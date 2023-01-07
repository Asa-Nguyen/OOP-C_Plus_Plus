#include "Transport.cpp"
class Car : public Transport{
    private:
        int numberSeat;
        string engineType;
    public:
        Car(){}
        Car(string manufacturer,string name,int year,int speed,int numberSeat,string engineType) : Transport(manufacturer,name,year,speed),numberSeat(numberSeat),engineType(engineType) {}
        int getNumberSeat(){
            return numberSeat;
        }
        string getEngineType(){
            return engineType;
        }
        double getSpeedBasic(){
            return this->getSpeed() / numberSeat;
        }
        void setNumberSeat(int numberSeat){
            this->numberSeat = numberSeat;
        }
        void setEngineType(string engineType){
            this->engineType = engineType;
        }
        void display(){
            Transport::display();
            cout << "Number Seat: " << numberSeat << endl;
            cout << "Engine Type: " << engineType << endl;
            cout << "Speed Basic: " << getSpeedBasic() << endl;
        }
        static vector<Car> getCarHaveMaxSpeedBasic(vector<Car> vt)
	{
		vector<Car> v;
		double max = vt[0].getSpeedBasic();
		for (int i = 0; i < vt.size(); i++)
		{
			if (vt[i].getSpeedBasic() > max)
			{
				max = vt[i].getSpeedBasic();
			}
		}
		for (int i = 0; i < vt.size(); i++)
		{
			if (vt[i].getSpeedBasic() == max)
			{
				v.push_back(vt[i]);
			}
		}
		return v;
	}
        static vector<Car>getCarHaveMaxSeat(vector<Car>vt){
            vector<Car>v;
            int max = vt[0].getNumberSeat();
            for (int i = 1; i < vt.size(); i++)
            {
                if(max < vt[i].getNumberSeat())
                    max = vt[i].getNumberSeat();
            }
            for (int i = 0; i < vt.size(); i++)
            {
                if (vt[i].getNumberSeat() == max)
                    v.push_back(vt[i]);
            }
            return v;
            
        }

};