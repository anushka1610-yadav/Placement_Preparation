class Solution {
public:
    double myPow(double x, int n) {
        double ans = 1;
        long long int i;
        i = abs(n);
        while(i!=0){                    
           if(i%2==1)                       
           {                                    
               ans = ans*x;
               i = i-1;
           }
            else               
            {
                x = x*x;                                    
                i = i/2;                  
            }                               
        }
        if(n<0)
            ans = 1/ans;                  
        else
            ans = 1*ans;
        return ans;
        
        
    }
};