class Solution {
public:
    // int solve(int i, int j, int n, int m)
    // {        
//         if(i==(n-1)&&j==(m-1))
//             return 1;
//         if(i>=n || j>=m)
//             return 0;
//         else
//             return solve(i+1, j, n, m)+solve(i, j+1, n, m);
//     }
    int uniquePaths(int m, int n) {
        // solve(0, 0, m, n);
        int N=n+m-2;
        int r=m-1;
        double ans=1;
        for(int i=1;i<=r;i++)
        {
            ans=ans*(N-r+i)/i;
        }
        return (int)ans;
        
    }
};