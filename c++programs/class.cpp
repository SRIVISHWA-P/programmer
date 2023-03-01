#include<iostream>
using namespace std;

//copy constructor

class data{
	private:
		int a;
	public:
		data(int h){
			a=h;
		}
		
		//copy constructor
		data(data r){
			a=r.a;
		}
	 void print(){
	 	cout<<"The value of a is"<<a <<endl;
	 }
};

int main(){
//objects..
data g(9);
data o(g);

g.print();
o.print();
}
