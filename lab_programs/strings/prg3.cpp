//3.	Count No. Of Words in String
#include<iostream>
#include<string>
using namespace std;
int main(){
	string str;
	cout<<"Enter a string : ";
	getline(cin,str);
	int n=str.length();
	int count_word=0;
	for(int i=0;i<n;i++){
		if(!(isspace(str[i]))){
			continue;
		}
		else{
			if(str[i+1]){
			count_word++;
		}
	}
}
	
	cout<<"\nThe number of words in the string is "<<count_word<<endl;
	return 0;
}
