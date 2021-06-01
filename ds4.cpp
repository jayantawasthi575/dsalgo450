class Solution
{
    public:
    void sort012(int a[], int n)
    {
        // coode here 
        int z=-1,on=-1,tw=-1;
        for(int i=0;i<n;i++)
        {
            if(a[i]==0)
            {
                z++;
            }else if(a[i]==1)
            {
                on++;
            }else{
                tw++;
            }
        }
        for(int kk=0;kk<=z;kk++)
        {
            a[kk]=0;
        }
        for(int mm=0;mm<=on;mm++)
        {
            z++;
            a[z]=1;
        }
        for(int ll=0;ll<=tw;ll++)
        {
            z++;
            a[z]=2;
        }
    }
    
};
