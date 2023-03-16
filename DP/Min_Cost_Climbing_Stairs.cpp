/*
 give array cost wher cost[i] = cost of i step in floor.
 after you pay you can climb one or two step
 you can start 0 or 1
 return min cost 
 
 L = min(L-1) + L-1 or min(L-2) + L-2
*/


#include<iostream>
#include<vector>
using namespace std;
class Solution {
    int temp[1000] = {0};
public:
    int minn(vector<int>& cost,int index){
        int aa,bb;
        if (index == 0) return cost[0];
        if (index == 1) return cost[1];
        if (temp[index] != 0) return temp[index];
        
        aa = minn(cost,index - 1)+ cost[index];
        bb = minn(cost,index - 2)+ cost[index];
        if (aa>bb) {
            temp[index] = bb;
            return bb;
        }
        else{
            temp[index] = aa;
            return aa;
	    }
    }
    int minCostClimbingStairs(vector<int>& cost) {
        int n = cost.size();
        if (n>=3){
            int end_n = minn(cost,n-3)+ cost[n-1];
            int end_n_1 = minn(cost,n-2);
            return min(end_n,end_n_1);
        }
        else if (n==2){
            return min(cost[0],cost[1]);
        }
        else{
            return cost[0];
        }
        
       
    }
};
int main(){
	Solution s;
	vector<int> a;
	a.push_back(10);
	a.push_back(15);
	a.push_back(20);
	int result = s.minCostClimbingStairs(a);
	cout<<result;
	return 0;
}
