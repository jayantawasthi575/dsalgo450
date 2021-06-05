bool find3Numbers(int A[], int n, int X)
{
    int l=0;
    int k=0;
    int s=0;
    sort(A,A+n);
    for(int i=0;i<n;i++)
    {
        l=i+1;
        k=n-1;
        s=A[i];
        while(l<k)
        {
            if(s+A[l]+A[k]>X)
            {
                k--;
            }else if(s+A[l]+A[k]<X)
            {
                l++;
            }else if(s+A[l]+A[k]==X)
            {
                return true;           
            }
        }
    }
    return false;
}