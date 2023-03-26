#include<iostream>
#include<vector>
using namespace std;
class CommunityMember{
	protected:
		int id;
		string name;
		int salary;
	public:
		CommunityMember(int a, string b, int c) : id(a), name(b), salary(c) {}
		
        virtual void show(){
        	cout<<"\nThe id of the community member is : "<<id<<endl;
        	cout<<"The name of the community member is : "<<name<<endl;
        	cout<<"The salary of the community member is : "<<salary<<endl;
		}
};

class Employee: public CommunityMember{
	protected:
		int emp_id;
		string emp_name;
		int emp_salary;
	public:
		Employee (int c, string d, int e) : CommunityMember(c,d,e), emp_id(c), emp_name(d), emp_salary(e) {}
    virtual void show(){
        	cout<<"\nThe id of the Employee is : "<<emp_id<<endl;
        	cout<<"The name of the Employee is : "<<emp_name<<endl;
        	cout<<"The salary of the Employee is : "<<emp_salary<<endl;
		}
};

class Faculty: public Employee{
	protected:
		int fac_id;
		string fac_name;
		int fac_salary;
	public:
		Faculty (int f, string g, int h) : Employee(f,g,h), fac_id(f), fac_name(g), fac_salary(h) {}
    virtual void show(){
        	cout<<"\nThe id of the Faculty is : "<<fac_id<<endl;
        	cout<<"The name of the Faculty is : "<<fac_name<<endl;
        	cout<<"The salary of the Faculty is : "<<fac_salary<<endl;
		}
};

class Administrator:virtual  public Faculty{
	protected:
		int admin_id;
		string admin_name;
		int admin_salary;
	public:
		Administrator (int i, string j, int k) : Faculty(i,j,k), admin_id(i), admin_name(j), admin_salary(k) {}
    virtual void show(){
        	cout<<"\nThe id of the Administrator is : "<<admin_id<<endl;
        	cout<<"The name of the Administrator is : "<<admin_name<<endl;
        	cout<<"The salary of the Administrator is : "<<admin_salary<<endl;
		}
};

class Teacher: virtual public Faculty{
	protected:
		int teach_id;
		string teach_name;
		int teach_salary;
	public:
		Teacher (int l, string m, int n) : Faculty(l,m,n), teach_id(l), teach_name(m), teach_salary(n) {}
    virtual void show(){
        	cout<<"\nThe id of the Teacher is : "<<teach_id<<endl;
        	cout<<"The name of the Teacher is : "<<teach_name<<endl;
        	cout<<"The salary of the Teacher is : "<<teach_salary<<endl;
		}
};

class AdministratorTeacher: public Administrator, public Teacher{
	protected:
		int at_id;
		string at_name;
		int at_salary;
	public:
		AdministratorTeacher (int o, string p, int q) : Faculty(o,p,q), Administrator(o,p,q), Teacher(o,p,q), at_id(o), at_name(p), at_salary(q) {}
    virtual void show(){
        	cout<<"\nThe id of the Administrator Teacher is : "<<at_id<<endl;
        	cout<<"The name of the Administrator Teacher is : "<<at_name<<endl;
        	cout<<"The salary of the Administrator Teacher is : "<<at_salary<<endl;
		}
};

class Student: public CommunityMember{
	protected:
		int stu_id;
		string stu_name;
		int stu_salary;
	public:
		Student (int r, string s, int t) : CommunityMember(r,s,t), stu_id(r), stu_name(s), stu_salary(t) {}
    virtual void show(){
        	cout<<"\nThe id of the Student is : "<<stu_id<<endl;
        	cout<<"The name of the Student is : "<<stu_name<<endl;
        	cout<<"The salary of the Student is : "<<stu_salary<<endl;
		}
};

class Alumnus: public CommunityMember{
	protected:
		int alu_id;
		string alu_name;
		int alu_salary;
	public:
		Alumnus (int u, string v, int w) : CommunityMember(u,v,w), alu_id(u), alu_name(v), alu_salary(w) {}
    virtual void show(){
        	cout<<"\nThe id of the Alumnus is : "<<alu_id<<endl;
        	cout<<"The name of the Alumnus is : "<<alu_name<<endl;
        	cout<<"The salary of the Alumnus is : "<<alu_salary<<endl;
		}
};

class Staff: public Employee{
	protected:
		int st_id;
		string st_name;
		int st_salary;
	public:
		Staff (int x, string y, int z) : Employee(x,y,z), st_id(x), st_name(y), st_salary(z) {}
    virtual void show(){
        	cout<<"\nThe id of the staff is : "<<st_id<<endl;
        	cout<<"The name of the staff is : "<<st_name<<endl;
        	cout<<"The salary of the staff is : "<<st_salary<<endl;
		}
};

int main(){
	
	vector<CommunityMember*> BasePtr;  //creating a vector of baseclass pointer type
	
	Alumnus* alu=new Alumnus(3333,"Pradeep",50000);  
	BasePtr.push_back(alu);
	
	Student* stu=new Student(5653,"Balaji",0);
	BasePtr.push_back(stu);
	
	Staff* sta=new Staff(7654,"Revathi",80000);
	BasePtr.push_back(sta);
	
	AdministratorTeacher* adt=new AdministratorTeacher(3241,"Anto",750000);
	BasePtr.push_back(adt);
	
	cout<<"The derived class objects of the CommunityMember class was created........."<<endl;
	
	for (auto it : BasePtr) 
		it->show();
		cout<<"\n\n";
	
	return 0;
}