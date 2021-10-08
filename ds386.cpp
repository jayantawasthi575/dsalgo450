class Solution{
	public:
	int dp[1001][1001];
	int func(int a[],int n,int w)
	{
	    if(n==-1 && w==0)
	    {
	        return 0;
	    }
	    if(n==-1)
	    {
	        return 1e9;
	    }
	    if(w==0)
	    return 0;
	    if(dp[n][w]!=-1)
	    {
	        return dp[n][w];
	    }
	    if((n+1)>w || a[n]==-1)
	    return dp[n][w]=func(a,n-1,w);
	    int y=func(a,n-1,w);
	    int x=a[n]+func(a,n,w-(n+1));
	    return dp[n][w]=min(x,y);
	}
	int minimumCost(int cost[], int N, int W) 
	{ 
        // Your code goes here
        memset(dp,-1,sizeof dp);
        int x=func(cost,N-1,W);
        if(x>=1e9)
        return -1;
        return x;
	} 
};