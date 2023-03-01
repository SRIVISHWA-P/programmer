//6.	Give a Statement " I am Okay,Task Completed" and Delect all Conconents from String.
#include<iostream>
using namespace std;
int main(){
	string str;
	str=" I am Okay,Task Completed";
	int n=str.length();
	cout<<"The string after removing consonants is :"<<"\n";
	for(int i=0;i<n;i++){
		if(str[i]=='a' || str[i]=='e' || str[i]=='i' || str[i]=='o' || str[i]=='u')
		cout<<str[i];
		else if(str[i]=='A' || str[i]=='E' || str[i]=='I' || str[i]=='O' || str[i]=='U')
		cout<<str[i];
	}
	return 0;
}
