/* 
Given a N*N board with the Knight placed on the first block of an empty board. Moving according to the rules of chess knight must visit each square exactly once. 
Print the order of each cell in which they are visited.

EX: 
Input : 
N = 8
Output:


 
*/
#include<iostream> 
using namespace std;

int n;
int X[100],Y[100];
int mark[100][100]; 

const int hx[] = {1,1,-1,-1,2,2,-2,-2};
const int hy[] = {2,-2,2,-2,1,-1,1,-1};
void print_sol(){
	for(int i = 0; i<= n*n;i++){
		cout<<"("<<X[i]<<","<<Y[i]<<")";
		cout<<endl;
	}
	 
}
void Try(int k){
	for(int i = 0; i<8;i++){
		int xx = X[k-1] + hx[i];
		int yy = Y[k-1] + hy[i];
		if (xx >=1 & yy>=1 & xx<= n & yy <=n & mark[xx][yy] == 0){
			X[k] = xx;
			Y[k] = yy;
			mark[xx][yy] = 1;
			if (k == n*n){
				print_sol();
			}
			else{
				Try(k+1);
			}
			mark[xx][yy] = 0;
		}
	}
}
int main(){
	cout<<"Nhap n: ";
	cin>>n;
	mark[1][1] = 1;
	X[1] = 1;
	Y[1] = 1;
	Try(2);
	return 0;
} 
