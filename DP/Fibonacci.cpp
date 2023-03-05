#include<iostream>
using namespace std;
int fib(int n) {
        if(n ==0 ) return 0;
        if ( n==1) return 1;
        int a[31] = {0};
        if(a[n] != 0){
            return a[n];
        }
        else if(a[n-1] != 0){
            a[n] = a[n-1] + a[n-2];
            return a[n];
        }
        else{
            a[n] = fib(n-1) + fib(n-2);
            return a[n];
        }
    }
}
int main(){
	return 0;
}
