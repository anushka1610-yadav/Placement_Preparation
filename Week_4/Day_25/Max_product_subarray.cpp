class Solution {
    public int maxProduct(int[] arr) {
        int n=arr.length;
        int ans=Integer.MIN_VALUE;
	    int curr =1;
	    for(int i=0;i<n;i++)
	    {
	        curr=curr*arr[i];
	        ans = Math.max(ans, curr);
	        if(curr==0)
	        {
	            curr=1;
	        }
	    }
        curr=1;
	    for(int i=n-1;i>=0;i--)
	    {
	        curr=curr*arr[i];
	        ans = Math.max(ans, curr);
	        if(curr==0)
	        {
	            curr=1;
	        }
	    }
	    return ans;
        
    }
}