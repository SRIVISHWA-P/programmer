#include <iostream>
using namespace std;
int main(){
	/*string a;
	cout<<"Enter a string:";
	getline(cin,a);
	cout<<a;*/
	string a("SRI");
	string b("VISHWA ");
	cout<<a+b<<endl;
	cout<<a.append(b)<<endl;
	cout<<a[0]<<endl;
	a.push_back('P');
	cout<<a<<endl;
	string::reverse_iterator it;
	string temp;
	for(it=a.rbegin();it!=a.rend();it++){
		cout<<*it<<endl;
		temp.push_back(*it);
	}
	cout<<temp;
		
	return 0;
}
