class Solution{
    public:
    int trappingWater(int arr[], int n){
        int left[n],right[n];
        left[0]=arr[0];
        right[n-1]=arr[n-1];
        for(int i=1;i<n;i++)
        {
            left[i]=max(left[i-1],arr[i]);
        }
        for(int k=n-2;k>=0;k--)
        {
            right[k]=max(right[k+1],arr[k]);
        }
        int sum=0;
        for(int i=0;i<n;i++)
        {
            sum=sum+min(left[i],right[i])-arr[i];
        }
        return sum;
    }
};