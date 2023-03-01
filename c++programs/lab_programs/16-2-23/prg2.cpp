//2.	Check palindrome (or) not
#include<iostream>
#include<string>
using namespace std;
int main(){
	string str;
	cout<<"Enter a string : ";
	getline(cin,str);
	int n=str.length();
	//reversing and storing str in rev_str
	string rev_str;
	for(int i=n-1;i>=0;i--){
		rev_str+=str[i];
    }
    //checking for palindrome
    if(str==rev_str)
    	cout<<"The given string is a palindrome";
	else
		cout<<"The given string is not a palindrome";
	return 0;
}
