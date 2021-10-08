class Solution{
public:
    int maxSquare(int n, int m, vector<vector<int>> mat){
        if(n==0)
            return 0;
        int dp[n+1][m+1];
        int largest=0;
        for(int i=0;i<=n;i++)
        for(int j=0;j<=m;j++)
        {   
            if(i==0||j==0)
            dp[i][j]=0;
            else if(mat[i-1][j-1]==1)
            {
                dp[i][j]=1+min(dp[i-1][j],min(dp[i][j-1],dp[i-1][j-1]));
                if(largest<dp[i][j])
                    largest=dp[i][j];
            }
            else 
            {
                dp[i][j]=0;
            }
        }
        return largest;
    }
};