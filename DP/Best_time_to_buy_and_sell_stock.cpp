class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int min = prices[0];
        int max = -99;
        for(int i =1;i<prices.size();i++){
            max = max<(prices[i] - min)?(prices[i] - min):max;
            min = min<prices[i]?min:prices[i]; 
        }
        if (max > 0) return max;
        else return 0;
    }
};