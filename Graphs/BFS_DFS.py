
## Representaion by Adj matrix 


class Graph():
    def __init__(self,v):
        ''' 
            v: number of node 
        '''
        self.v = v 
        self.graph =  [[0 for i in range(v)] for j in range(v)]
    def print_(self):
        for i in range(self.v):
            print(self.graph[i])
    def addEdge(self,node1,node2): 
        self.graph[node1][node2] = 1
        self.graph[node2][node1] = 1

    def BFS(self):
        node_start = int(input('Input node start: ')) 
        queue = []
        visited = [] 
        queue.append(node_start)
        while(len(visited) != self.v):
            visited.append(queue[0])
            for i in range(self.v):
                if (self.graph[queue[0]][i] !=0) and (i not in visited) and (i not in queue): 
                    queue.append(i)
            queue.pop(0)
        print(visited)
    def DFS(self):
        node_start = int(input("Input node start: "))
        stack = [] 
        visited = []
        stack.append(node_start)
        while(len(visited) != self.v):
            temp = stack[0]
            visited.append(stack[0]) 
            stack.pop(0)
            for i in range(self.v):
                if(self.graph[temp][i] != 0) and (i not in visited) and (i not in stack): 
                    stack.insert(0,i) 
        print(visited)         
def main():
    n = int(input("Number of Nodes: "))
    graph = Graph(n)
    e = int(input("Number of Edges: "))
    while(e):
        e-=1; 
        node1, node2 = input("Input Node1 & Node2: ").split()
        node1, node2 = int(node1), int(node2) 
        graph.addEdge(node1,node2)
    graph.print_()
    while(True):
        choice = int(input("O: DFS and 1:BFS -> Your choice: "))   
        if choice == 0:
            graph.DFS()
            break
        elif choice == 1: 
            graph.BFS()
            break
        else:
            print(" M nhap sai roi !!!!!!!!!") 
if __name__ == '__main__':
    main()