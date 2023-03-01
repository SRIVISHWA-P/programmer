//10.	Take statement ,count words and find largest word in a statement. 

#include<iostream>
#include<string>
using namespace std;

char max_arr[100];
int len(char s[]);
void assign(char b[]);

int main(){
	string str;
	cout<<"Enter a string : ";
	getline(cin,str);
	int n=str.length();
	char arr[100][100];
	int arr_index=0,ins_index=0;
	for(int i=0;i<n;i++){
		if(str[i]!=' '){
			if(str[i]!='.'){
			arr[arr_index][ins_index]=str[i];
			ins_index++;
		   }
		}
		else{
			arr_index++;
			ins_index=0;
		}
	}
	
	cout<<"\nThe number of words in the statement is "<<arr_index+1<<endl;
	cout<<"\nThe largest word in the string is"<<"\n\n";

	int max_num=len(arr[0]); assign(arr[0]);
	for(int i=0;i<=arr_index;i++){
			int n=len(arr[i]);
			if(n>max_num){
				max_num=n;
				assign(arr[i]);
				}
	}
	
	//printing largest word
	int k=0;
	while(max_arr[k]){
		cout<<max_arr[k];
		k++;	
	}
return 0;
}

int len(char s[]){
	int count=0;
	while(s[count]){
	count++;
	}
	return count;
}

void assign(char b[]){
	int count=0;
	while(b[count]){
		max_arr[count]=b[count];
		count++;
	}
}
