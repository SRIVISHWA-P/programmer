#include<iostream>
using namespace std;

class Account {
private:
    static int Interest;
public:
    static void set(int o) {
        Interest = o;
    }
};

// Declaration for the static data member 'Interest'
int Account::Interest = 0;

int main() {
    Account::set(8);
    return 0;
}

