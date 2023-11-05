class Solution {
public:
    int minCostClimbingStairs(vector<int>& cost) {
        //Dynamic programming storage
        vector<int> dp;
        for (int i = 0; i < cost.size(); i++){
            dp.push_back(-1);
        }
        
        return min(split(cost,dp,0),split(cost,dp,1)); 
    }
    int split(vector<int> & cost, vector<int>&dp, int index){
        
        if (dp[index] != -1){
            pdp(dp);
            return dp[index];
        }

        else if (index >= cost.size() -2){
            pdp(dp);
            return cost[index];
        }

        else{
            if (dp[index + 1] == -1){
                dp[index + 1] = split(cost,dp,index + 1);
            }
            if (dp[index + 2] == -1){
                dp[index + 2] = split(cost,dp,index + 2);
            }
            dp[index] =  min(dp[index + 1], dp[index + 2]) + cost[index];
            pdp(dp);
            return dp[index];
        }
    }
    void pdp(vector<int>dp){
        for(auto i:dp){
            cout << i << " ";
        }
        cout << endl;
    }

