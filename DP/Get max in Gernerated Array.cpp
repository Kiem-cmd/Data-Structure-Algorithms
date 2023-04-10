/*
nums[0] = 0
nums[1] = 1
nums[i] = nums[i/2] if i%2 = 0 
nums[i] = nums[i/2] + nums[i/2 + 1] if i%2 =1

given n ...return max nums[0] -> nums[n]
*/
class Solution {
    int a[101];
public:
    Solution(){
        memset(a,-1,sizeof(a));
    }
    int temp(int n){
        if (a[n] != -1 ) return a[n];
        if (n==0) return 0;
        if( n==1) return 1;
        if( n%2 ==0) {
            a[n] = temp(n/2);
            return a[n];
        }
        else {
            a[n] = (temp(n/2) + temp(n/2+1));
        }
        return a[n];
    } 
    int getMaximumGenerated(int n) {
        if(n==0) return 0;
        else if (n==1) return 1;
        int a = getMaximumGenerated(n-1);
        int b = temp(n);
        if (a>b){
            return a;
        }
        else{
            return b;
        }
        }
};
