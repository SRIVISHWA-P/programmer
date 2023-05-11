#include<iostream>
#include<iomanip>
using namespace std;

class Time{
	private:
		int hour,minute,second;
	public:
		Time(int a=0,int b=0,int c=0){
			if(a>=0 and a<24)
				hour=a;
			else{
				hour=0;
				cout<<"\nEntered hours is invalid";}
			if(b>=0 and b<60)
				minute=b;
			else{
				minute=0;
				cout<<"\nEntered minutes is invalid";}
			if(c>=0 and c<60)
				second=c;
			else{
				second=0;
				cout<<"\nEntered seconds is invalid";}
			cout<<"The time now is ";
			print(hour,minute,second);
		}
		
		void print(int hour,int minute,int second){
			cout<<setfill('0')<<setw(2)<<hour<<":"<<setw(2)<<minute<<":"<<setw(2)<<second<<endl;
		}
		
		void operator++(){
			++second;
			if(second==60){
				second=0;
				++minute;
				if(minute==60){
					minute=0;
					++hour;
					if(hour==24)
						hour=0;
				}
			}
			cout<<"\nThe pre-incremented Time is ";
			print(hour,minute,second);
		}
		
		void operator++(int){
			second++;
			if(second==60){
				second=0;
				minute++;
				if(minute==60){
					minute=0;
					hour++;
					if(hour==24)
						hour=0;
				}
			}
			cout<<"\nThe post-incremented Time is ";
			print(hour,minute,second);
		    }
};
int main() {
	Time o1(23,59,59);
	++o1;
	o1++;
    return 0;
}

