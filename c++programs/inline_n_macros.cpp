#include <iostream>
using namespace std;

#define MAX(a,b) (a > b) ? a : b //macros

inline int max(int a, int b)    //inline function
{
    return (a > b) ? a : b;
}

int main(){
	cout<<"The result of MAX(67,34) is: ";
	int temp = MAX(67,34);
	cout<< temp<<endl;
	cout<<"\nThe result of max(67,34) is: "<<max(67,34)<<endl;
	return 0;
}