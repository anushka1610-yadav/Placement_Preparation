class Solution {
public:
    int trap(vector<int>& height) {
       int ans=0,n=height.size();
        int lmax[n],rmax[n];
            lmax[0]=height[0];
            for(int j=1;j<n;j++){
                lmax[j]=max(lmax[j-1],height[j]);
            }
            rmax[n-1]=height[n-1];
            for(int j=n-2;j>=0;j--){
                rmax[j]=max(rmax[j+1],height[j]);
            }
        for(int i=1;i<n-1;i++)
            ans+=min(lmax[i],rmax[i])-height[i];
        
        return ans;
        
    }
};