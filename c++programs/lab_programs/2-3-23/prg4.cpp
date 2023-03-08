/*write a c++ program to create a car class containing model number,name and price. initialize car details through parameterized constructor 
during the creation of objects. Assign user inputs for car & find out the price difference
of two cars using a friend function*/

#include<iostream>
using namespace std;

class car{
private:
	int model_number;
	string name;
	float price;
public:
	car(int a,string b,float c) : model_number(a),name(b),price(c)	
	{
		cout<<"\n Car object created and initialized.."<<endl;
	}
	friend void price_diff(car o1,car o2);
};

void price_diff(car o1,car o2){
	float diff=(o1.price>=o2.price)?(o1.price-o2.price):(o2.price-o1.price);
	cout<<"\n\nThe price difference between the two cars is : "<<diff;
}

int main(){
	car o1(56789,"Jeep",200000.05),o2(34567,"Creta",170000.06);
	price_diff(o1,o2);
	return 0;
}
