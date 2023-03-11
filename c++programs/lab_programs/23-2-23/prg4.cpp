/*4.	Write a program that demonstrates function overloading by defining two 
functions with the same name but different return types*/

#include<iostream>
using namespace std;

class num{
	
public:
	int random_number(){
		return 7;
	}
	
	double random_number(){
		return 7.5;
	}
};


int main(){
	num o1;
	cout<<"A random integer is :"<<o1.random_number()<<endl;
	cout<<"A random float number is :"<<o1.random_number()<<endl;
	return 0;
}
