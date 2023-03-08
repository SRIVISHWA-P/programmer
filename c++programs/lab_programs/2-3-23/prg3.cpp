#include<iostream>
#include<string>
using namespace std;

class str{
 private:
	string a;
 public:
 	str(string a){
 		this->a=a;
	 }
 	
 	bool operator==(str s){
 		string temp_str=s.a;
 		if(temp_str.length()!=a.length())
 		return false;
 		else{
 			size_t len=s.a.length();
 			for(int i=0;i<len;i++){
 				if(temp_str[i]!=a[i]){
 					return false;
				 }
			 }
			return true;
		 }
	}
};

int main(){
	str a("Vishwa"),b("Vishwa");
	if(a==b)
		cout<<"The two strings are equal"<<endl;
	else
		cout<<"The two strings are not equal"<<endl;
}
