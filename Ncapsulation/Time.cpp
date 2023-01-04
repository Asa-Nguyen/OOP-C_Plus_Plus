#include<iostream>
using namespace std;

class Time{
    private:
        int hour;
        int minute;
        int second;
    public:
        Time(int hour,int minute,int second){
            this->hour = hour;
            this->minute = minute;
            this->second = second;
        }
        void setTime(int hour,int minute,int second){
            this->hour = hour;
            this->minute = minute;
            this->second = second;
        }
        int getHour(){
            return hour;
        }
        void setHour(int hour){
            this->hour = hour;
        }
        int getMinute(){
            return minute;
        }
        void setMinute(int minute){
            this->minute = minute;
        }
        int getSecond(){
            return second;
        }
        void setSecond(int second){
            this->second = second;
        }
        void nextSecond(){
            if(hour==23&&minute==59&&second==59)
               {
                    hour = 0;
                    minute = 0;
                    second = 0;
               } 
            else if(minute==59&&second==59)
                {
                    hour++;
                    minute = 0;
                    second = 0;
                }
            else if(second == 59)
                {
                    hour++;
                    minute++;
                    second = 0;
                }
            else
                second++;

        }
        void previousSecond(){
            if(hour == 0&&minute==0&&second)
                {
                    hour = 23;
                    minute = 59;
                    second = 59;
                }
            else if(minute == 0&& second==0)
                {
                    minute = 59;
                    second = 59;
                    hour--;
                }
            else if(second==0)
                {
                    second = 59;
                    minute--;
                    hour--;
                }
            else{
                second--;
            }
        }
        void display(){
            string hour = to_string(this->hour);
            string minute = to_string(this->minute);
            string second = to_string(this->second);
            if(hour.length()==1)
                hour = "0"+hour;
            if(minute.length()==1)
                minute = "0"+minute;
            if(second.length()==1)
                second = "0"+second;
            cout<<hour<<":"<<minute<<":"<<second<<endl;
        }
};

int main(){
    Time t(12, 1, 1);
	t.display();
	t.setTime(23, 59, 59);
	t.display();
	t.nextSecond();
	t.display();
	t.nextSecond();
	t.display();
	t.setTime(7, 0, 0);
	t.display();
	t.previousSecond();
	t.display();
	return 0;
}