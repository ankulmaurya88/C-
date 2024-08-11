# include <bits/stdc++.h>
using namespace std;
int main(){
	int n=5;
	int a[n]={12,4,0,8,-7};

	 int count(a[n],n, int x){
	 	int co=0;
	 	for (int i=0; i<n;++i){
	 		if (a[i]==x){
	 			co++;
	 		}
	 	}
	 	return co;
	 }
	 while(n--){
	 	int x=0;
	 	cout<< a[x]<< " "<<count(a[n],n,a[x])<<endl;
	 	x++;
	 }
	 

}