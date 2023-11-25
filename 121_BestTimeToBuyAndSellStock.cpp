class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int minV = 10000;
        int maxP = 0;
        int n = prices.size();
        for (int i = 0; i < n; i++){
            minV = min(minV,prices[i]);
            maxP = max(maxP,prices[i] - minV);
        }
        return maxP;
    }
};
