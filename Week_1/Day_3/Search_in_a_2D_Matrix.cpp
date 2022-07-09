class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int n=matrix.size();
        int m=matrix[0].size();
        int l=0, h=(n*m)-1;
        while(l<=h)
        {
            int mid= (l+h)/2;
            if(matrix[mid/m][mid%m]==target)
                return true;
            if(matrix[mid/m][mid%m]>target)
                h=mid-1;
            else
                l=mid+1;
        }
        return 0;
        
        
        // int m=matrix.size();
        // int n=matrix[0].size();
        // int i=0,j=m-1;
        // while(i<n && j>=0)
        // {
        //     if(matrix[i][j]==target)
        //         return true;
        //     if(matrix[i][j]<target)
        //         i++;
        //     else
        //         j--;
        // }
        // return 0;
    }
};