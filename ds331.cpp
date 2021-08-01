class Solution
{
    public:
    //Function to find the number of islands.
    void dfs(int i,int j,vector<vector<char>>& A,int N,int M)
    {
        if(i>=0 && i<N && j>=0 && j<M && A[i][j]=='1')
        {
            A[i][j]='2';
            dfs(i+1,j,A,N,M);
            dfs(i-1,j,A,N,M);
            dfs(i,j+1,A,N,M);
            dfs(i,j-1,A,N,M);
            dfs(i+1,j+1,A,N,M);
            dfs(i-1,j-1,A,N,M);
            dfs(i+1,j-1,A,N,M);
            dfs(i-1,j+1,A,N,M);
        }
    }
    int numIslands(vector<vector<char>>& grid) 
    {    
        int N=grid.size();
        int M=grid[0].size();
        int c=0;
        for(int i=0;i<N;i++)
        for(int j=0;j<M;j++)
        {
            if(grid[i][j]=='1')
            {
                dfs(i,j,grid,N,M);
                c++;
            }
        }
        return c;
    }
};