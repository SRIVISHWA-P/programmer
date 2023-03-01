/*5.	Take Input as Full Name and Display the abbreviations of the First and Middle name 
Except the Last Name  For Example: Input string:  Mahendra Singh Dhoni Output String: M.S.Dhoni.*/

#include<iostream>
#include<cctype>  //for using tolower()
using namespace std;
int main(){
	string str;
	cout<<"Enter a string : ";
	getline(cin,str);
	int n=str.length();
	int print_abbr=0;
	cout<<"The abbreviation of your name is "<<endl;
	char ch=toupper(str[0]);
	cout<<ch<<".";print_abbr++;
	for(int i=0;i<n;i++){
		if(str[i]==' '){
		if(print_abbr==1){
			ch=toupper(str[i+1]);
			cout<<ch<<".";print_abbr++;
		}
		else if(print_abbr==2){
			ch=toupper(str[i+1]);
			cout<<ch;print_abbr++;
		}
		}
		else if(print_abbr==3 and toupper(str[i])!=int(ch)){
			cout<<str[i];
		}
	}
return 0;
}
