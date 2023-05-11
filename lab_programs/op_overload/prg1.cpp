/*write a c++ program to add,multiply and divide 2 complex numbers by overloading the
arithmetic operators*/
#include<iostream>
using namespace std;

class complex{
	private:
		float real,imag;
	public:
		complex(int a,int b) : real(a),imag(b){
			cout<<"\nObject created";
		}
		void operator+(complex b){
			cout<<"\nThe addition of two complex numbers is "<<this->real+b.real<<" + "<<this->imag+b.imag<<"i"<<endl;
		}
		
		void operator-(complex b){
			cout<<"\nThe subraction of two complex numbers is "<<this->real-b.real<<" + "<<this->imag-b.imag<<"i"<<endl;
		}
		
		void operator*(complex b){
			cout<<"\nThe multiplication of two complex numbers is "<<this->real*b.real<<" + "<<this->imag*b.imag<<"i"<<endl;
		}
		
		void operator/(complex b){
			cout<<"\nThe division of two complex numbers is "<<this->real/b.real<<" + "<<this->imag/b.imag<<"i"<<endl;
		}
};
int main(){
	complex num1(20,10),num2(10,5);
	num1+num2;
	num1-num2;
	num1*num2;
	num1/num2;
	return 0;
}
