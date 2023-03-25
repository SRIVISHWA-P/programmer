//max profit in stock

#include<iostream>
using namespace std;
int main(){
	int prices[]={10, 22, 5, 75, 65, 80};
	int n=sizeof(prices)/sizeof(prices[0]);
	
	int k=2;   //here k represents the number of transactions and n denotes number of days or prices on the day
	int profit[k+1][n+1];
	
	for(int j=0;j<=n;j++)
	  profit[0][j] = 0;     //making first row because k=0 means no transcation
	
	for(int i=0;i<=k;i++){
		profit[i][0] = 0;   //making first column 0 because if we buy a stock at one price we cant sell it in the same price
		               //(literally we have only one price)
	}
	
	for(int i=1;i<=k;i++){ //for iterating through transactions
		for(int j=1;j<n;j++){ //for  iterating through prices
			
			int max_until=INT_MIN; //this element is for calculating maximum profit at that price		
			
			for(int m=0;m<j;m++){ //for iterating upto j-1 th element
				max_until= max( max_until, prices[j]-prices[m]+profit[i-1][m] ); //checking the maximumm profit before jth element
			}
			profit[i][j]=max(max_until,profit[i][j-1]); //checking if profit until > profit at j-1 th element
		}
	}
	cout<<"The maximux profit earned is "<<profit[k][n-1];
	return 0;
}
