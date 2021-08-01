class Solution {
public:
	int isNegativeWeightCycle(int n, vector<vector<int>>edges){
	   int inf=100000;
	   vector<int> dist(n,inf);
	   dist[0]=0;
	   for(int i=1;i<=n-1;i++)
	   {
	       for(auto it:edges)
	       {
	          // cout<<it[2];
	           if(dist[it[0]]+it[2]<dist[it[1]])
	           {
	            dist[it[1]]=dist[it[0]]+it[2];    
	           }
	       }
	   }
	   for(auto it:edges)
	   {
	      if(dist[it[0]]+it[2]<dist[it[1]])
	       {
	           return 1; 
	       } 
	   }
	   return 0;
	}
};