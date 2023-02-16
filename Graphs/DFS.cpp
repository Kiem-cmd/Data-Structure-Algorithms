#include<iostream>
#include<stack>
using namespace std;
const int MAX_NODE = 100;
class Graph {
public:
	int n;
	int m;
	int adj[MAX_NODE][MAX_NODE];
	stack<int> node;
	int visited[MAX_NODE] = {0};
	void addEdge(int v, int u){
	    adj[v][u] = 1;
	    adj[u][v] = 1;
	}
	void DFS(int start,int n){
	    visited[start] = 1;
	    cout<< start<<" ";
	    for(int i =1;i<n+1;i++ ){
	        if (adj[start][i] == 1 && visited[i] == 0){
	            DFS(i,n-node.size());
	        }
	    }
	    
	}
};
int main(){
    Graph graph;
    graph.n=10;
    graph.m=9;
	graph.addEdge(1,2);
	graph.addEdge(1,3);
	graph.addEdge(2,4);
	graph.addEdge(2,5);
	graph.addEdge(3,6);
	graph.addEdge(3,7);
	graph.addEdge(4,8);
	graph.addEdge(4,9);
	graph.addEdge(7,10);
	/*
	            1
	         2      3
	      4   5   6   7
	    8  9          10
	
	*/
	for(int i = 1;i<graph.n+1;i++){
	    for (int j = 1;j<graph.n+1;j++){
	        cout<<graph.adj[i][j]<<" ";
	    }
	    cout<<endl;
	}
    graph.DFS(1,10);
	return 0;
}
