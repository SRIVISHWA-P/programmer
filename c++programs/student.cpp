#include <iostream>
#include <string>
using namespace std;
int n;
class student{
	private:
		string name;
		int marks;
		
	public:
	
	void set(){
		cout<<"enter the name\n";
		cin>>name;
		
		cout<<"enter the marks\n";
		cin>>marks;
	} 
	 	
	static void top3(student s[]){
		int arr[100];
		int in=0;
		for(int i=0;i<n;i++){
			arr[in]=s[i].marks;
		}
		
		for(int j=0;j<n;j++){
			for(int k=0;k<n;k++){
				if(arr[k]<arr[k+1]){
					int temp=arr[k+1];
					arr[k+1]=arr[k];
					arr[k]=temp;
				}
			}
		}
	  for(int i=0;i<n;i++){
	  		if(arr[0]==s[i].marks){
	  			cout<<"the student with first rank is"<<s[i].name<<"\n";
			  }
		  }
	
	 for(int i=0;i<n;i++){
	  		if(arr[1]==s[i].marks){
	  			cout<<"the student with second rank is"<<s[i].name<<"\n";
			  }
		  }
		  
	 for(int i=0;i<n;i++){
	  		if(arr[2]==s[i].marks){
	  			cout<<"the student with third rank is"<<s[i].name<<"\n";
			  }
		  }	  	  
		  
	  }	
		
};

int main(){
	cout<<"enter the length\n";
    int n;
	cin>>n;
	student s1[n];
	student::top3(s1);
}
