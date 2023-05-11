/*2.	Write a program that demonstrates function overloading by 
defining two functions with the same name but different types of parameters*/

#include<iostream>
using namespace std;

class compute{
	public:
		int square(int x){
			return x*x;
		}
		double square(double x){
			return x*x;
		}
};

int main(){
	compute o1;
	cout<<"\nThe square of 2 is   "<<o1.square(2)<<endl;
	cout<<"\nThe square of 2.5 is "<<o1.square(2.5);
	return 0;
}