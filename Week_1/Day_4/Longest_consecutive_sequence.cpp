class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        set<int>st;
        for(int i=0;i<nums.size();i++)
        {
            st.insert(nums[i]);
        }
        int ans=0;
        for(int i=0;i<nums.size();i++)
        {
            if(st.find(nums[i]-1)==st.end())
            {
                int currN=nums[i];
                int currS=1;
                while(st.find(currN+1)!=st.end())
                {
                    currN+=1;
                    currS+=1;
                }
                ans=max(ans, currS);
            }
        }
        return ans;
    }
};