//virtual functions

//main quote: base class pointer;derived class object
#include<iostream>
using namespace std;
class bike{
	public:
		//using virtual functions
		virtual void start(){
			cout<<"Bike start"<<endl;
		}
};

class Apache : public bike
{
	public:
		void start(){
			cout<<"Apache start"<<endl;
		}
};

int main(){
	Apache o1;
	o1.start();
	bike *b;
	b=&o1;
	b->start();
	bike *n;
	n=new Apache;
	n->start();
	return 0;
}
