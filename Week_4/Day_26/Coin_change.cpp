class Solution {
public:
    int coinChange(vector<int>& coins, int amount) {
        int n = coins.size();
     //   vector<vector<int>> dp(n,vector<int>(amount + 1, -1));
     //   int ans = helper(n-1, amount, coins,dp);
        // if(ans >= 1e9){
        //     return -1;
        // }
        // return ans;
        
        //base case tabulation
        vector<int> prev(amount + 1, 0), curr(amount + 1, 0);
        
        for(int t = 0; t <= amount; t++){
            if(t % coins[0] == 0) prev[t] = t / coins[0];
            else prev[t] = 1e9;
        }
        //fill indexes
        for(int ind = 1; ind < n; ind++){
            for(int tar = 0; tar <= amount; tar++){
            int notPick = prev[tar];
            int pick = 1e9;
            if(coins[ind] <= tar) pick = 1 + curr[tar - coins[ind]];
             curr[tar] = min(pick, notPick);
            }
            prev = curr;
        }
        int ans =  prev[amount];
        if(ans >= 1e9) return -1;
        return ans;
    }
};