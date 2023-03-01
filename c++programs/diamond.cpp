#include<iostream>
using namespace std;

class A{
	public:
		void print_a(){
			cout<<"This is A"<<endl;
		}
};

class B:virtual public A
{
	public:
		void print_b(){
			cout<<"This is B"<<endl;
		}
};

class C:virtual public A{
	public:
		void print_c(){
			cout<<"This is C"<<endl;
		}
};

class D:public B,public C{
	public:
		void print_d(){
			cout<<"This is D"<<endl;
		}
};

int main(){
	D f;
	f.print_a();
	
}


