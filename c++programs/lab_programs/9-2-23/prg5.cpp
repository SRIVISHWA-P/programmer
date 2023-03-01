/*5.	Create a class named Book with proper ID, Author Name, Publisher
name, price and year as its data members. Write suitable member
functions to collect the details of various books. Find out the number
of books having the same price.
*/

#include<iostream>
using namespace std;
class Book{
	private:
		int id;
		string author;
		string publisher;
		float price;
		int year;
	public:
		void get_data(){
			cout<<"\nEnter the Book ID : ";  cin>>id;
			cout<<"\nEnter the Author name : "; cin.ignore(); getline(cin,author);
			cout<<"\nEnter the Publisher name : "; cin.ignore(); getline(cin,publisher);
			cout<<"\nEnter the price : ";cin>>price;
			cout<<"\nEnter the year : ";cin>>year;
		}
		//counting books with same price
		static void count(Book a[],int n){
			int count;
			float temp_arr[100]; int temp_count=0; //for maintaining the occurence of elements
			for(int i=0;i<n;i++){
				int flag=0;
				for(int k=0;k<=temp_count;k++){ //To chk if we have aldready visited this element or not
					if(a[i].price==temp_arr[k]);
					flag==1;
				}
				if(flag==0){
					temp_arr[temp_count]=a[i].price;
					temp_count++;
					int p_flag=0;
				for(int j=i+1;j<n;j++){
					if(a[i].price==a[j].price){
						if(p_flag==0){
							cout<<"\n\nThe books with the price : "<<a[i].price<<" is : "<<endl<<'\n';
							cout<<"ID\tAuthor"<<endl<<"\n";
							cout<<a[i].id<<"\t"<<a[i].author<<endl;p_flag=1;
					    }
					cout<<a[j].id<<"\t"<<a[j].author<<endl;
						
						
					}
				}
			}
		}
	}
};


int main(){
	int n;
	cout<<"Enter the number of books : "; cin>>n;
	Book a[n];
	for(int i=0;i<n;i++){
		cout<<"\nBook"<<i+1<<endl;
		a[i].get_data();
	}
	Book::count(a,n);
}
