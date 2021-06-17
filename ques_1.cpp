#include<bits/stdc++.h>
using namespace std;
int main(){
	cout<<"Enter the value of n - ";
	int n;
	cin>>n;
	int a[n];
	int count=n/2;
	if(n%2==0){
	for(int i=0;i<n/2;i++){
		a[i]= (count++)*-1;
	}
	for(int i=n/2,j=0;i<n;i++,j++){
		a[i]=abs(a[j]);
	}
}
else{
	for(int i=0;i<n/2;i++){
		a[i]= (count++)*-1;
	}
	for(int i=n/2+1,j=0;i<n;i++,j++){
		a[i]=abs(a[j]);
	}
	a[n/2]=0;
}
	for(int i=0;i<n;i++)
	cout<<a[i]<<" ";
	return 0;
}
