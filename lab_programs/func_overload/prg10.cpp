/*10.	Write a program that demonstrates function overloading by defining two functions with the 
same name and same template parameter list, but different template specializations.*/

#include <iostream>
using namespace std;

template<class T>
void print(T arg) {
    cout <<"Accepted value is "<<arg << endl;
}

template<>   //template specialization for string type
void print(string arg) {
    cout << "welcome!!!! " << arg << endl;
}


int main() {
    print(3.14);
    print(42);
    print<string>("vishwa");
    return 0;
}
