#include<iostream>
using namespace std;

class Base{
	private:
		int private_var=8;
	protected:
		int protected_var=9;
	public:
		int public_var=10;
		
		int get_private_var(){
			return private_var;
			}
};

class pvt_derived : private Base{
	public:
	int get_public_var(){
	return public_var;
	}
	
	int get_protected_var(){
	return protected_var;
	}
};

class pub_derived : public Base{
	public:
	int get_protected_var(){
	return protected_var;
	}
};

class pro_derived : protected Base{
	public:
	int get_public_var(){
	return public_var;
	}
	
	int get_protected_var(){
	return protected_var;
	}
};

int main(){
	pub_derived a;
	cout<<"\nPublic inheritance:"<<endl;
	cout<<"The public variable of base is public here: "<<a.public_var<<endl;
	cout<<"The protected variable of base is protected here: "<<a.get_protected_var()<<endl;
	cout<<"The private variable of base is inaccessible from here"<<endl;
	
	pvt_derived b;
	cout<<"\nPrivate inheritance:"<<endl;
	cout<<"The public variable of base is private here: "<<b.get_public_var()<<endl;
	cout<<"The protected variable of base is private here: "<<b.get_protected_var()<<endl;
    cout<<"The private variable of base is inaccessible from here"<<endl;	
	
	pro_derived c;
	cout<<"\nProtected inheritance:"<<endl;
	cout<<"The public variable of base is protected here: "<<c.get_public_var()<<endl;
	cout<<"The protected variable of base is protected here: "<<c.get_protected_var()<<endl;
    cout<<"The private variable of base is inaccessible from here"<<endl;	

	//the private variable can be accessed by creating a base class object
	Base o;
	cout<<"\nThe private variable is accessed using base class object: "<<o.get_private_var();
	return 0;
}