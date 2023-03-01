/*3.	Create a class named Person with attributes name, id, age and salary with
proper member functions accept and display. Create five person objects and
find out the name of the person getting higher salary.*/

#include<iostream>
using namespace std;

class Person{
	private:
		string name;
		int id,age,salary;
	public:
		void accept(){
			cout<<"\nEnter your id : "; cin>>id;
			cin.ignore();
			cout<<"\nEnter your name : "; getline(cin,name);
			cout<<"\nEnter your age : "; cin>>id;
			cout<<"\nEnter your salary : "; cin>>salary;
		}
		
		void display(){
			cout<<"\nid : "<<id<<endl;
			cout<<"Name : "<<name<<endl;
			cout<<"Age : "<<age<<endl;
			cout<<"Salary : "<<salary<<endl;
		}
		
		
	//highest salary method
	static void highest_salary(Person a[],int n){ //using static keyword because highest salary method has no relation with object
		Person maxPerson;
		int max_salary=a[0].salary;
		string max_name;
		for(int i=0;i<n;i++){
			if(a[i].salary>max_salary){
				max_salary=a[i].salary;
				max_name=a[i].name;
			}
		}
			cout<<"\n\n The person with highest salary is "<<max_name<<" is paid with Rs."<<max_salary<<endl;	
	}
	

};

int main(){
	int n;
	cout<<"Enter the number of Persons : "; cin>>n;
	Person a[n];
	for(int i=0;i<n;i++){
		cout<<"\nPerson :"<<i+1<<endl;
		a[i].accept();
	}
	Person::highest_salary(a,n); // this method should be used in scope of Person class
	return 0;
}
