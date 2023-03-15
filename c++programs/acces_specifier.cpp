// C++ program to demonstrate the working of public inheritance

#include <iostream>
using namespace std;

class Base{
	public:
		int pub=4;
	private:
		int pri=2;
	protected:
		int pro=8;
	
	public:
		int getpri(){
			cout<<"\nIam getpri called in base class"<<endl;
			return pri;
		}
		
		int getpro(){
			cout<<"\nIam getpri called in base class"<<endl;
			return pro;
		}
	    void mymeth(){
		    cout<<"\n im in base class";
	    }	
		
};

class basepublic:public Base{
//pub is accessible here
public:
	int getpro(){
			cout<<"\nIam getpro called in basepublic class"<<endl;
			return pro;
		}
		
	void mymeth(){
		cout<<"\n im in derived class";
    }
};

int main(){
	basepublic o1;
	o1.Base::mymeth();
}
