#include<iostream>
#include<string>
using namespace std;

class constructor{
	private:
		int a,b,c;
	public:
		explicit constructor(int f,int g,int h) : 
		a(f) , b(g) , c(h)
		{
			cout<<"object created";
		}
};

int main(){
	constructor a(2,3,4);
	cerr << "Name " <<" exceeds maximum length (25).\n"
<< "Limiting courseName to first 25 characters.\n" << endl;

	return 0;
}
