class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        vector<vector<int>> res;
        
        if(nums.empty())
            return res;
        
        int n = nums.size();
        sort(nums.begin(),nums.end());
        for(int i=0; i<n; i++)
        {
            long long int target3 = target - nums[i];
            
            for(int j=i+1; j<n; j++)
            {
                long long int target2 = target3 - nums[j];
                
                int front = j+1;
                int back = n-1;
                
                while(front<back)
                {
                    int two_sum = nums[front] + nums[back];
                    
                    if(two_sum < target2)
                        front++;
                    else if(two_sum > target2)
                        back--;
                    
                    else
                    {
                        // if two_sum == target2
                        vector<int> quad(4,0);
                        // quad.push_back(nums[i]);
                        // quad.push_back(nums[j]);
                        // quad.push_back(nums[front]);
                        // quad.push_back(nums[back]);
                        quad[0] = nums[i];
                        quad[1] = nums[j];
                        quad[2] = nums[front];
                        quad[3] = nums[back];
                        
                        
                        res.push_back(quad);
                        while(front < back && nums[front] == quad[2]) 
                            front++;
                        while(front < back && nums[back] == quad[3]) 
                            back--;
                    }
                    
                }
                while(j + 1 < n && nums[j + 1] == nums[j]) 
                    j++;
            }
            while(i + 1 < n && nums[i + 1] == nums[i]) 
                i++;
        }
        return res;
        
        
        
//         vector<vector<int>>ans;
//         if(nums.empty())
//             return ans;
//         int n=nums.size();
//         sort(nums.begin(), nums.end());
//         for(int i=0;i<n;i++)
//         {
//             for(int j=i+1;j<n;j++)
//             {
//                 int s=target-(nums[i]+nums[j]);
//                 int f=j+1;
//                 int b=n-1;
//                 while(f<b)
//                 {
//                     int ts=nums[f]+nums[b];
//                     if(ts>s)
//                     {
//                         b--;
//                     }
//                     else if(ts<s)
//                     {
//                         f++;
//                     }
//                     else
//                     {
//                         vector<int>res(4,0);
//                         res[0]=nums[i];
//                         res[1]=nums[j];
//                         res[2]=nums[f];
//                         res[3]=nums[b];
//                         ans.push_back(res);
                        
//                         while(f<b && nums[f]==res[2])
//                             ++f;
//                         while(f<b && nums[b]==res[3])
//                             --b;
//                     }
//                 }
//                 while(j+1<n && nums[j+1]==nums[j])
//                     ++j;
//             }
//             while(i+1<n && nums[i+1]==nums[i])
//                 ++i;
//         }
//         return ans;
    }
};