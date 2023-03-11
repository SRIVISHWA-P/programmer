/*8.	Write a program that demonstrates function overloading by 
defining two functions with the same name and same template, but different template parameters.*/

#include<iostream>
using namespace std;
template<class F>  
	void print(F arg){
		cout<<"The accepted argument is "<<arg<<endl;
	}
template<class F,class G>
void print(F arg1,G arg2){ //same template,different parameters
	cout<<"The accepted arguments is "<<arg1<<" and "<<arg2<<endl;
	}
int main(){
	print(6);
	print(999,"Hello world!!");
	return 0;
}


