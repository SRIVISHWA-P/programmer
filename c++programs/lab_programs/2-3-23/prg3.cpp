#include<iostream>
#include<string>
using namespace std;

class str{
 private:
	string member;
 public:
 	str(string a){
 		this->member=a;
	 }
 	
 	bool operator==(str s){
 		string temp_str=s.member;
 		if(temp_str.length()!=member.length())
 		return false;
 		else{
 			size_t len=member.length();
 			for(int i=0;i<len;i++){
 				if(temp_str[i]!=member[i]){
 					return false;
				 }
			 }
			return true;
		 }
	}
};

int main(){
	str o1("Vishwa"),o2("Vishwk");
	if(o1.operator==(o2))
		cout<<"The two strings are equal"<<endl;
	else
		cout<<"The two strings are not equal"<<endl;
}
