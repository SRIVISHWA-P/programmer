#include<iostream>
using namespace std;
int main(){
string str;
	cout<<"Enter a string : ";
	getline(cin,str);
	int n=str.length();
cout<<"The subsets of the given string "<<str<<" is :"<<"\n\n";
for(int i=0;i<n;i++){ //combination 
	for(int j=0;j<n;j++){ //starting element selector
		for(int k=j;k<=j+i;k++){ //subset printer
			if(k<n)
				cout<<str[k];
			else
				cout<<str[k%n];
		}
		cout<<endl;
	}
}
return 0;
}
