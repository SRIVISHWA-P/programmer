#include <iostream>
using namespace std;
 
class Encapsulation {
private:
    // Data hidden from outside world
    int x;
 
public:
    // Function to set value of
    // variable x
    void set(int a) { x = a; }
 
    // Function to return value of
    // variable x
    int get() { return x; }
};

int main(){
	Encapsulation *b = new Encapsulation;
	b->set(9);
	cout<<b->get();
}
