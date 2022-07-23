class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int c=0;
        int ans=0;
        if(nums.size()==0)
            return 0;
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]!=1)
                continue;
            int j=i+1;
            c=1;
            while(j<nums.size() && nums[j]==1)
            {
                c++;
                j++;
            }
            ans=max(ans,c);
            i=j;
        }
        return ans;
        
    }
};