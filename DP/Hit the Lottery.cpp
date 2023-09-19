#include<iostream>
using namespace std;


int k = 0;
int bill[] = {100,20,10,5,1};
int hit(int n){
	if (k <=5){
		int temp = n / bill[k];
		k+=1;
		return temp + hit(n%bill[k]);
	}
	return 0;
}

int main(){
	
	cout <<hit(125);
}
