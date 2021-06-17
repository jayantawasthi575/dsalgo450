class Solution
{
    public:
    //Function to find the maximum money the thief can get.
    int FindMaxSum(int arr[], int n)
    {
        int incl=arr[0];
        int excl=0;
        int temp=incl;
        for(int i=1;i<n;i++)
        {
            incl=max(excl+arr[i],incl);
            excl=temp;
            temp=incl;
        }
        return incl;
    }
};