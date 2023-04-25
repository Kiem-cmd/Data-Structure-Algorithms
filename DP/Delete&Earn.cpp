#define MAX 10001
class Solution {
public:
    
    int deleteAndEarn(vector<int>& nums) {
        vector<int> sum(MAX,0);
        vector<int> result(MAX,0);

        for(auto i:nums){
            sum[i] +=i;
        }
        result[0] = 0;
        result[1] = sum[1];
        for (int i =2;i<MAX;i++){
            result[i] = max(result[i-2] + sum[i],result[i-1]);
        }
        return result[MAX-1];
    }
};