#include <bits/stdc++.h>
using namespace std;
const int V = 5;
  
bool isBipartiteUtil(int G[][V], int src, int colorArr[])
{
    colorArr[src] = 1;
    queue <int> q;
    q.push(src);
    while (!q.empty())
    {

        int u = q.front();
        q.pop();
  
        for (int v = 0; v < V; ++v)
        {
            if (G[u][v] && colorArr[v] == -1)
            {
                colorArr[v] = 1 - colorArr[u];
                q.push(v);
            }

            else if (G[u][v] && colorArr[v] == colorArr[u])
                return false;
        }
    }
    return true;
}

bool isBipartite(int G[][V])
{
    int colorArr[V];
    for (int i = 0; i < V; ++i)
        colorArr[i] = -1;
    for (int i = 0; i < V; i++)
        if (colorArr[i] == -1)
            if (isBipartiteUtil(G, i, colorArr) == false)
                return false;
  
    return true;
}
bool canBeDividedinTwoCliques(int G[][V])
{
    int GC[V][V];
    for (int i=0; i<V; i++)
        for (int j=0; j<V; j++)
             GC[i][j] = (i != j)?  !G[i][j] : 0;
    return  isBipartite(GC);
}
int main()
{
    int G[][V] = {{0, 1, 1, 1, 0},
        {1, 0, 1, 0, 0},
        {1, 1, 0, 0, 0},
        {0, 1, 0, 0, 1},
        {0, 0, 0, 1, 0}
    };
    canBeDividedinTwoCliques(G) ? cout << "Yes" :cout << "No";
    return 0;
}