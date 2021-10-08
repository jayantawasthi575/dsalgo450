class Solution{
public:
    int maximumPath(int N, vector<vector<int>> Matrix)
    {   
        if(N==1)
        {
            int sum=0;
            for(int i=0;i<N;i++)
            sum=sum+Matrix[0][i];
            return sum;
        }
        int dp[N][N];
        for(int i=N-1;i>=0;i--)
        for(int j=N-1;j>=0;j--)
        {
            if(i==N-1)
            {
                dp[i][j]=Matrix[i][j];
            }
            else if(j==0)
            {
                dp[i][j]=Matrix[i][j]+max(dp[i+1][j],dp[i+1][j+1]);
            }
            else if(j==N-1)
            {
                dp[i][j]=Matrix[i][j]+max(dp[i+1][j],dp[i+1][j-1]);
            }
            else
            {
                dp[i][j]=Matrix[i][j]+max(max(dp[i+1][j],dp[i+1][j+1]),dp[i+1][j-1]);
            }
        }
        int max=dp[0][0];
        // for(int i=0;i<n;i++)
        // for(int j=0;j<m;j++)
        // cout<<dp[i][j]<<" ";
        for(int j=1;j<N;j++)
        {
            if(dp[0][j]>max)
            max=dp[0][j];
        }
        return max;
    }
};