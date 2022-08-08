class Solution {
public:
    bool tabulation(vector<int>& nums,int target)
    {
        vector<vector<bool>> 
            dp(nums.size(),vector<bool>(target+1,false));
        int n=nums.size();
        for(int i=0;i<n;i++)
            dp[i][0]=true;
        if(target>=nums[0])
        dp[0][nums[0]]=true;
        
        for(int i=1;i<n;i++)
            for(int j=1;j<=target;j++)
            {
            bool notTake=dp[i-1][j];
            bool take=false;
            if(j-nums[i]>=0)
                take=dp[i-1][j-nums[i]];
            dp[i][j]=take|notTake; 
            }
            return dp[n-1][target];
    }
    bool canPartition(vector<int>& nums) {
        int sum=0;
        for(auto& i:nums)
            sum+=i;
        if(sum%2)
            return false;
        //return recursion(nums,nums.size()-1,sum/2);
        //vector<vector<int>> 
          //  memory(nums.size(),vector<int>(sum/2+1,-1));
       // return memoization(nums,nums.size()-1,sum/2,memory);
        
        return tabulation(nums,sum/2);
    }
};