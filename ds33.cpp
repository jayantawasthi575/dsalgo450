
int minSwap(int *arr, int n, int k) {
    int cnt=0;
    for(int i=0;i<n;i++)
    {
        if(arr[i]<=k)
        {
            cnt=cnt+1;
        }
    }
    int cnt1=0;
    for(int m=0;m<cnt;m++)
    {
        if(arr[m]>k)
        {
            cnt1=cnt1+1;
        }
    }
    int s=cnt1;
    for(int l=0,o=cnt;o<n;l++,o++)
    {
        if(arr[l]>k)
        {
            cnt1--;
        }
        if(arr[o]>k)
        {
            cnt1++;
        }
        s = min(s,cnt1);
    }
    return s;
}
