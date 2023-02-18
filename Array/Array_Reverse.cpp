// dao nguoc mang voi do phuc tap O(n)
#include<iostream>
using namespace std;
void reverse_Array(int a[],int start, int end){
	while(start < end ){
		int temp = a[start];
		a[start] = a[end];
		a[end] = temp;
		start++;
		end--;
	}
}
int main(){
	int a[] = {1,2,3,4,5,6};
	reverse_Array(a,0,5);
	for(int i = 0;i<=5 ;i++){
		cout<<a[i]<<"-";
	}
	return 0;
}
