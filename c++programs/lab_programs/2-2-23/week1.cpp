#include<iostream>
#include<cassert>
using namespace std;

class account{
    
    private:
    int acc_balance;
    
    public:
    //constructor
    account(int b){
        assert (b>=0);
        acc_balance=b;
        cout<<"\nObject created!!!\n\n";
    }

    //member functions
    void credit(int a){
        assert (a>0);
        acc_balance+=a;
        cout<<"Rs."<<a<<" credited to your account successfully";
    }

    void debit(int a){
        assert(a>0);
        if(acc_balance>=a){
            acc_balance-=a;
            cout<<"Rs."<<a<<" debited from your account successfully";
    }
        else
         cout<<"Insufficient balance!! pls try again";
    }

    int get_balance(){
        return acc_balance;
    }
};

class Employee {
  private:
    string fname;
    string lname;
    int salary;
    int inc=0;//for incrementing salary purposes 

  public:
  Employee(string a,string b,int c){
    fname=a;
    lname=b;
    salary=c;
    cout<<"\nObject created\n";
  }
    // Salary Setter
    void setSalary(int s) {
      assert (s>0);
      salary = s;
    }
    // Salary Getter
    int getSalary() {
      return salary;
    }

    // fname Setter
    void setfname(string s) {
      assert (s!="");
      fname = s;
    }
    // fname Getter
    string getfname() {
      return fname;
    }

     // lname Setter
    void setlname(string s) {
      assert (s!="");
      lname = s;
    }
    // lname Getter
    string getlname() {
      return lname;
    }

    //yearly salary
    void yearly_salary(){
        if(inc==0){
            salary+=(salary*0.1);inc++;
            cout<<"\n\nCongrats. you got a 10% increment.... Your yearly salary is : "<<salary*12;
        }
        else{
            cout<<"\n\nYour yearly salary is : "<<salary*12;
        }
    }
};

int main(){

/*int bal;
cout<<"\t\t\tWelcome to our bank services, Please enter your account balance :\n\t\t\tRs.";
cin>>bal;
account o1(bal);
int ch;
int amt;
while(ch!=4){
    cout<<"\n\n1.Credit\n2.Debit\n3.Get balance\n4.Exit\n\nEnter your choice :\n";
    cin>>ch;
    switch (ch)
    {
    case 1:
        cout<<"\nEnter the amount to be credited :";
        cin>>amt;
        o1.credit(amt);
        break;
    case 2:
        cout<<"\nEnter the amount to be debited :";
        cin>>amt;
        o1.debit(amt);
        break;
    case 3:
        cout<<"\nAvailable balance is Rs."<<o1.get_balance()<<"\n";
        break;
    case 4:
        cout<<"\nThank you visit again!!!";
}
}
*/

Employee e1("Srivishwa","P",10000);
cout<<"The fname is "<<e1.getfname()<<"\n";
e1.setfname("Sriram");
cout<<"After setting name, fname is "<<e1.getfname();
e1.yearly_salary();
}
