#include<bits/stdc++.h>
using namespace std;
int minimumCostOfBreaking(int X[], int Y[], int m, int n)
{
    int res=0;
    sort(X,X+m,greater<int>());
    sort(Y,Y+n,greater<int>());
    int hzntl=1,vert=1;
    int i=0,j=0;
    while(i<m && j<n)
    {
        if(X[i]>Y[j])
        {
        res+=X[i]*vert;
        hzntl++;
        i++;
        }
        else{
        res+=Y[j]*hzntl;
        vert++;
        j++;
        } 
    }
    int total=0;
    while(i<m)
    total+=X[i++];
    res+=total*vert;
    total=0;
    while(j<n)
    total+=Y[j++];
    res+=total*hzntl;
    return res;
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int m,n;
        cin>>m>>n;
        m--;
        n--;
        int x[m];
        int y[n];
        for(int i=0;i<m;i++)
        cin>>x[i];
        for(int j=0;j<n;j++)
        cin>>y[j];
        cout<<minimumCostOfBreaking(x,y,m,n)<<endl;
    }
    return 0;
}