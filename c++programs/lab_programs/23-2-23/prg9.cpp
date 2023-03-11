/*9.	Write a program that demonstrates function overloading by defining two functions with the 
same name and same template parameters, but different template parameter lists.*/

#include<iostream>
using namespace std;
template<class add>  
	add calculate(add a,add b){
		return a+b;
	}
template<class add>
add calculate(add a,add b,add c){ //different parameter list
	return a+b+c;
	}
int main(){
	cout<<"The addition of two integers is "<<calculate(5,6)<<endl;
	cout<<"The sum of three floating point numbers is "<<calculate(2.5,5.6,7.8)<<endl;
	return 0;
}
