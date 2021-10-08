bool compare(struct val p1, struct val p2)
{
   return p1.second < p2.second;
}
int maxChainLen(struct val p[],int n)
{
    
    sort(p, p+n, compare);
    int i,j,max=0;
    int mcl[n];
    for(int i=0;i<n;i++)
    {
        mcl[i]=1;
    }
    for(int i=1;i<n;i++)
    for(int j=0;j<i;j++)
    {
        if(p[i].first>p[j].second && mcl[i]<mcl[j]+1 )
        {
            mcl[i]=mcl[j]+1;
        }
    }
    for(int i=0;i<n;i++)
    if(max<mcl[i])
    max=mcl[i];
    return max;
}