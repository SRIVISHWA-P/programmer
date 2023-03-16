#include<iostream>
using namespace std;

class CommunityMember{
	protected:
		string designation;
		int ssn;
	
	public:
		CommunityMember()
};

class Employee : public CommunityMember{
	
};

class Student : public CommunityMember{
	
};

class Alumnus : public CommunityMember{
	
};

class Faculty : public Employee{
	
};

class Staff : public Employee{
	
};

class Administrator : public Faculty{
	
};

class Teacher : public Faculty{
	
};

class AdminstratorTeacher : public Administrator,public Teacher{
	
};


int main(){
	return 0;
}
