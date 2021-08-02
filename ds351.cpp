#include<bits/stdc++.h>
using namespace std;
# define INF 0x3f3f3f3f

class Graph
{
    int V;    
    list< pair > *adj;
 
public:
    Graph(int V);  
    void addEdge(int u, int v, int w);
    vector shortestPath(int s);
};
 

Graph::Graph(int V)
{
    this->V = V;
    adj = new list< pair >[V];
}

void Graph::addEdge(int u, int v, int w)
{
    adj[u].push_back(make_pair(v, w));
}
 
vector Graph::shortestPath(int src)
{
    set< pair > setds;
    vector dist(V, INF);
    setds.insert(make_pair(0, src));
    dist[src] = 0;
    while (!setds.empty())
    {
        pair tmp = *(setds.begin());
        setds.erase(setds.begin());
        int u = tmp.second;
        list< pair >::iterator i;
        for (i = adj[u].begin(); i != adj[u].end(); ++i)
        {
            int v = (*i).first;
            int weight = (*i).second;
            if (dist[v] > dist[u] + weight)
            {
                if (dist[v] != INF)
                    setds.erase(setds.find(make_pair(dist[v], v)));
                dist[v] = dist[u] + weight;
                setds.insert(make_pair(dist[v], v));
            }
        }
    }
    return dist;
}
Graph modelGraphWithEdgeWeight(int edge[][2], int E, int V)
{
    Graph g(V);
    for (int i = 0; i < E; i++)
    {
        g.addEdge(edge[i][0], edge[i][1], 0);
        g.addEdge(edge[i][1], edge[i][0], 1);
    }
    return g;
}
int getMinEdgeReversal(int edge[][2], int E, int V,
                       int src, int dest)
{
    Graph g = modelGraphWithEdgeWeight(edge, E, V);
    vector dist = g.shortestPath(src);
    if (dist[dest] == INF)
        return -1;
    else
        return dist[dest];
}
int main()
{
    int V = 7;
    int edge[][2] = {{0, 1}, {2, 1}, {2, 3}, {5, 1},
                     {4, 5}, {6, 4}, {6, 3}};
    int E = sizeof(edge) / sizeof(edge[0]);
    int minEdgeToReverse =getMinEdgeReversal(edge, E, V, 0, 6);
    if (minEdgeToReverse != -1)
        cout << minEdgeToReverse << endl;
    else
        cout << "Not possible" << endl;
    return 0;
}