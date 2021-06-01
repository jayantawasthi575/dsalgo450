class Solution{
    public:
    // arr: input array
    // n: size of array
    //Function to find the sum of contiguous subarray with maximum sum.
    int maxSubarraySum(int arr[], int n){
    int max=0;
    int cur=0;
    int l=0;
    for(int i=0;i<n;i++)
    {    
        if(arr[i]<0)
        {
            l++;
        }
        cur=cur+arr[i];
        if(cur>max)
        {
            max=cur;
        }
        if(cur<0)
        {
            cur=0;
        }
    }
    if(l==n)
    {
        max=arr[0];
        cur=arr[0];
        for(int j=1;j<n;j++)
        { 
        cur=cur+arr[j];
        if(cur>max)
        {
            max=cur;
        }
            
        }
    }
    return max;
    }
};