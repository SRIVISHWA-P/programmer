/*6.	Write a program that demonstrates function overloading by defining two functions with the same name and 
parameter types, but different default argument values.*/

#include<iostream>
using namespace std;

class Employee{
	public:
		add_employee(int id=0,string name){
			cout<<"Employee id= "<<id<<" and name= "<<name<<" is added"<<endl;
		}
		
		add_employee(int id=0,string name){
			cout<<"Employee id= "<<id<<" and name= "<<name<<" is added"<<endl;
		}
};
int main(){
	Employee o1,o2;
	int n;string s;
	cout<<"Enter the id and name of the employee :"<<endl;
	cin>>n; cin.getline(s);
	o1.add_employee(name);
	cout<<"Enter the id and name of the employee :"<<endl;
	cin>>n; cin.getline();
	return 0;
}
