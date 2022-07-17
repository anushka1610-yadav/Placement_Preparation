int Solution::solve(vector<int> &A, int b) {
    map<int, int>mp;
    int c=0,x=0;
    for(auto it:A)
    {
        x=x^it;
        if(x==b)
        {
            c++;
        }
        
        if(mp.find(x^b)!=mp.end())
        {
            c+=mp[x^b];
        }
        mp[x]+=1;
    }
    return c;
}
