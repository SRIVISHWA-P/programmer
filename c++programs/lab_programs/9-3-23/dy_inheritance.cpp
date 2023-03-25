// C++ Program to create
// a vector of class objects
// code for Example 2
#include <iostream>
#include <vector>
  
using namespace std;

class Earth{
	public:
		string name;
		
		Earth(string x): name(x)
		{
			cout<<"\nEarth obj";
		}
};

class Land: public Earth{
public:
    Land(string s) : Earth(s)
    {
    	cout<<"\n New land created"<<endl;
	}
};
  
int main()
{
    // vector of class
    vector<Land*> sites;
  
    // Dynamic Memory Allocated
    Land* s1 = new Land("abc");
  
    Land* s2 = new Land("xyz");
  
    sites.push_back(s1);
    sites.push_back(s2);
  
    for (auto it : sites) {
        cout << "Owner:" << it->name
             << "  Address_of_Land:" << it << endl;
    }
  
    return 0;
}
