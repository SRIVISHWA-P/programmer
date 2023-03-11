/*1.	Write a program that demonstrates function overloading by defining two functions with the 
same name but different number of parameters. */

#include<iostream>
using namespace std;

class num{
	public:
		int add(int x, int y){
			return x+y;
		}
		
		int add(int x,int y,int z){
			return x+y+z;
		}
}; 
int main(){
	num o1;
	cout<<"\nThe addition of 11 and 22        is "<<o1.add(11,22)<<endl;
	cout<<"\nThe addition of 11 and 22 and 33 is "<<o1.add(11,22,33)<<endl;
	return 0;
}
