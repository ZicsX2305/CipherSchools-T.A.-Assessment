#include <bits/stdc++.h>
using namespace std;
int solve(int W, int wt[], int val[], int n)
{
    if(n==0||W==0)
    return 0;
    if(wt[n-1]>W)
    return solve(W,wt,val,n-1);
    else
    return max(val[n-1]+solve(W-wt[n-1],wt,val,n-1),solve(W,wt,val,n-1));
}
int main()
{
	int n;
	cout<<"Enter n = ";
	cin>>n;
    int val[n];
    int wt[n];
    cout<<"Enter the weight array - "<<endl;
    for(int i=0;i<n;i++){
    	cin>>wt[i];
	}
	cout<<"Enter the value array - "<<endl;
	for(int i=0;i<n;i++){
		cin>>val[i];
	}
    int W;
    cout<<"Enter the capacity of Knapsack - ";
    cin>>W;
    cout<<solve(W,wt,val,n);
    return 0;
}
