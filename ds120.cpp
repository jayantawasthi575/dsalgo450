class Solution 
{
    public:
    //Function to find minimum number of pages.
    bool isfeasible(int arr[],int n,int m,int res)
    {
        int student=1,sum=0;
        for(int i=0;i<n;i++)
        {
            if(sum+arr[i]>res)
            {
                student++;
                sum=arr[i];
            }else{
                sum=sum+arr[i];
            }
        }
        return student<=m;
    }
    int findPages(int arr[], int n, int m) 
    {
        int max=arr[0];
        int temp=arr[0];
        for(int i=1;i<n;i++)
        {   
            temp=temp+arr[i];
            if(max<arr[i])
            max=arr[i];
        }
        int min=max;
        max=temp;
        int res=0;
        while(min<=max)
        {
            int mid=(min+max)/2;
            if(isfeasible(arr,n,m,mid))
            {
                res=mid;
                max=mid-1;
            }else{
                min=mid+1;
            }
        }
        return res;
    }
}