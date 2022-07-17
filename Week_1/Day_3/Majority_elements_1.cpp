class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int c=0;
        int ele=0;
        for(int n:nums)
        {
            if(c==0)
            {
                ele=n;
            }
            if(n==ele)
            {
                c++;
            }
            else
            {
                c--;
            }
        }
        return ele;
        
        // unordered_map<int,int>mp;
        // for(int i=0;i<nums.size();i++)
        // {
        //     if(mp.find(nums[i])!=mp.end())
        //     {
        //         mp[nums[i]]++;
        //     }
        //     else
        //     {
        //         mp[nums[i]]=1;
        //     }
        // }
        // int m=INT_MIN;
        // int ans;
        // for(auto i=mp.begin();i!=mp.end();i++)
        // {
        //     if(m<i->second)
        //     {
        //         m=i->second;
        //         ans=i->first;
        //     }
        // }
        // return ans;
    }
};