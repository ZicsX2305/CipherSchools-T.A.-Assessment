#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cout<<"Enter the no. of items - ";
	cin>>n;
	cout<<"Enter the price for each items - "<<endl;
	int a[n];
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	int cust_money;
	cout<<"Enter the amount of money available with customer - ";
	cin>>cust_money;
	cout<<"Enter output shown by the robot - ";
	int rob_op;
	cin>>rob_op;
	int count=0;
	for(int i=0;i<n;i++){
		if(cust_money%a[i]==0){
			count++;
		}
	}
	if(rob_op!=count){
		cout<<"wrong";
	}
	else
	cout<<"right";
	return 0;
}
