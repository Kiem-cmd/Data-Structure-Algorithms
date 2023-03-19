/*
Cho mot mang vong tron -- tuc là coi so 0 và so n lien nhau 
tinh tong mang con lon nhat mà ko có 2 so nào lien nhau
*/

class Solution {
public:
    int maxx(vector<int>& nums,int index){
        int temp2 = nums[0];
        int temp1 = max(nums[0],nums[1]);
        int v;
        for(int i =2;i<nums.size();i++){
            v = temp2;
            temp2 = temp1;
            temp1 = max(temp1,v+nums[i]);
        }
        return temp1;
    }
    int rob(vector<int>& nums) {
        int n = nums.size();
        if (n==1) return nums[0];
        if (n==2) return max(nums[0],nums[1]); 
        vector<int> v1;
        vector<int> v2;
        for(int i =0 ;i<n;i++){
            if(i!=0) v1.push_back(nums[i]);
            if(i!= n-1) v2.push_back(nums[i]);
        }
        return max(maxx(v2,v2.size()-1),maxx(v1,v1.size()-1));
    }
};
