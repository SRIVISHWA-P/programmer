#include<iostream>
#include<list>
using namespace std;

void print(list<int> x){
    for(int o : x){
        cout<<" "<<o;
    }
    cout<<endl;
}
int main()
{
    list <int> a={70,20,50,10};
    print(a);
    list<int> b;
    b.push_front(150);
    b.push_front(250);
    b.push_back(350);
    print(b);
    cout<<"List First Element in A : "<<a.front()<<endl;
    cout<<"List Last  Element in A : "<<a.back()<<endl;
    cout<<"Empty or Not : "<<a.empty()<<endl;
    cout<<"Before Reverse : ";
    print(a);
    a.reverse();
    cout<<"After Reverse : ";
    print(a);
    cout<<"Before Sort : ";
    print(a);
    a.sort();
    cout<<"After Sort : ";
    print(a);
 
    return 0;
}