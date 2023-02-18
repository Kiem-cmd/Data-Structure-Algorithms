class Solution {
public:
    int findMiddleIndex(vector<int>& nums) {
        int n = nums.size();
        float sum = 0;
        float temp =0;
        for(int i = 0;i<n;i++){
            sum += nums[i];
        }
        for(int i = 0;i<n;i++){
            if (temp == (sum - nums[i])/2) return i;
            else{
                temp+=nums[i];
            }
        }
        return -1;
    }
};
