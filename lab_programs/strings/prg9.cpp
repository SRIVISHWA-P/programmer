/*9.	If Substring function is given as SUBSTRING(string, position, length), 
find S(5,9) if S="Welcome to world of C++ Programming".*/

#include<iostream>
using namespace std;
void substring(string,int,int);
int main(){
	string s;
	s="Welcome to world of C++ Programming";
	substring(s,5,9);
}

void substring(string s,int pos,int len){
	cout<<"The substring starting from position "<<pos<<" with length "<<len<<" is :"<<"\n\n";
	for(int i=pos;i<pos+len;i++){
	cout<<s[i];
	}
}
