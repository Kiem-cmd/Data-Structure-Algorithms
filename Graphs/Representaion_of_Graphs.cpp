#include<iostream>
using namespace std;
int main(){
	// n : so nut
	//  m : so canh 
	int n,m ;  
	cin >>n >> m;
	// su dung ma tran ke: do phuc tap O(n)
	int adj[n+1][n+1];
	for(int i =0;i<n;i++){
		int u,v;
		cin>> u >>v ;
		adj[u][v] = 1;
		adj[v][u] = 1;
	}
	
	// su dung danh sach ke : do phuc tap O(2xEdge)
	vector<int> adj[n+1];
	for (int i =0; i<m;i++){
		int u,v;
		cin >>u>>v;
		adj[u].push_back(v);
		adj[v].push_back(u);
	}
	/// voi do thi co huong chi luu 1 chieu voi ca hai cach 
	
	/// voi do thi co trong so 
	/// - voi ma tran ke thi thay 1 bang trong so 
	/// - voi danh sach ke th� tao vector<pair<int,int>> adj[n+1]
	return 0;
}
