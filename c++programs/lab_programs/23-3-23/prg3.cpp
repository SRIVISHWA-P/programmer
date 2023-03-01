/*3.	Write a program that demonstrates function overloading by defining 
two functions with the same name but different const-ness of parameters.*/

#include<iostream>
using namespace std;

class const_cls{
	public:
		void assign(int& x,int val){
			x=val;
			cout<<"\nThe value "<<val<<" is assigned to x"<<endl;
		}
		
		void assign(const int& x,int val){
			cout<<"\nReassigning is not allowed for constant variable"<<endl;
		}
};

int main(){
	const_cls a;
	int x; const int y=10;
	a.assign(x,20);
	a.assign(y,20);
	return 0;
}