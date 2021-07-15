class Solution{
    public:
    long long int maximizeSum(long long int a[], int n, int k)
    {
        long long int ans=0;
        sort(a,a+n);
        for(int i=0;i<n;i++)
        {
            if(k>0 && a[i]<0)
            {
                a[i]=-1 * a[i];
                k--;
            }
            ans=ans+a[i];
        }
        if(k>0)
        {
            sort(a,a+n);
            ans=ans-a[0];
            while(k>0)
            {
                a[0]=-1*a[0];
                k--;
            }
            ans=ans+a[0];
        }
        return ans;
    }
};