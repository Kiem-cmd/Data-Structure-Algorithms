/*
Find max sum element in array where "cac element nay ko có cap nao lien ke nhau"
*/
class Solution {
    int temp[100];
    
public:
    Solution(){
        memset(temp, -1, sizeof(temp));
    }
    int maxx(vector<int>& nums , int index){
        int aa,bb;
        if(temp[index] != -1) return temp[index];
        if(index == 0){
            temp[0] = nums[0];
            return temp[0];
        } 
        
        else if(index == 1) {
            temp[1] = max(nums[0],nums[1]);
            return temp[1];
        }       
        else{
            aa = maxx(nums,index - 2) + nums[index];
            bb = maxx(nums,index-1);
            temp[index] = max(aa,bb);
            return temp[index];
        }
        
    }
    int rob(vector<int>& nums) {
        int n = nums.size();
        if (n ==1) return nums[0];
        if(n ==2) return max(nums[0],nums[1]);
        return max(maxx(nums,n-2),maxx(nums,n-3) + nums[n-1]);
    }
};
