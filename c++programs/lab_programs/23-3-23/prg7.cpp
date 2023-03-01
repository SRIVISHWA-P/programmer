/*7.	Write a program that demonstrates function overloading by 
defining two functions with the same name but different templates.*/

#include<iostream>
using namespace std;
template<class F>  
	void print(F arg){
		cout<<"The accepted argument is "<<arg<<endl;
	}
template<class G,class E>
void print(G arg1,E arg2){ //defining print() using different template
	cout<<"The accepted arguments is "<<arg1<<" and "<<arg2<<endl;
	}
int main(){
	print(6);
	print(999,"Hello world!!");
	return 0;
}
