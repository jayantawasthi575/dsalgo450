class Solution {
  public:
    long long int count(int S[], int m, int n) {
        long long int dp[n+1]={0};
        dp[0]=1;
        for(long long int i=0;i<m;i++)
        {
            for(long long int j=S[i];j<n+1;j++)
            {
                dp[j]=dp[j]+dp[j-S[i]];
            }
        }
        // for(int k=0;k<n+1;k++)
        // cout<<dp[k]<<" ";
        // cout<<endl;
        return dp[n];
    }
};