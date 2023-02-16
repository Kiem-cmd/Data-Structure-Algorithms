#include<iostream>
using namespace std;
int find_peak(int arr[], int low , int high, int n){
	if(n==1){
		return arr[0];
	}
	if (arr[0]>arr[1]) return arr[0];
	if (arr[n-1]> arr[n-2]) return arr[n-1];
	int mid = low + (high - low) / 2;
	if (mid > 0 && arr[mid - 1] > arr[mid]){
		return find_peak(arr,low,mid-1,n);
	}
	else if (mid >0 && arr[mid + 1] > arr[mid]){
		return find_peak(arr,mid+1,high,n);
	}
	else{
		return arr[mid];
	}
}
int main(){
	int arr[] = {1,3,12,16,19,0};
	int n = sizeof(arr)/sizeof(int);
	cout<<"Dap an: "<<find_peak(arr,0,n-1,n);
	return 0;
}
