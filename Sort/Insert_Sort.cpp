#include<iostream>
using namespace std;
void insertion_sort(int a[],int n){
	for(int i = 0;i<n;i++){
		int j = i;
		while(j>0 && a[j-1] > a[j] ){
			int temp = a[j];
			a[j] = a[j-1];
			a[j-1] = temp;
			j--;
		}
	}
	for(int i = 0;i<n;i++){
		cout<<a[i]<<"-";
	}
}
int main(){
	int a[] = {1,3,2,6,4,8,5,14,9};
	insertion_sort(a,9);
	return 0;
}
