#include<iostream>

using namespace std;
void bb_sort(int arr[],int n){
	int size = n;
	bool swap = false;
	while(n>0){
		for(int i = 0;i<n-1;i++){
			if(arr[i] > arr[i+1]){
				int temp = arr[i];
				arr[i] = arr[i+1];
				arr[i+1] = temp;
				swap = true;
			}
		}
		if(swap == false){
			break;
		}
		n--;
	}
	for(int i =0;i<size;i++){
		cout<<arr[i]<<"-";
	}
}
int main(){
	int a[] = {1,3,2,6,4,8,5,14,9};
	bb_sort(a,9);
	return 0;
}
