#include<iostream>
#include<stack>
using namespace std;
const int MAX = 100;
class Graph{
public:
	int n;
	int m;
	int adj[MAX][MAX];
	int visited[MAX] = {0};
	void addEdge(int u, int v){
		adj[u][v] = 1;
		adj[v][u] = 1;
	}
	void BFS(int start){
		stack<int> node;
		visited[start] = 1;
		node.push(start);
		while(!node.empty()){
			start  = node.top();
			cout<< start  <<" ";
			node.pop();			
			for(auto i : adj[start]){
				if(visited[i] == 0){
					visited[i] = 1;
					node.push(i);
				}
			}
		}
		
	}
};
int main(){
	Graph g;
	g.n = 4;
	g.m = 6;
    g.addEdge(0, 1);
    g.addEdge(0, 2);
    g.addEdge(1, 2);
    g.addEdge(2, 0);
    g.addEdge(2, 3);
    g.addEdge(3, 3);
 
    cout << "Following is Breadth First Traversal "
         << "(starting from vertex 2) \n";
    g.BFS(2);
	return 0;
}
