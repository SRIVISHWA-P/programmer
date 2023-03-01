
#include<iostream>
using namespace std;
class bike{
	public:
	//pure virtual functions,it must ensure that there shoulddd be a start() function in derived class
		virtual void start()=0;
};

class Apache : public bike
{
	public:
		void start(){
			cout<<"Apache start"<<endl;
		}
};

int main(){
	bike *n;
	n=new Apache;
	n->start();
	return 0;
}
