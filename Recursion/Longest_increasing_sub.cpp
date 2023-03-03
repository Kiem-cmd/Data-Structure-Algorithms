#include<iostream>
using namespace std;
int find_max(int arr[],int n,int *max){
	/// max la gia tri lon nhat trong tat ca find_max va la gia tri can tim
	/// return: tra ve so luong phan tu trong day con dai nhat ket thuc tai n
	///
	if(n==1) return 1;
	int res = 1;
	int max_here = 1;
	for(int i =0;i<n;i++){
		res = find_max(arr,i,max);
		if((arr[i-1] < arr[n-1]) && (res+1 > max_here )){
			max_here = res+1;
		}
	}
	if(*max < max_here){
		*max = max_here;
	}
	return max_here;
}
int main(){
	int arr[] = { 10, 22, 9, 33, 21, 50, 41, 60 };
    int n = sizeof(arr) / sizeof(arr[0]);
    int max =1;
    find_max(arr,n,&max);
    cout<<max;
	return 0;
}
