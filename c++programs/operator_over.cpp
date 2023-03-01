#include<iostream>
using namespace std;

class add{
private:
	int r,i;
public:
	add(){
		r=0;
		i=0;
	}
	add(int x,int y){
		r=x;
		i=y;
	}
	void print(){
		cout<<r<<"+"<<i<<"i"<<endl;
	}
	
	add operator -(add v){
		add temp;
		temp.r=r-v.r;
		temp.i=i-v.i;
		return temp;
	}
	
	add operator +(add v){
		add temp;
		temp.r=r+v.r;
		temp.i=i+v.i;
		return temp;
	}
	
	add operator *(add v){
		add temp;
		temp.r=r*v.r;
		temp.i=i*v.i;
		return temp;
	}
};

int main(){
	add o1(9,5);
	add o2(2,3);
	add o3;
	add o4;
	add o5;
	o3=o1-o2;
	o4=o1+o2;
	o5=o1*o2;
	
	o3.print();
	o4.print();
	o5.print();
	

	return 0;
}
