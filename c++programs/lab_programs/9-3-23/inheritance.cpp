#include<iostream>
using namespace std;

class CommunityMember{
	protected:
		string designation;
		int ssn;
		int salary;	
	public:
		CommunityMember(int no=0, string desig="",int sal=0) : ssn(no),designation(desig), salary(sal) {
			cout<<"\nCommunity member added"<<endl;
		} 
		
	    void print(){
	    	cout<<"\nThe social security number is "<<ssn<<endl;
	    	cout<<"The designation of community member is "<<designation<<endl;
	    	cout<<"The salary of the community member is "<<salary<<endl;
		}
};

class Employee : public CommunityMember{
	public:
		Employee(int emp_no,string designation,int given_salary)
		 : CommunityMember(emp_no,designation,given_salary)
		{
			cout<<"\nThe employee object created"<<endl;
		}
		
};

class Student : public CommunityMember{
	public:
		Student(int stu_no)
		 : CommunityMember(stu_no,"Student")
		{
			cout<<"\nThe student object created"<<endl;
		}
};

class Alumnus : public CommunityMember{
	public:
		Alumnus(int Alum_no)
		 : CommunityMember(Alum_no,"Alumnus")
		{
			cout<<"\nThe Alumnus object created"<<endl;
		}
};

class Faculty : public Employee{
	public:
		Faculty(int Fac_no,string designation,int salary)
		 : Employee(Fac_no,designation,salary)
		{
			cout<<"\nThe Faculty object created"<<endl;
		}
};

class Staff : public Employee{
	public:
		Staff(int st_no,int salary)
		 : Employee(st_no,"Staff",salary)
		{
			cout<<"\nThe Staff object created"<<endl;
		}
};

class Administrator : virtual public Faculty{
	public:
		Administrator(int Admin_no,int salary)
		 : Faculty(Admin_no,"AdminstratorTeacher",salary)
		{
			cout<<"\nThe Administrator object created"<<endl;
		}	
};

class Teacher:virtual public Faculty{
	private:
		int teacher_number;
		int salary;
	public:
		Teacher(int t_no,int salary) : Faculty(t_no,"AdministratorTeacher",salary)
		{
			cout<<"\nThe Teacher object created"<<endl;
		}
};

class AdministratorTeacher : public Administrator,public Teacher

{   public:
		AdministratorTeacher(int ad_no,int salary)
		 : Administrator(ad_no,salary), Teacher(ad_no,salary)
		{
			cout<<"\nThe AdministratorTeacher object created object created"<<endl;
		}
};


int main(){
	Student s1(2021115109);
	s1.print();
	
	Alumnus a1(8888);
	a1.print();
	
	Staff revathi(6765,20000);
	revathi.print();
	
	AdministratorTeacher anto(7654,500000);
	anto.print();
}
