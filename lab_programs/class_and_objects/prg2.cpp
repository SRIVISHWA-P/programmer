//2.	Create a class named Fibonacci which would generate proper Fibonacci

#include<iostream>
using namespace std;

class Fibonacci{
	
	private:
	int a=0,b=1,c,n;
	
	public:
	//setter for n
	void set_n(int y){
		n=y;
	}
	//display method for fibonacci series
	void display(){
		cout<<"\nThe fibonacci series is "<<endl;
		if(n==1)
		cout<<0;
		else if(n==2)
			cout<<1;
		else
			cout<<a<<endl<<b<<endl;
			for(int i=2;i<n;i++){
				c=a+b;
				cout<<c<<endl;
				a=b;
				b=c;
			}
		
	}
};

int main(){
	Fibonacci o1;
	int n;
	cout<<"Enter the value of n: ";
	cin>>n;
	o1.set_n(n);
	o1.display();	
}
