#include<bits/stdc++.h>
using namespace std;
void selection_sort(int n, int arr[]){
	for (int i=0;i<n;i++){
		int min=i ;
		for (int j=i+1;j<n;j++){
			if (arr[i]<arr[j]){
				min=j; 
			}
			int temp=arr[min];
			arr[min]=arr[j];
		 	arr[min]=temp;
			
		}

		// int temp=arr[min];
		// 	arr[min]=arr[j];
		// 	arr[min]=temp;
	}
	for (int i=0;i<n;i++) {
		cout<<arr[i]<<" " ;
	}
}
int main(){ 
	int n=5;
	int arr [] = {3,-2,6,0,5};
selection_sort(n,arr) ;

}