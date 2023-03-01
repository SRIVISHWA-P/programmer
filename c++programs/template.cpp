#include<iostream>
using namespace std;

template <class Data>
void swapping(Data a,Data b){
	Data temp = a;
	a=b;
	b=temp;
}
int main(){
int a=9;
int b=10;
swap(a,b);
cout<<a<<" "<<b;
	return 0;
} 
