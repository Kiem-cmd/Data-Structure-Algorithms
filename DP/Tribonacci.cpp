#include<iostream>
#include<vector>
using namespace std;
class Solution {
public:
    vector<int> a;
public:
    Solution(){
        a = vector<int>(38, 0);
    }
    int tribonacci(int n) {
        
        if(n < 2) return n;
        if(n==2) return 1;
        if(a[n] != 0){
            return a[n];
        }
        else {
            a[n] = tribonacci(n-1) + tribonacci(n-2) +tribonacci(n-3);
            return a[n];
        }
    }
};
int main(){
	Solution s;
	int n = 25;
	int result = s.tribonacci(n);
	cout<<result;
	return 0;
}
