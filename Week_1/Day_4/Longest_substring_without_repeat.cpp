class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        vector<int>mp(256,-1);
        int l=0,r=0,len=0;
        int n=s.size();
        while(r<n)
        {
            if(mp[s[r]]!=-1)
                l=max(mp[s[r]]+1, l);
            mp[s[r]]=r;
            len=max(len, r-l+1);
            r++;
        }
        return len;
        
        
        
        // set<char> st;
        // int r,l,len,ans=0;
        // r=0;
        // l=0;
        // len = s.size();
        // while(r<len)
        // {
        //     if(st.count(s[r]))
        //     {
        //         while(s[l]!=s[r])
        //         {
        //             st.erase(s[l]);
        //             l++;
        //         }
        //         l++;
        //     }
        //     else
        //     {
        //         st.insert(s[r]);
        //        // ans = max(ans,st.size());
        //         if(ans < st.size())
        //         {
        //             ans = st.size();
        //         }
        //     }
        //     r++;
        // }
        // return ans;
        
    }
};