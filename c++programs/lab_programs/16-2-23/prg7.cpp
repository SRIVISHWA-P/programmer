/*7.	Change Every Letter in a given String with the letter 
following it in the alphabet Input String: d1department Output String: e1efqbsunfou.*/

#include<iostream>
using namespace std;
int main(){
	string str;
	str="d1department";
	int n=str.length();
	cout<<"The string after changing every letter to its next letter is :"<<endl;
	for(int i=0;i<n;i++){
		if((str[i]>='a' && str[i]<='z')||(str[i]>='A' && str[i]<='Z')){
		int temp=str[i];
		char ch=++temp;
		cout<<ch;
		}
		else
		cout<<str[i];
	}
	return 0;
}
