// Cho 1 mang ... tìm 1 phan tu trong mang ma lon' hon hai so 
// lien ke no ...gia su chi ton tai 1 so

#include<iostream>
using namespace std;
int find_peak(int arr[],int n){
	if(n == 1){
		return arr[0];
	}
	if (arr[0] >= arr[1]){
		return arr[0];
	}
	if (arr[n-1] >= arr[n-2]){
		return arr[n-1];
	}
	for(int i = 0; i<n;i++){
		if(arr[i]>arr[i-1] && arr[i]> arr[i+1]){
			return arr[i];
		}
	}
} 
int main(){
	int arr[] = {1,3,12,16,1,0};
	int n = sizeof(arr)/sizeof(int);
	cout<<"Dap an: "<<find_peak(arr,n);
	return 0; 
} 
