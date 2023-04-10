#include<iostream>
using namespace std;
void sort(int a[],int n){
	int size = n;
	for(int i=0;i<size;i++){
		int index = i;
		for(int j=i+1;j<size;j++){
			if(a[j]<a[index]) index = j;
			
		}
		int temp = a[i];
		a[i] = a[index];
		a[index] = temp;
		
	}
	for(int i=0;i<n;i++){
		cout<<a[i]<<" ";
	}
	
}
int main(){
	int a[] = {4,6,2,7,1,3};
	sort(a,6);
	return 0;
}
