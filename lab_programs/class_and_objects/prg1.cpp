/*1.	Create a class for Distance having feet and inches as attributes. Try to give
the sum of two distance objects.*/

#include<iostream>
using namespace std;

class Distance{
	private:
		int feet;
		int inch;
	
	public:
		//getter and setter for feet
		int get_feet(){
			return feet;
		}
		void set_feet (int a){
			feet=a;
		}
		
		//getter and setter for inch
		int get_inch(){
			return inch;
		}
		void set_inch (int a){
			inch=a;
		}
		
		void Add_distance(Distance b){
			int feet_sum=feet+b.feet;
			int inch_sum=inch+b.inch;
			
			//checking if inch is greater than 12
			if(inch_sum>=12){
				feet_sum++;
				inch_sum-=12;
			}
			cout<<"The total distance is "<<feet_sum<<"feets and "<<inch_sum<<"inches"<<endl;			
		}
}; 

int main(){
	Distance o1,o2;
	int a,b;
	cout<<"Enter the feet and inch of object1 : ";  cin>>a>>b;
	o1.set_feet(a) ; o1.set_inch(b);
	
	cout<<"Enter the feet and inch of object1 : ";  cin>>a>>b;
	o2.set_feet(a) ; o2.set_inch(b);
	
	//calling distance method
	o1.Add_distance(o2);
	return 0;
}
