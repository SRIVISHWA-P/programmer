/*4.	Create a class named Student with name, age and marks. Find out the
students having top 3 marks.*/

#include<iostream>
using namespace std;

class Student{
private:
string name;
int age;
float marks[5];
float total=0;
public:
	
void accept(){
	string arr[5]={"Tamil","English","Maths","Science","Social"};
	cout<<"\nEnter your name : ";
	cin.ignore();
	getline(cin,name);
	cout<<"\nEnter your age : ";
	cin>>age;
	for(int i=0;i<5;i++){
		cout<<"\nEnter your "<<arr[i]<<" marks : ";
		cin>>marks[i];
		total+=marks[i];
	}
}

static void top3(Student a[],int n){
	float first,second,third;
	first=second=third=0;
	string f_person,s_person,t_person;
	for(int i=0;i<n;i++){
		if(a[i].total>first){
			third=second;
			second=first;
			first=a[i].total;
			f_person=a[i].name;
		}
		else if(a[i].total>second && a[i].total!=first){
			third=second;
			second=a[i].total;
			s_person=a[i].name;
		}
		else if(a[i].total>third && a[i].total!=second){
			third=a[i].total;
			t_person=a[i].name;
		}
	}
	if(s_person=="" || t_person==""){
		for(int k=0;k<n;k++){
			if(a[k].total==second){
				s_person=a[k].name;
			}
			else if(a[k].total==third){
				t_person=a[k].name;
			}
		}
	}
	cout<<"The top the students who scored highest marks are :"<<endl;
	cout<<"1."<<f_person<<" with a total "<<first<<endl;
	cout<<"2."<<s_person<<" with a total "<<second<<endl;
	cout<<"3."<<t_person<<" with a total "<<third<<endl;
}


};


int main(){
int n;
cout<<"Enter the number of students(should be greater than 3): "; cin>>n;
Student obj[n];

for(int i=0;i<n;i++){
cout<<"\n\t\tStudent"<<i+1<<endl;
obj[i].accept();	
}
Student::top3(obj,n);
return 0;
}


