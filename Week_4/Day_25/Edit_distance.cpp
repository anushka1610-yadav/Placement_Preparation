class Solution {
public:
    
    //edit distance famous question done 
    
    int f(int i , string s, int j , string t ,vector<vector<int>>&dp){
        if(i==-1){
            return j+1;
        }
        if(j==-1){
            return i+1;
        }
        
        if(dp[i][j]!=-1){return dp[i][j];}
        
        if(s[i]==t[j]){
            return dp[i][j] =f(i-1,s,j-1,t,dp);
        }
        
        else{
            return dp[i][j] = min(1+f(i,s,j-1,t,dp),
                   min(1+f(i-1,s,j,t,dp),
                       1+f(i-1,s,j-1,t,dp)));
        }
        
        
    }
    
    int minDistance(string word1, string word2) {
        
        int n = word1.length();
        int m = word2.length();
        
        vector<vector<int>>dp(n,vector<int>(m,-1));
        return f(n-1,word1,m-1,word2,dp);
    }
};