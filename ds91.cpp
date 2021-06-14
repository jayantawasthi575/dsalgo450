vector<int> find(int arr[], int n , int x )
{
    vector<int>t1;
    for(int i=0;i<n;i++)
    {
        if(arr[i]==x)
        {
            t1.push_back(i);
            break;
        }
    }
    for(int i=n-1;i>=0;i--)
    {
        if(arr[i]==x)
        {
            t1.push_back(i);
            break;
        }
    }
    if(t1.empty())
    {
        t1.push_back(-1);
        t1.push_back(-1);
    }
    return t1;
}