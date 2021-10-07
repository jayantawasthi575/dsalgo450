class Solution {
	public:
		int LongestRepeatingSubsequence(string str){
		int x=str.size(),y=str.size(); 
		int dp[x+1][y+1];
        for(int i=0;i<=x;i++)
        {
            for(int j=0;j<=y;j++)
            {   
                if(i==0 || j==0)
                dp[i][j]=0;
                else if((str[i-1]==str[j-1])&& i!=j)
                {
                    dp[i][j]=1+dp[i-1][j-1];
                }
                else
                {   
                    dp[i][j]=max(dp[i-1][j],dp[i][j-1]);
                }
            }
        }
        return dp[x][y];
		}
};