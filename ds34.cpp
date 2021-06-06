int PalinArray(int a[], int n)
{   
    int f=0;
    int temp=0;
    int k;
    for(int j=0;j<n;j++)
    {   
        int k=a[j];
        while(a[j]>0)
        {
          temp=10*temp+a[j]%10;
          a[j]=a[j]/10;
        }
        if(temp==k)
        {
            f=1;
            
        }else{
             f=0;
             return 0;
        }
        temp=0;
    }
    if(f==1)
    return 1;
}