#include<iostream>
using namespace std;

class box{
private:
int r;
public:
	box(int y){
		r=y;
	}
	void print(){
		cout<<"The value of r is"<<r<<endl;
	}
	void operator ++(){
	++r;
	}
	
	void operator ++(int){
	r++;
	}
		
};


int main(){
	box d(9);
	++d;
	d.print();
	d++;
	d.print();
	return 0;
}
