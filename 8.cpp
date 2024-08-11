#include <bits/stdc++.h>
using namespace std;
//int al = sizeof(arr)/sizeof(arr[0]);
int main(){
	int ar[]= {23,67,89,0,87,56,4};
	cout<<"Enter the position we want to break the array size";
	int x;
	int l=sizeof(ar)/sizeof(ar[0]);
	cout<<" "<<l<<endl;

	cin>>x;
	int b[x];
	int p[l];
	for (int i;i<l;i++){
		if (i<x){
			b[i]=ar[i];
		}
		else{
			p[i]=ar[i];
		}
	}
	cout <<endl;
	for (int i=0;i<x;i++){
		cout<<"bi"<<b[i]<<" ";
	}



}