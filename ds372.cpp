class Solution{
public:
    int maxGold(int n, int m, vector<vector<int>> M)
    {
        // code here
        if(n==1)
        {
            int sum=0;
            for(int i=0;i<m;i++)
            sum=sum+M[0][i];
            return sum;
        }
        int dp[n][m];
        for(int j=m-1;j>=0;j--)
        for(int i=n-1;i>=0;i--)
        {
            if(j==m-1)
            {
                dp[i][j]=M[i][j];
            }
            else if(i==0)
            {
                dp[i][j]=M[i][j]+max(dp[i][j+1],dp[i+1][j+1]);
            }
            else if(i==n-1)
            {
                dp[i][j]=M[i][j]+max(dp[i][j+1],dp[i-1][j+1]);
            }
            else
            {
                dp[i][j]=M[i][j]+max(max(dp[i][j+1],dp[i+1][j+1]),dp[i-1][j+1]);
            }
        }
        int max=dp[0][0];
        // for(int i=0;i<n;i++)
        // for(int j=0;j<m;j++)
        // cout<<dp[i][j]<<" ";
        for(int i=1;i<n;i++)
        {
            if(dp[i][0]>max)
            max=dp[i][0];
        }
        return max;
    }
};