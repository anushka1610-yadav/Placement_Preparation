class Solution {
public:
    void transpose(vector<vector<int>>& a){
        
        int n = a.size();
        
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                if (i<j)
                {
                    swap(a[i][j], a[j][i]);
                }

            }

        }
        
    }
    void rotate(vector<vector<int>>& matrix) {
        for(int i = 0;i<matrix.size();i++){
            int startrow = 0;
            int endrow = matrix.size()-1;
            while(startrow<endrow){
                swap(matrix[startrow][i],matrix[endrow][i]);
                startrow++;
                endrow--;
            }
        }
        
        transpose(matrix);
        
    }
};