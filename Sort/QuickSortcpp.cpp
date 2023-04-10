#include<iostream>
using namespace std;
int partition(int a[],int low,int high){
	int pivot = a[high];
	int i = low-1;
	for (int j = low;j<high;j++){
		if(a[j] <pivot ){
			i++;
			int temp = a[j];
			a[j] = a[i];
			a[i] = temp;
		}
	}
	int tem = a[i+1];
	a[i+1] = pivot;
	a[high] = tem;
	return i+1;
}
void sort(int a[],int low,int high){
	if(low<high){
		int mid = partition(a,low,high);
		sort(a,low,mid-1);
		sort(a,mid+1,high);
	}

}
int main(){
	int a[] = {4,6,2,7,1,3};
	sort(a,0,5);
	for(int i =0;i<6;i++){
		cout<<a[i]<<" ";
	}
	return 0;
}

