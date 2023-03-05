#include<iostream>
using namespace std;
int find_max(int arr[],int n){
	int les[n];
	les[0] = 1;
	for(int i = 1;i <n;i++){
		les[i] = 1;
		for(int j =0;j<i;j++){
			if(arr[j] < arr[i] && les[j] + 1 > les[i]){
				les[i] = les[j] + 1;
			}
		}
	}
	int result = 1;
	for (int i =1;i<n;i++){
		if(result<les[i]){
			result = les[i];
		}
	}
	return result;
}
int main(){
	int arr[] = { 10, 22, 9, 33,1,2,3 ,21, 50, 41, 60 };
    int n = sizeof(arr) / sizeof(arr[0]);
    printf("Length of lis is %d\n", find_max(arr, n));
	return 0;
}
