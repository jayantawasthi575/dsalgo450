class Solution
{
    public:
    //Function to find the length of longest common subsequence in two strings.
    int lcs(int x, int y, string s1, string s2)
    {
        int dp[x+1][y+1];
        memset(dp,0,sizeof(dp));
        int i,j;
        for(i=1;i<x+1;i++)
        {
            for(j=1;j<y+1;j++)
            {
                if(s1[i-1]==s2[j-1])
                {
                    dp[i][j]=1+dp[i-1][j-1];
                }
                else{
                    dp[i][j]=max(dp[i-1][j],dp[i][j-1]);
                }
            }
        }
        // for(i=0;i<x+1;i++)
        // {
        // for(j=0;j<y+1;j++)
        //   cout<<dp[i][j]<<" ";
        // cout<<endl;
        // }
        return dp[x][y];
    }
};