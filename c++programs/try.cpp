#include<iostream>
using namespace std;
int main(){
/*int g=0;
cout<<"bbf is"<<"\n";
cin>>g;
cout<<"\n"<<g;
int *p=&g;
cout<<"\nThe pointer the value is "<<*p;
//This is a comment
int n=100;
int a[]={1,2,3,4,5,6,7,8,9,0,11,4,5,6,7,25,5,4,4,4,4,44};
//find factor
cout<<"Enter a number :"<<endl;
cin>>n;
cout<<"The factors are :"<<endl;
for(int i=1;i<=n;i++){
if(n%i==0)
cout<<i<<" ";
}
*/
int n,sum,r,temp;
cout<<"enter a number : ";
cin>>n;
sum=0;temp=n;
while(temp>0){
	r=temp%10;
	sum+=r*r*r;
	temp=temp/10;
}
if(sum==n){
	cout<<"\nyes";
}
else{
	cout<<"no";
}

return 0; 
}
