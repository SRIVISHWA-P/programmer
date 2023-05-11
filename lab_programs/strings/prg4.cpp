//4.	Check if the word  is Present in the given Statement "Welcome to all, Hello Take Your Seat"
#include<iostream>
using namespace std;
int main(){
	string str="Hello", search_word="Welcome to all, Hello Take Your Seat" ,ans;
	ans=str.find(search_word)>=0?"YES":"No";
	cout<<"\n\nThe result is "<<ans;
	return 0;
}
