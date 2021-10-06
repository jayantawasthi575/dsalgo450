class Solution
{
public:
    int countFriendsPairings(int n) 
    {   
        long mod=1000000007;
        long dp[n+1];
        dp[1]=1;
        dp[2]=2;
        for(int i=3;i<=n;i++)
        {
            dp[i]=dp[i-1]+dp[i-2]*(i-1);
            dp[i]=dp[i]%mod;
        }
        return dp[n];
    }
};    
 