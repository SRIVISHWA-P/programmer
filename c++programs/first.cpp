#include <iostream>
using namespace std;
int main() {
int a=10;
int *ptr=&a;
cout<<"\n"<<++a<<"\n"<<++*ptr;
return 0;
 }