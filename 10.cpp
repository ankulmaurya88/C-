# include <bits/stdc++.h>
using namespace std;
int main(){
	int a[10]= {4,8,0,2,0,1,15,12,0,0};
	for (int i=0;i<=10;i++){
		int j=10;
		if (a[i]!=0){
			if(a[j]!=0){
				//swap(a[i],a[j])
				int temp;
				temp=a[i];
				a[i]=a[j];
				a[j]=temp;
				j--;
			}
		}
		
	}
	for (int i=0;i<=10;i++){
		cout<<a[i]<<" ";
	}

}