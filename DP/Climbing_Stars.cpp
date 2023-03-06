#include<iostream>
#include<vector> 
using namespace std;
class Solution {
public:
    vector<int> a;
public:
    Solution(){
        a = vector<int>(47,0);
    }
    int climbStairs(int n) {
        if(a[n] != 0 ) return a[n];
        if ( n<=2){
            return n;
        }
        else{
            a[n] = climbStairs(n-1) + climbStairs(n-2);
            return a[n];
        }
    }
};
int main(){
	Solution s;
	cout<<s.climbStairs(2); 
	return 0; 
} 
