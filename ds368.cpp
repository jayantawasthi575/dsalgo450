class Solution
{
    public:
    //Function to find the nth catalan number.
    cpp_int findCatalan(int n) 
    {
        cpp_int dp[n+1];
        dp[0]=1;
        dp[1]=1;
        for(int i=2;i<n+1;i++)
        for(int j=0;j<i;j++)
        {
            dp[i]=dp[i]+dp[j]*dp[i-j-1];
        }
        return dp[n];
    }
};