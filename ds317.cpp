class Solution
{
    public:
    //Function to return Breadth First Traversal of given graph.
	vector<int>bfsOfGraph(int V, vector<int> adj[])
	{
	   vector<bool> visited(V,false);
	   queue<int> q;
	   vector<int> send; 
	   q.push(0);
	   visited[0]=true;
	   while(!q.empty())
	   {
	       int v=q.front();
	       send.push_back(v);
	       q.pop();
	       for (auto i = adj[v].begin(); i != adj[v].end(); i++) {
            if (!visited[*i]) {
                q.push(*i);
                visited[*i] = true;
            }
        }
	   }
	   return send;
	}
};