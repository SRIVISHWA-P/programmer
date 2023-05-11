/*5.	Write a program that demonstrates function overloading 
by defining three functions with the same name but different combinations of parameter types and number.*/

#include<iostream>
using namespace std;

class adder{
	public:
		int add(int a,int b){
			return a+b;
		}
		
		string add(string a,string b,string c){
			return a+b+c;
		}
		
		double add(int a,double b){
			return a+b;
		}
};
int main(){
	adder obj;
	cout<<"Addition of two integers is "<<obj.add(200,300)<<endl;
	cout<<"Addition of three strings is "<<obj.add("We","lc","ome")<<endl;
	cout<<"Addition of an integer and a float number is "<<obj.add(3,4.14)<<endl;
	return 0;
}
